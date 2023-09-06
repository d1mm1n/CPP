#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

// 단어모음 TXT파일 불러오기
string RoadWord() {
    string word;
    ifstream file("C:\\Users\\hong\\Desktop\\words.txt"); // 파일 열기
    srand(time(NULL)); // 매번 다른 난수를 생성

    int n = rand() % 100 + 1; // 1~100까지의 난수를 생성

    // 파일에서 n번째 단어를 가져와 word에 저장
    for (int i = 1; i <= n; i++) {
        getline(file, word);
    }
    //cout << word << endl;

    return word;
}

void GameReset(string& solution, int& chance, int& Try, char* tries, string& guess) {
    cout << "게임을 재시작 하시겠습니까? (Y/N): ";
    char answer; // 사용자의 게임 재시작 여부 대답을 저장할 변수
    cin >> answer;  //사용자로 부터 알파벳 입력받기
    if (answer == 'Y') {
        solution = RoadWord(); // 단어 재생성
        chance = 7; // 기회 재생성
        Try = 0; //시도한 알파벳이 저장될 인덱스 번호를 정하는 변수
        for (int i = 0; i < 8; i++) {
            tries[i] = '\0'; // 배열 초기화
        }
        guess = string(solution.length(), '-'); // guess를 '-'으로 초기화
    }
    else if (answer == 'N') exit(0); //프로그램 종료
}

int main() {
    char ch;
    string solution = RoadWord(); // 정답 저장
    int chance = 7; // 사용자의 횟수 제한 (7번)
    int Try = 0; // 시도한 알파벳을 보여줄 때 반복 횟수 기준 변수
    char tries[8] = {}; //시도한 알파벳을 저장한 배열
    string guess(solution.length(), '-'); // guess를 '-'으로 초기화

    do {
        chance -= 1;
        Try += 1;
        cout << guess << endl; // guess의 현재 상태 보여주기
        cout << "글자를 입력하시오:"; // 사용자가 글자 추측
        cin >> ch;
        tries[Try] = ch;

        cout << "남은 횟수는 " << chance << "번 입니다. ";
        cout << "(시도한 알파벳:";
        //시도한 알파벳을 출력
        for (int k = 0; k <= Try; k++) {
            //배열안에 저장된 알파벳을 출력
            cout << tries[k] << ' ';
        }
        cout << " )" << endl;

        cout << "\n" << "\n" << endl;
        for (int i = 0; i < solution.length(); i++) {
            if (ch == solution[i])
                guess[i] = ch; //사용자가 입력한 알파벳 정답에 맞춰 guess를 수정
        }
        //정답을 맞추었을 경우
        if (solution == guess) {
            cout << solution << endl;
            cout << "성공하였습니다!!";
            GameReset(solution, chance, Try, tries, guess); // 게임 재시작 함수호출
        }
        //기회를 모두 사용하였을 경우
        if (chance == 0) {
            cout << "실패 입니다! 기회를 모두 사용하였습니다! ";
            GameReset(solution, chance, Try, tries, guess); // 게임 재시작 함수호출
        }

    } while (true);

    return 0;
}

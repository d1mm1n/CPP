#include <iostream>
#include <string>
using namespace std;

//****수정할 것****
//칸 맞추기 o
//한쪽이 승리하면 승부 판단, 결과 출력, 게임 종료후 한판더 할껀지 말껀지
// 사용자에게 게임을 계속할껀지 묻기  o
//보드판에 결과 알려주기  o

char board[3][3];
int x, y, k, i;


char WinnerCheck() {
	for (int j = 0; j < 3; j++) {

		if (board[j][0] == board[j][1] && board[j][1] == board[j][2]) {
			return board[j][0];
			
		}
	}
}


int main() {
	char answer ;
	for (x = 0; x < 3; x++)//보드 초기화
		for (y = 0; y < 3; y++)
			board[x][y] = ' ';

	k = 1;
	//여기선 9번 반복했지만 한쪽이 승리하면 게임 중지되도록 수정하기
	for (;;) { //사용자로부터 위치를 받아 보드에 표시
		k++;
		cout << "(x,y) 좌표:";
		cin >> x >> y;
		board[x][y] = (k % 2 == 0) ? ' X' : ' O';

		for (i = 0; i < 3; i++) { //보드를 화면에 그린다.
			cout << "---|---|---" << endl;
			cout << board[i][0] << "  | " << board[i][1] << " | " << board[i][2] << endl;
		}

		cout << "---|---|---" << endl;
		
		char winner=WinnerCheck();

		if (winner != ' ') {
			cout << "승자는"<< winner <<"입니다!" <<endl;

			cout << "게임을 계속 진행하시겠습니까? (Y/N): ";
			cin >> answer;

			//게임 종료 조건문
			if (answer == 'N') break;
		}
		
	}
	return 0;
}


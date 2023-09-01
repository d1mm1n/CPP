#include <iostream>
#include <string>
using namespace std;

//보드판 2차원 배열 선언
char board[3][3];
int x, y, k, i;

//승리 체크 함수
char WinnerCheck() {
	int j;
	for (j = 0; j < 3; j++) {
		//가로 검사
		if (board[j][0] == board[j][1] && board[j][1] == board[j][2]) {
			return board[j][0];
			
		}
		//세로 검사
		else if (board[0][j] == board[1][j] && board[1][j] == board[2][j]) {
			return board[0][j];
		}
	}
	//대각선 검사 0,0  1,1  2,2  // 0,2  1,1  2,0
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
		return board[0][0];
	}
		
	else if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
		return board[0][2];
	}
	
	return ' '; //승리자 없음
}

//새로운 틱택토 보드판 만들기 함수
void new_board(){
	k = 1;
	for (x = 0; x < 3; x++)//보드 초기화
		for (y = 0; y < 3; y++)
			board[x][y] = ' ';
}

//메인 함수
int main() {
	char answer ;
	new_board();

	for (;;) { //사용자로부터 위치를 받아 보드에 표시
		//k는 O와 X를 순서를 결정하도록 하는 변수
		k++;
		cout << "(x,y) 좌표:";
		cin >> x >> y;
		board[x][y] = (k % 2 == 0) ? ' X' : ' O';

		for (i = 0; i < 3; i++) { //보드를 화면에 그린다.
			cout << "---|---|---" << endl;
			cout << board[i][0] << "  | " << board[i][1] << " | " << board[i][2] << endl;
		}

		cout << "---|---|---" << endl;
		
		//승리 검사 함수 호출 후 반환 값을 변수 winner에 저장
		char winner=WinnerCheck();


		//한쪽이 승리하면 게임이 종료 되고 재시작 여부를 묻도록 구현
		if (winner != ' ') {
			cout << "승자는 "<< winner <<" 입니다!" <<endl;

			cout << "게임을 계속 진행하시겠습니까? (Y/N): ";
			cin >> answer;

			//게임 종료 조건문
			if (answer == 'N') break;
			else if (answer == 'Y') {
				//사용자가 게임을 계속 진행하길 원하면 새로운 보드판 생성 후 게임 재시작
				new_board();
			}	
		}
		
	}
	return 0;
}


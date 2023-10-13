//배열 인덱스 실수 했음 잘생각하기
#include <iostream>

using namespace std;


int main(){
	int days[13] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	for (int i = 0; i < 12; i++) {
		cout << i + 1 << "월은" << days[i] << "일까지 있습니다." << endl;
	}
}


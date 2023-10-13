//02번: 5개의 음료 자동판매기 머신 구현
#include <iostream>

using namespace std;


int main(){
	int choice;
	cout << "콜라, 물, 스프라이트, 주스, 커피 중에서 하나를 선택하세요: ";

	if (choice == 1) cout << "콜라를 선택하였습니다.";
	else if (choice == 2) cout << "물을 선택하였습니다.";
	else if (choice == 3) cout << "스프라이트을 선택하였습니다.";
	else if (choice == 4) cout << "주스을 선택하였습니다.";
	else if (choice == 5) cout << "커피을 선택하였습니다.";
	else cout << "주문 번호 오류";
}


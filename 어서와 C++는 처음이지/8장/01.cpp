#include <iostream>
/*처음에
int* n = new int[num];
	for (int &i : n) {

	}
	이렇게 작성하려 했는데 오류남 ㅜ- 포인터는 범위-기반 지원 안한댄다..? 그래서 배열이나 벡터를 쓰래요
*/

using namespace std;

int main(){
	int num;
	cout << "몇 개의 정수를 입력합니까?: ";
	cin >> num;

	int* n = new int[num];
	for (int i = 0; i < num; i++) {
		cout << "정수를 입력하시오: ";
		cin >> n[i];
	}

	cout << "입력된 정수는: ";
	for (int j = 0; j < num; j++) {
		cout << n[j] << ", ";
	}
	delete[]n;
}


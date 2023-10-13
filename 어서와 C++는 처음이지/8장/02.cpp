#include <iostream>
using namespace std;

int main(){
	int num;
	cout << "얼마나 많은 이름을 입력 하시겠습니까? :";
	cin >> num;
	string *name = new string[num];
	
	string n;
	for (int i = 0; i < num; i++) {
		cout << "이름입력 #" << i + 1 << ": ";
		cin >> n;
		name[i] = n;
	}

	cout << "다음은 이름 목록입니다." << endl;
	for (int i = 0; i < num; i++) {
		cout << name[i]<<endl;
	}
	delete []name;

}


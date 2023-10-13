#include <iostream>
#include <algorithm>
#include <vector>
//1번
using namespace std;

bool compare(string v1,string v2) {
	return v1 < v2;
}

int main(){
	vector<string> vec = {"MILK","BUTTER","BREAD","SALAD","CUCUMBER"};

	for (string s : vec) {
		cout << s << endl;
	}

	vector<string> ::iterator p;
	
	cout << "\n\n";
	//반복자 사용
	cout << "반복자 사용" << endl;
	for (p = vec.begin(); p != vec.end(); ++p) {
		//* 연산자를 무조껀 붙여줘야함
		cout << *p << endl;
	}
	cout << "\n\n";

	//정렬된 벡터 출력
	cout << "정렬 후"<<endl;
	sort(vec.begin(), vec.end(), compare);
	for (string s : vec) {
		cout << s << endl;
	}
}


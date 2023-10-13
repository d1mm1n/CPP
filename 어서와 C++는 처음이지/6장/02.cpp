#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//compare 작성 부분에서 살짝 헷갈렸음

bool compare(string &s1, string &s2) {
	if (s1 < s2) return true;
	else false;
}


int main() {
	int num = 0;
	cout << "문자열의 개수:";
	cin >> num;

	string s;
	vector<string> vec(num);

	for (int i = 0; i < num; i++) {
		cout << "문자열을 입력하시오: ";
		cin >> s;
		vec[i] = s;
	}

	
	sort(vec.begin(), vec.end(), compare);

	for (string v : vec) {
		cout << v << endl;
	}

}


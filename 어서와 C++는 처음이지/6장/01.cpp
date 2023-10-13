#include <iostream>
#include <vector>

//처음에 vector<int> v(num) 으로 만들어서 벡터에 000,,, 이 들어있었는데 거기에 push_back 해서 값을 넣어주는 실수를 함,,,
// 이렇게 하면 000040 10 1,, 이런식으로 들어가서 최소값이 계속 0이라는 문제가 있었음! 주의하기
using namespace std;

int main() {
	int num= 0;
	cout << "정수의 개수를 입력하세요: ";
	cin >> num;
	vector<int> v;

	int n=0;
	for (int i = 0; i < num; i++) {
		cout << "정수를 입력하세요:";
		cin >> n;
		v.push_back(n);
	}
	int max=v[0];
	int min =v[0];

	for (int ve : v) {
		if (ve >= max) max = ve;
		if (ve <= min) min = ve;
	}

	cout << "최대값: " << max << endl;
	cout << "최소값: " << min << endl;

}
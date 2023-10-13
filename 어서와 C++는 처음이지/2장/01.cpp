//01번: 사용자로부터 2개의 문자열을 읽어서 같은지 다른지를 화면에 출력한다.
#include <iostream>

using namespace std;


int main(){
	string s1, s2;
	cout << "첫 번째 문자열:";
	cin >> s1;

	cout << "두 번째 문자열:";
	cin >> s2;

	if (s1 == s2) cout << "2개의 문자열이 같습니다.";
	else cout << "두개의 문자열이 다릅니다.";
}


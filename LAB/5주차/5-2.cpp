#include <iostream>
#include <algorithm>
#include <vector>
//2번 생성자와 소멸자 어디서 생성되고 언제 소멸되는지 정확하게 알기
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle(int r) :radius(r) { cout << "Crying" << endl; }
	int getRadius() { return radius; }

	~Circle() { cout << "Dying" << endl; }
};


int main(){
	vector<Circle> v; //벡터 내부에 객체가 추가되지 않았으므로 생성자가 호출되지 않는다.

	for (int i = 1; i < 4; i++) {
		cout << "객체 추가 c("<<i<<")" << endl;
		Circle c(i); //생성자 호출
		
		cout << "push_back(c)!!" << endl;
		v.push_back(c);  //벡터 v에 객체 c복사 (v와 c는 별개의 객체)
	} //루프의 반복이 끝날때 c객체의 스코프(?) 가 종료, c객체의 소멸자 호출 -> c객체가 벡터에 복사된 모든 원소에 대해 한번씩 발생 (소멸자가)

	for (auto& c : v) { //원본 객체를 참조 하기 때문에 생성자, 소멸자 호출하지 않음
		cout << c.getRadius() << endl; 
	}

	//벡터 객체 v 소멸, 소멸자 호출 
}


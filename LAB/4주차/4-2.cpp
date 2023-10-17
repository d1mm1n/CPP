#include <iostream>
using namespace std;

class Circle {
private: 
	int radius;
public:
	Circle() { cout << "생성자임 반지름"<<radius << endl; }
	Circle(int r):radius(r){}
	void print() { cout << "radius: " << radius << endl; };
	void setRadius(int r) { radius = r; }
	int getRadius() { return radius; }

	~Circle() { cout << "소멸자임 반지름"<<radius << endl; }
};

int main() {
	//***아래와 같이 초기값 없는 객체 배열 만들면 기본생성자를 꼭 만들어 줘야함!***
	Circle arrCir[3];

	//Circle c에서는 복사 생성자 생성됨
	for (Circle &c : arrCir) {
		c.setRadius(rand() % 10 + 1);
	}

	for (Circle c : arrCir) {
		c.print();
	}
}	
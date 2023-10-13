#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	void setRadius(int radius) { this->radius = radius; } //반지름 설정
	double getArea() { return radius * radius * 3.14; };
};


int main(){
	int num;
	
	cout << "생성할 원의 개수: ";
	cin >> num;

	Circle* c = new Circle[num];
	int r;
	for (int i = 0; i < num; i++) {
		cout << "원 " << i + 1 << "의 반지름:";
		cin >> r;
		c[i].setRadius(r);
	}
	int n = 0;
	for (int k = 0; k < num; k++) {
		if (c[k].getArea() > 100) n++;
	}
	cout << "면적이 100보다 큰 원은" << n << "개 입니다.";

	delete[]c;

}


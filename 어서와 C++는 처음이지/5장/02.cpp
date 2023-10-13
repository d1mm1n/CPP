#include <iostream>

//main 함수에서 접근자와 설정자 호출은 생략함
using namespace std;

class Airplane {
private:
	string name;
	int capacity;
	int speed;
public:
	Airplane(){}
	Airplane(string n, int ca, int s):name(n),capacity(ca),speed(s){}
	void setName(int n) { name = n; }
	void setCapacity(int c) { capacity = c; }
	void setSpeed(int s) { speed = s; }

	string getName() { return name; }
	int getCapacity() { return capacity; }
	int getSpeed() { return speed; }

	void print() {
		cout << "비행기의 이름: " << getName() << endl;
		cout << "비행기의 용량 " << getCapacity() << endl;
		cout << "비행기의 속도" << getSpeed() <<"km/h" << endl;
	}

};



int main() {
	Airplane a1("보잉 787",900, 300);
	Airplane a2("에어버스 350", 400,1000);

	cout << "비행기 #1" << endl;
	a1.print();

	cout << "비행기 #2" << endl;
	a2.print();

}
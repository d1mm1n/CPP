#include <iostream>
using namespace std;
//객체 동적 배열 초기화 방법 헷갈렸음, equal 함수 작성 아주 박박 다틀림 포인터 개념 부족했음

class Time {
private:
	int hour, min, sec;
public:
	Time(){}
	Time(int h,int m, int s):hour(h),min(m),sec(s){}
	void setHour(int h) { hour = h; }
	void setMin(int m) { min = m; }
	void setSec(int s) { sec = s; }

	int getHour() { return hour; }
	int getMin() { return min; }
	int getSec() { return sec; }
	~Time() {}
};
bool isEqual(Time& t1, Time& t2) {
	return (t1.getHour() == t2.getHour() && t1.getMin() == t2.getMin() && t1.getSec() == t2.getSec());

}

bool isEqual(Time* t1, Time* t2) {
	return (t1->getHour() == t2->getHour() && t1->getMin() == t2->getMin() && t1->getSec() == t2->getSec());

}

int main(){
	int h1, m1, s1;
	int h2, m2, s2;

	cout << "Time 객체: ";
	cin >> h1 >> m1 >> s1;
	cout << "Time 객체: ";
	cin >> h2 >> m2 >> s2;

	Time* t = new Time[2]{Time(h1,m1,s1),Time(h2,m2,s2)};
	 
	//첫 번째 isEqual함수 호출
	if (isEqual(t[0], t[1])) cout << "시간이 일치합니다." << endl;
	else cout << "시간이 일치하지 않습니다."<<endl;


	//두 번째 isEqual함수 호출
	if (isEqual(&t[0], &t[1])) cout << "시간이 일치합니다." << endl;
	else cout << "시간이 일치하지 않습니다." << endl;

	delete[]t;
}


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//compare 함수부분이랑 벡터 틀렸었음 잘보기, 심지어 데이터 타입도 잘못썻었음? 왜그러냐 지민아?

class Student {
private:
	string name;
	double marks;
public:
	Student() {}
	Student(string n, double m) :name{ n }, marks{ m }{}
	void setName(string n) { name = n; }
	void setMarks(double m) { marks = m; }

	string getName() { return name; }
	double getMarks() { return marks; }
};

bool compare(Student &m1, Student & m2) {
	if (m1.getMarks() > m2.getMarks()) return true;
	else return false;
}


int main(){
	vector<Student> s(3);

	string name;
	double marks;

	for (int i = 0; i < 3; i++) {
		cout << "이름: ";
		cin >> name;
		cout << "학점: ";
		cin >> marks;
		s[i].setName(name);
		s[i].setMarks(marks);
	}
	sort(s.begin(), s.end(), compare);


	cout << "정렬 후" << endl;
	for (Student st : s) {
		cout << st.getName() << endl;
		cout << st.getMarks() << endl;
	}
}


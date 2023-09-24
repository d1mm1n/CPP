#include <iostream>
#include <string>

using namespace std;

class Student {
private:
	string name;
	double marks;

public:
	//생성자
	Student() {
		name = "Anonymous";
		marks = 0;
		cout << name << " is crying" << endl;
	}

	Student(string n, double m):name{n},marks{m}{
		cout << n << " is crying" << endl;
	}
	
	//소멸자
	~Student();

	void Setname(string n) {
		name = n;
	}
	void Setmarks(double m) {
		marks = m;
	}

	string Getname() {
		return name;
	}
	double Getmarks() {
		return marks;
	}

};
//소멸자
Student ::~Student() {
	cout << name << " is dying \n";
}

void print(Student s[], int n) {
	for (int i = 0; i < n; i++) {
		cout <<"Name: " << s[i].Getname() <<"  Marks: "<< s[i].Getmarks()<< endl;
	}
}

void update(Student &s) {
	string name;
	double marks;

	cout << "Enter a student name: ";
	cin >> name;
	s.Setname(name);

	cout << "Enter the marks: ";
	cin >> marks;
	s.Setmarks(marks);
}


int main() {
	Student students[3];

	for (auto& s : students) {
		update(s);
	}

	print(students, 3);
	
	return 0;

}
#include <iostream>
#include <string>

using namespace std;

class Student {
private:
	string name;
	double marks;
public:
	Student() {
		name = "Anonymous";
		marks = 0;
	}

	Student(string n, double m):name{n},marks{m}{}
	
	string Getname() {
		return name;
	}
	double Getmarks() {
		return marks;
	}

};

void print(Student s) {
	cout << "Name: "<<s.Getname()<<" ";
	cout << "Marks: " << s.Getmarks() << " \n";
}


int main() {
	Student s1;
	Student s2("Gildong",4.5);

	cout << s1.Getname() << " is crying" << endl;
	cout << s2.Getname() << " is crying"<< endl;

	print(s1);
	print(s2);

	cout << s1.Getname() << " is dying" << endl;
	cout << s2.Getname() << " is dying" << endl;
}
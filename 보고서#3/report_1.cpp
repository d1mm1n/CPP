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
	cout << s.Getname() << " is crying"<<endl;
	cout << "Name: "<<s.Getname()<<" ";
	cout << "Marks: " << s.Getmarks() << " \n";
	cout << s.Getname() << " is dying" << endl;
}


int main() {
	Student s1;
	Student s2("Gildong", 4.5);


	print(s1);
	print(s2);


}
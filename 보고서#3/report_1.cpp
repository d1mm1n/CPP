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
	~Student(){
        cout << name << " is dying \n";
    }

	string Getname() {
		return name;
	}
	double Getmarks() {
		return marks;
	}

};


//복사 생성자 호출을 방지 하기 위해 참조로 매개변수를 받습니다.
//이렇게 해야지 Student객체의 복사본을 만들지 않으며, 생성자와 소멸자가 두 번씩 호출되지 않습니다.
void print(Student &s) {
	cout << "Name: "<<s.Getname()<<" ";
	cout << "Marks: " << s.Getmarks() << " \n";
}


int main() {
	Student s1;
	Student s2("Gildong", 4.5);

	print(s1);
	print(s2);
	
	return 0;

}
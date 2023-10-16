#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Person {
private:
	string name;
	int age;
public:
	Person(){}
	Person(string n, int a):name(n),age(a){}

	void setName(string n) { name = n; }
	void setAge(int a) { age = a; }

	string getName() { return name; }
	int getAge() { return age; }
	
	void print() { cout << "이름: " << name << "나이: " << age <<endl; }
};

bool compare(Person p1, Person p2){
	return p1.getAge() < p2.getAge();
}

int main() {

	vector<Person> v;
	
	int i = 0;
	string n;
	int a;
	char ans;

	for(;;) {
		cout << "Enter a name: ";
		cin >> n;
		cout << "Enter an age: ";
		cin >> a;
		v.push_back(Person(n,a));
		
		cout << "Continue?(y/n): ";
		cin >> ans;
		
		if (ans == 'n') break;
		i++;
	} 

	

	//정렬
	sort(v.begin(), v.end(), compare);
	cout <<"\n\n" << "정렬 후" << endl;
	for (auto& p : v) {
		p.print();
	}

	return 0;
}

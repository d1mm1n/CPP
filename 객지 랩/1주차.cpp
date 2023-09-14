#include <iostream>
#include <string>
using namespace std;

int PayCheck(string order, int count) {
	int sum=0;

	if (order == "Espresso") {
		sum = count * 4000;
	}
	else if (order == "Americano") {
		sum = count * 4500;
	}
	else if (order == "Cafuccino") {
		sum = count * 5000;
	}
	else {
		cout << "You have a wrong order" << endl;
		return 0;
	}

	cout << "Pay for " << sum << endl;
	return sum;
}

int main() {
	int count;
	string order;
	int goal;
	int earned=0;

	cout << "Menu: Espresso: 4000, Americano: 4500, Cafuccino: 5000" << endl;
	cout << "Enter goal amount today:";
	cin >> goal;
	
	do {
		cout << "What item?>>";
		cin >> order;

		cout << "How many?>>";
		cin >> count;

		earned+= PayCheck(order, count);
		
	} while (earned<goal);

	cout << "Great Job! You earned" << earned;
}

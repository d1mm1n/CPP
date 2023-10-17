#include <iostream>
using namespace std;

void swap(int &a, int &b) {
	int tmp = a;
	a = b;
	b = tmp;
}

void reverse(int arr[], int n) {
	int k= n / 2;
	for (int i = 0; i < k; i++) {
		swap(arr[i], arr[n-1]);
		n--;
	}
}


int main() {
	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
	int b[] = { 1,2,3,4,5,6,7,8,9,10,11};

	reverse(a, 10);
	reverse(b, 11);

	for (int i = 0; i < 10; i++) {
		cout << a[i]<<" ";
	}
	cout << "\n\n";

	for (int i = 0; i < 11; i++) {
		cout << b[i] << " ";
	}
	
}	
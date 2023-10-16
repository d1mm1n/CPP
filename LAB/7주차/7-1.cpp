#include <iostream>
//복사 생성자의 개념 제발제발 생성자 소멸자 제발 정확하게 알기
using namespace std;

class Complex {
private:
	int real, imag;
public:
	Complex() { cout << "생성자아"<<endl; };
	Complex(int r, int i) :real(r), imag(i) { cout << "Constructor is calling: " << r << "+" << i << "i" << endl; }
	//복사 생성자만드는법 꼭 알아두기 꼭 꼭곡
	Complex(const Complex &other):real(other.real),imag(other.imag){ cout << "Copy constructor is calling: " << other.real << "+" << other.imag << "i" << endl; }
	void setReal(int r) { real = r; }
	void setImage(int i) { imag = i; }
	int getReal() const { return  real; }
	int getImag() const { return imag; }

	void print() { cout << real << "+" << imag << "i" << endl; }
	//소멸자
	~Complex(){cout<<"Destructor is calling" << real << "+" << imag << "i" << endl;}
};

Complex add(const Complex c1, const Complex c2)
{
	int r = c1.getReal() + c2.getReal();
	int i = c1.getImag() + c2.getImag();
	return Complex(r, i);
}

int main() {
	Complex c1(1, 2), c2(3, 4), t;
	t = add(c1, c2);

	t.print();
	
	return 0;
}

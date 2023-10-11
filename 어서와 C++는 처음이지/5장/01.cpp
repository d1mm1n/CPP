#include <iostream>
#include <string>
using namespace std;

class Book {
private:
	string title;
	string author;
public:
	Book(string t, string a) :title(t), author(a) {}
	void setTitle(string t) { title = t; }
	void setAuthor(string a) { author = a; }
	string getTitle() { return title; }
	string getAuthor() { return author; }
	void print() {
		cout << "책이름: " << getTitle() << endl;
		cout << "책 저자: " << getAuthor();
	}
};


int main() {
	Book book("Great C++", "Bob");
	book.print();
}
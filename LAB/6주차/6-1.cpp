#include <iostream>
using namespace std;

class Rect {
private:
	int width, height, area;

public:
	void setWidth(int w) { width = w; }
	void setHeight(int h) { height = h; }
	void setArea(int a) { area = a; }

	int getWidth() { return width; }
	int getHeight() { return height; }
	int getArea() { return area; }
	
	void display() {
		cout << "Width: " << width;
		cout << ", Height: " << height;
		cout << ", Area: " << area;
		cout << "\n\n";
	}
	~Rect() { cout << "Dying:: Width: " << width << ", Height: " << height; }
};

//사각형의 면적을 반환하는 외부함수
int calcArea(Rect &r) {
	return r.getHeight() * r.getWidth();
}


int main() {
	//(c)사각형 객체를 가리키는데 사용 될 수 있는 포인터 r을 선언
	Rect* r;
	//(d)
	r = new Rect;

	//(e)
	r->setWidth(10);
	r->setHeight(20);

	//(g) 여기서 *r을 보내주는거!!!!!!! 주의!!! 난 몰랐음
	r->setArea(calcArea(*r));

	//(h)
	r->display();

	//(i)
	delete r;

	return 0;
}
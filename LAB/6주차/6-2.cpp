//6주차 2번
//진짜 헬이었음 이해도가 낮아서 그랬는지 너무 힘들었음 졸려서 그런가? 꼭 모든걸 다 이해하고 넘어가야함
// 글구   *랑 &랑 잘 알아야함 꼭 ...
#include <iostream>
#include <algorithm>
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

bool compare(Rect* a1, Rect* a2) {
	return a1->getArea() < a2->getArea();
}


int main() {
	//(a) 
	Rect* ar[10];
	
	//(b)
	for (int i = 0; i < 10; i++) {
		ar[i] = new Rect();
		// 난수를 이용해 width와 height 설정
		int randomWidth = rand() % 10 + 1;
		int randomHeight = rand() % 10 + 1;

		ar[i]->setWidth(randomWidth);
		ar[i]->setHeight(randomHeight);
	}

	// 생성된 Rect 객체 정보를 출력
	for (int i = 0; i < 10; i++) {
		ar[i]->display();
	}

	//진짜 for-each문에서 Rect *r에 "*" 가 아니라 &써서 하루 왠종일 걸림 진짜 바보냐????
	for (Rect* r : ar) { 
		int area = r->getWidth() * r->getHeight(); // 면적 계산
		r->setArea(area); // 면적을 area 멤버에 설정
	}
	//(e) display함수를 이용하여 정보출력하기
	for (Rect* r : ar) {
		r->display();
	}


	//(f) 오름차순 정리하기
	sort(ar, ar + 10, compare);
	cout << "정렬 후"<<endl;
	for (Rect* r : ar) {
		r->display();
	}

	// 메모리 해제
	for (int i = 0; i < 10; i++) {
		delete ar[i];
	}
	return 0;
}
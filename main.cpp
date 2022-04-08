#include<iostream>
using namespace std;

class koopa {
private:
	int xPosition;
	int yPosition;
	char dir;
	char direct;
public:
	koopa(int x, int y); //constructor!
	void move(); //move function
	void print();

};


int main() {
	koopa k1(400, 400);
	koopa k2(250, 400);
	koopa k3(400, 400);
	//with a constructor it's just one line!
	while (1) {//game loop!
	//physics
		k1.move();
		k2.move();
		k3.move();
		//render section!
		k1.print();
		k2.print();
		k3.print();
		system("pause");
	}
}

koopa::koopa(int x, int y) {
	xPosition = x;
	yPosition = y;
	dir = 'l';
	direct = 'u';

}


void koopa::move() {
	if (xPosition <= 0)
		dir = 'r';
	if (xPosition >= 800)
		dir = 'l';
	if (dir == 'l')
		xPosition -= 10;
	if (dir == 'r')
		xPosition += 10;
	//UP & DOWN
	if (yPosition <= 0)
		direct = 'd';
	if (yPosition >= 400)
		direct = 'u';
	if (direct == 'u')
		yPosition -= 10;
	if (direct == 'd')
		yPosition += 10;
}

void koopa::print() {
	cout << "Hi, I'm a koopa and I'm at " << xPosition << "," << yPosition << endl;
}

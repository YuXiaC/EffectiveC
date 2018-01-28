#include <iostream>
#define CALL_MAX(a,b) ((a)>(b)?(a):(b))

int main() {
	int a = 5, b = 0;
	int x,y;
	//x = CALL_MAX(++a, b);
	y = CALL_MAX(++a, b+10);
	std::cout << y << std::endl;
	return 0;
}
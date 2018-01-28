#include <memory>
#include <iostream>
#include <string>

using std::shared_ptr;
using std::string;
using std::cout;
using std::endl;

void ceshi(shared_ptr<int> spi) {
	cout << "hhh" << endl;
}

void ceshi() {
	shared_ptr<int> pp(new int[10],);
}


int main() {
	shared_ptr<int> spi(new int[10]);
	//int *p = spi;//±¨´í
	int num = 10;
	int *p2 = &num;
	//shared_ptr<int> sp2(p2);
	//ceshi(shared_ptr<int>(p2));
	//delete sp2;
	ceshi();
	return 0;
}
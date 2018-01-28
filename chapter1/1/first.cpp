#include <iostream>

class B {
public:
	 B(int x = 0, bool b = true) :num(x), bl(b) {};
private:
	int num;
	bool bl;
};

void doSomething(B bobject) {
	std::cout << "test B" << std::endl;
}

int main() {
	B bObj1;
	doSomething(bObj1);
	B bObj2(28,true);
	doSomething((28,true));
	doSomething(B(28,true));
	return 0;
}
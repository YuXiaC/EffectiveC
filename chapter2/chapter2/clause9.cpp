#include <iostream>
#include <string>
using std::endl;
using std::string;
using std::cout;

class Sales {
public:
	Sales()=default;
	Sales(int i):amount(i) {}
	int return_amount() { return amount; }
	virtual double revenue() = 0;
private:
	int amount;
};

class Pants :public Sales {
public:
	Pants(double d, string str,int i):Sales(i),price(d),brand(str) {}
	double revenue() {
		return price*return_amount();
	}
private:
	string brand;
	double price;
};

int main() {
	/*int *p1 = new int(10);
	int *p2 = new int(11);
	p2 = p1;
	int i = 0;
	delete p1;*/

	Pants p(20.12, "Nake",100);
	int num=p.return_amount();
	double d = p.revenue();
	return 0;
}
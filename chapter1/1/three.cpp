#include <iostream>
#include <string>
#include <vector>
using std::string;
using std::cout;
using std::endl;
using std::vector;

void f1(const string *pstr) {
	cout << "f1(const string *pstr)" << endl;
}

void f2(string const *pstr) {
	cout << "f2(string const *pstr)" << endl;
}

int main() {
	int x = 10, y = 20;
	const int z = 30;
	int const w = 40;
	int const *p1 = &x;
	const int *p2 = &x;
	const int* const p3 = &y;
	const int const *p4 = &y;
	string str("hello world!");
	string *ptr = &str;
	f1(ptr);
	f2(ptr);
	const vector<int> vec{ 1,2,3,4 };
	const std::vector<int>::const_iterator iter = vec.begin();
	//vec.push_back(z);

	return 0;
}
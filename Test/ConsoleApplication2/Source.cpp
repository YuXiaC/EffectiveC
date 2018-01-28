
#include <iostream>
using namespace std;

struct testA
{
	int i;
	char ch;

};

struct testB
{
private:
	int i;
	char ch;

};

testA a1;
testB b1;

int main()
{
	testA a2;
	testB b2;
	b2.ch = 'i';
}
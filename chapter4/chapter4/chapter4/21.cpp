#include <iostream>
#include "Sales_data.h"



int main() {
	Sales_data s1("10010", 1000, 12.40), s2("10010", 1210, 12.3),s3("10010",2000,21.21);
	Sales_data &add1 = s1 + s2;
	Sales_data &add2 = s1 + s3;
	if ((s1 + s2) == (s2 + s3))
		cout << "hello" << endl;
	return 0;
}
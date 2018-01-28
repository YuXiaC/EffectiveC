#include <iostream>
#include <memory>
using std::shared_ptr;

int main() {
	shared_ptr<int> sptr(static_cast<int*>(0));
	return 0;
}
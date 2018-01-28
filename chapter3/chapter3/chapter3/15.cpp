#include <iostream>
#include <memory>
using std::cout;
using std::endl;
using std::shared_ptr;

void lock(int *p) {
	cout << "lock" << endl;
}

void unlock(int *p) {
	cout << "unlock" << endl;
}

class Lock {
public:
	explicit Lock(int *pm):mutexPtr(pm,unlock){
		lock(mutexPtr.get());
	}
private:
	shared_ptr<int> mutexPtr;
};



void ceshi(int *p) {
	Lock loc1(p);
}

int main() {
	int num = 11;
	int *pi = &num;
	//error
	/*shared_ptr<int> sptr;
	sptr = new int();*/
	ceshi(pi);
	int *ptr = new int[10];
	delete [] ptr;
	return 0;
}
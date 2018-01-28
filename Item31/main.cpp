#include "Person.h"
#include "Address.h"
#include "Date.h"
#include <iostream>
//#include "PersonImpl.h"

int main() {
	string name("xia");
	Date birth("1990");
	Address addr("Beijing");

	/*PersonImpl pim(name,birth,addr);
	shared_ptr<Person> shPtr(pim.create(name,birth,addr));
	std::cout << shPtr->m_name() << std::endl;*/


	shared_ptr<Person> shPtr(Person::create(name, birth, addr));
	std::cout << shPtr->m_name() << std::endl;
	return 0;
}
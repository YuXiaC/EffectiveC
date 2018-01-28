#include "PersonImpl.h"

const string & PersonImpl::m_name() const
{
	// TODO: insert return statement here
	return name;
}


shared_ptr<Person> Person::create(const string &str, const Date &birth, const Address &addr) {
	return shared_ptr<Person>(new PersonImpl(str, birth, addr));
}
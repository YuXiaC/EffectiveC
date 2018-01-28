#pragma once

#include <string>
#include <memory>
using std::shared_ptr;
using std::string;

class Date;
class Address;

class Person {
public:
	virtual ~Person() {};
	virtual const string& m_name() const = 0;
static shared_ptr<Person> create(const string &str, const Date &birth, const Address &addr);
};
#pragma once
#include "Person.h"
#include "Address.h"
#include "Date.h"

class PersonImpl :
	public Person
{
public:
	PersonImpl(const string &str, const Date &birth, const Address &addr) :name(str), birthDate(birth), address(addr) {};
	virtual ~PersonImpl() {};
	const string& m_name() const;

private:
	string name;
	Date birthDate;
	Address address;
};


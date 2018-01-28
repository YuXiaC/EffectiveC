#pragma once
#include <string>
using std::string;

class Date {
public:
	Date(const string &birthDate):m_birthDate(birthDate) {}
	const string& m_birth() const;
private:
	string m_birthDate;
};
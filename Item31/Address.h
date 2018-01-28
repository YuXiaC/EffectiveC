#pragma once
#include <string>
using std::string;

class Address {
public:
	Address(const string &str):m_address(str) {}
	const string& m_addr() const;
private:
	string m_address;
};
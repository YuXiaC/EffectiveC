#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <iostream>
#include <string>
using namespace std;
class Sales_data{
	friend Sales_data add(const Sales_data &, const Sales_data&);
	friend istream &read(istream &, Sales_data &);
	friend ostream &print(ostream &, const Sales_data &);
	friend Sales_data& operator+(const Sales_data &lhs, const Sales_data &rhs);
	friend bool operator==(const Sales_data &s1, const Sales_data &s2);
public:
	Sales_data(const string &s, unsigned n, double p) :bookNo(s), units_sold(n), revenue(p*n) {}
	Sales_data() :Sales_data("", 0, 0) {}
	//Sales_data(const string &s, unsigned n, double p) :bookNo(s), units_sold(n), revenue(p*n) {}
	explicit Sales_data(const string &s) :Sales_data(s,0,0) {}
	explicit Sales_data(istream &in) :Sales_data("", 0, 0) { read(in, *this); }
	string isbn() const { return bookNo; }
	Sales_data &combine(const  Sales_data &);
private:
	double avg_price() const
	{
		return units_sold ? revenue / units_sold : 0;
	}
	string bookNo;
	unsigned units_sold=0;
	double revenue = 0.0;
};
Sales_data add(const Sales_data &, const Sales_data&);
istream &read(istream &, Sales_data &);
ostream &print(ostream &, const Sales_data &);
Sales_data& operator+(const Sales_data &lhs, const Sales_data &rhs);
bool operator==(const Sales_data &s1, const Sales_data &s2);

#endif 
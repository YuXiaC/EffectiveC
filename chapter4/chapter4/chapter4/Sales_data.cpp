#include "Sales_data.h"


//Sales_data::Sales_data(istream &in)
//{
//	
//	read(in, *this);S
//}

bool operator==(const Sales_data &s1, const Sales_data &s2) {
	if (s1.isbn() != s2.isbn())
		return false;
	if (s1.units_sold == s2.units_sold)
		return true;
}

Sales_data& operator+(const Sales_data &lhs, const Sales_data &rhs) {
	if (lhs.isbn() != rhs.isbn())
		exit(0);
	static Sales_data ret;
	ret.bookNo = lhs.bookNo;
	ret.units_sold = lhs.units_sold + rhs.units_sold;
	ret.revenue = lhs.revenue + rhs.revenue;
	return ret;
}


Sales_data add(const Sales_data &s1, const Sales_data &s2)
{
	Sales_data sum=s1;
	sum.combine(s2);
	return sum;
}

//类外定义返回类类型的函数
Sales_data &Sales_data::combine( const Sales_data &s1)
{
	units_sold += s1.units_sold;
	revenue += s1.revenue;
	return *this;
}

istream &read(istream &is, Sales_data &s1)
{
	double price=0;
	is >> s1.bookNo >> s1.units_sold >> price;
	s1.revenue = price*s1.units_sold;
	return is;
}

ostream &print(ostream &out, const Sales_data &s1)
{
	out << s1.isbn() << " " << s1.units_sold << " " << s1.revenue << " " << s1.avg_price();
	return out;
}


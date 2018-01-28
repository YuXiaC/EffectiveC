#include <string>
#include <fstream>
using namespace std;

int main()
{
	ifstream in("file.txt");
	string str;
	ofstream of("out.txt");

	while (getline(in, str))
	{
		size_t pos = str.find(' ');
		if (pos != string::npos)
		{
			string s(str.begin(), str.begin() + pos);
			of << s << endl;
		}
	}
	in.close();
	of.close();

	return 0;
}
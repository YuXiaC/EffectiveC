#include <iostream>
#include <string>
using std::string;

class CTextBlock {
public:
	CTextBlock(char *p):pText(p) {}
	char& operator[](std::size_t position) const {
		return pText[position];
	}
private:
	char *pText;
};

int main() {
	const CTextBlock cctb("hello");
	char *pc = &cctb[0];
	*pc = 'W';
	return 0;
}
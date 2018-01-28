#include <iostream>
#include <string>

template<typename T>
class NamedObject {
public:
	//NamedObject() = default;
	NamedObject(const char* name, const T& value);
	//NamedObject(const std::string& name, const T& value);
	virtual NamedObject() = 0;
private:
	std::string nameValue;
	T objectValue;
};

//template<typename T>
//NamedObject<T>::NamedObject() {
//	std::cout << "default constructors" << std::endl;
//}

template<typename T>
NamedObject<T>::NamedObject(const char* name, const T& value):nameValue(name),objectValue(value) {
	std::cout << "non-default constructors" << std::endl;
}

int main() {
	char chs[6] = "hello";
	std::string str("world");
	NamedObject<std::string>  NO2(chs, str);
	//NamedObject<std::string> NO1;

	/*int a = 10,b=100;
	int &re_a = a;
	int &re_a = b;*/
	return 0;
}

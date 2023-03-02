

#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	cout << "hi i am tolik\n";
	string string1, string2;
	string1 = "hi i am tolik ";
	string2 = string1.substr(3, 11);
	cout << string2;





}

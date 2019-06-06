#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(0, "");
	string s;
	string ch = ".";
	string ch1 = " ";
	cout << "Введи строку: ";
	getline(cin, s); // если сделать cin >> s, то он прочтёт до пробела

	
	s[0] = ch1[0];
	s[s.length() - 1] = ch[0];

	cout << "Получилось " << s << endl;

}

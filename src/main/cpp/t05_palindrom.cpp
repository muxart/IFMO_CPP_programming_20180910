//По данной строке определите, является ли она палиндромом 
// (то есть, читается одинаково как слева-направо, так и справа-налево).
//
//Входные данные
//
//На вход подается 1 строка без пробелов.
//
//Выходные данные
//
//Необходимо вывести yes, если строка является палиндромом, и no в противном случае.
//
//Sample Input:
//
//kayak
//Sample Output:
//
//yes

#include "t05_palindrom.h"
#include <iostream>


using namespace std;

bool polindrom(string s) {      // Проверка, является ли строка палиндромом
    for (int i = 0; i < s.length()/2; i++) {
        if (s[i] != s[s.length() - i - 1])  return false;
    }
    return true;
}

int t05_palindrom() {
    string s;
    cin >> s;
    if (polindrom(s)) cout << "yes";
    else {
        if (!polindrom(s))  cout << "no";
        else {
            if (s[0] < s[1]) cout << s.substr(0, s.length() - 1);
            else cout << s.substr(1, s.length());
        }
    }
}

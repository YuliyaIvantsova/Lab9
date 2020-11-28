#include <string>
#include <iostream>
using namespace std;
int main()
{
    setlocale(NULL, "rus");
    string s;
    char sym1, sym2;
    cout << "Введите строку: " << endl;
    getline(cin, s);
    cout << "Введите заменяемый символ: " << endl;
    cin >> s;
    cout << "Введите новый символ: " << endl;
    cin >> sym2;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == sym1)
        {
            s[i] = sym2;
        }
    }
    cout << "Новая строка: " << s << endl;
    return 0;
}
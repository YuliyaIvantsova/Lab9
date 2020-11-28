#include <iostream>
#include <string>
using namespace std;
int main()
{
    setlocale(NULL, "rus");
    string s;
    cout << "Введите строку: " << endl;
    getline(cin, s);
    int i = s.length();
    while (i > 0)
    {
        if (isdigit(int(s[i])))
        {
            s.erase(s.rfind(int(s[i])), 1);
        }
        i--;
    }
    cout << "Новая строка: " << s << endl;
    return 0;
}
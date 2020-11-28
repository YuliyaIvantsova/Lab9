#include <iostream>
#include <string>
using namespace std;

int main()
{
    setlocale(NULL, "rus");
    string s;
    string g = "aeiouyёуеыаоэяию";
    int count = 0;
    cout << "Введите строку: " << endl;
    getline(cin, s);
    int i = s.length();
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = 0; j < g.length(); j++)
        {
            if (s[i] == g[j])
            {
                count++;
            }
        }
    }
    cout << "Количество гласных букв в строке: " << count << endl;
    return 0;
}
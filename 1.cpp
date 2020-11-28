#include <string>
#include <iostream>
using namespace std;
int find_count_of_entry(string str1, string str2)
{
    int count = 0;
    while (str1.find(str2) != str1.npos)
    {
        count++;
        str1.erase(str1.find(str2), str2.length());
    }
    return count;
}

int main()
{
    setlocale(NULL, "rus");
    string str;
    string sym;
    cout << "Введите строку: " << endl;
    getline(cin, str);
    cout << "\nВведите символ: " << endl;
    cin >> sym;
    cout << "\nКоличество вхождений символа '" << sym << "': " << find_count_of_entry(str, sym) << endl;
    system("pause");
    return 0;
}
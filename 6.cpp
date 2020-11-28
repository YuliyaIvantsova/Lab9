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
    cout << "Введите S: " << endl;
    getline(cin, str);
    cout << "Введите S0: " << endl;
    cin >> sym;
    cout << "Количество вхождений символа '" << sym << "': " << find_count_of_entry(str, sym) << endl;
    return 0;
}
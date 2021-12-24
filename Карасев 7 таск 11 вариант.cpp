#include <iostream>
#include <string>
#include <vector>
 
using namespace std;
void check(string str)
{
    bool find = false;
    vector <string> v;
    string buf;
    for (size_t i = 0; i <= str.size(); i++)
    {
        if (str[i] == ' ' || str[i] == '.'|| i==str.size())
        {
            find = false;
            if (buf[0] == buf[buf.size()-1])
            {
 
 
                for (size_t i = 0; i < v.size(); i++)
                {
                    if (buf == v[i])
                    {
                        find = true;
                    }
                }
                if(!find)
                {
                    cout << buf<< endl;
                    v.push_back(buf);
 
                }
            }
            buf = "";
        }
        else
        {
            buf += str[i];
        }
    }
 
}
int main()
{
    setlocale(LC_ALL, "Rus");
    vector<string> arr;
    string str;
    cout << "Введите строку\n";
    getline(cin, str);
    check(str);
}

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string word,line;
    cout << "请选择读取字符串的方式：1.逐词读取，2.整行读取" << endl;
    char ch;
    cin >> ch;
    if(ch == '1')
    {
        cout << "请输入字符" << endl;
        cin >> word;
        cout << "系统读取结果为" << word << endl;
        return 0;
    }
    cin.clear();
    cin.sync();
    if(ch == '2' )
    {
        cout << "请输入字符" << endl;
        getline(cin ,line);
        cout << "系统读取结果为" << line << endl;
        return 0;
    }
    return -1;
}


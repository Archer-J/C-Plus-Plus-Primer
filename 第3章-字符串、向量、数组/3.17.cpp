#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{   
    vector<string> vstring;
    string s;
    char cont = 'y';
    cout << "请输入第一个词" << endl;
    while(cin >> s)
    {
        vstring.push_back(s);
        cout << "go on ?" << endl;
        cin >> cont;
        if (cont != 'y')
            break;
        cout << "请输入下一个词" << endl;
    }
    cout << "转换后的结果为：" << endl;
    for (auto &item : vstring)
    {
        for (auto &x : item)
            x = toupper(x);
        cout << item << endl;
    }
    return 0;
}


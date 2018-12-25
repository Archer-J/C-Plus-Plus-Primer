#include <iostream>
#include <string>
using namespace std;
int main()
{
    char cont = 'y';
    string s,result;
    while (cin >> s)
    {
        if(!result.size())
            result += s;
        else
            result = result + " " + s;
        cout << "go on " << endl;
        cin >> cont;
        if(cont == 'y' || cont =='Y')
            cout << "请输入下一个字符" << endl;
        else
            break;
    }
    cout << "拼接后的字符是" << result << endl;
    return 0;
}


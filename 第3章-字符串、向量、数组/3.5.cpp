#include <iostream>
#include <string>
using namespace std;
int main()
{
    char cont = 'y';
    string s,result;
    cout << "请输入一个字符" << endl;
    while(cin >> s)
    {
        result += s;
        cout << "go on ? " << endl;
        cin >> cont;
        if(cont == 'y' || cont == 'Y')
            cout << "请输入下一个字符" << endl;
        else
            break;
    }
    cout << result << endl;
    return 0;
}


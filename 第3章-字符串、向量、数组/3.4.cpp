#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1,s2;
    cout << "请输入两个字符" << endl;
    cin >> s1 >> s2;
    if(s1 == s2)
        cout << "s1 == s2" << endl;
    else if (s1 > s2)
        cout << "s1 > s2" << endl;
    else
        cout << "s1 < s2" << endl;

    return 0;
}


#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    vector<int> vint;
    int ival;
    cout << "请输入一组数字" << endl;
    while (cin >> ival)
        vint.push_back(ival);
    if(vint.size() == 0)
        return -1;
    cout << "相邻两项为：" << endl;
    for (decltype(vint.size()) i = 0;i<vint.size()-1;i+=2)
    {
         cout << vint[i] + vint[i+1] << ends;
         if((i+2)%10 == 0)
             cout << endl;
    }
    if(vint.size() %2 != 0)
        cout << vint[vint.size()-1];
    return 0;
}


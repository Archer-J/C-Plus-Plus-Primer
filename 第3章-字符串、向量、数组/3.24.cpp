#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vint;
    int ival;
    cout << "请输入一组数字" << endl;
    while (cin >> ival)
        vint.push_back(ival);
    if(vint.cbegin() == vint.cend())
    {
        cout << "没有任何元素" << endl;
        return -1;
    }
    cout << "相邻两项和" << endl;
    for (auto it = vint.cbegin();it != vint.cend()-1;it++)
    {
        cout << (*it + *(++it)) << endl;
    }
    if (vint.size() % 2 != 0)
        cout << *(vint.cend() - 1);
    return 0;
}


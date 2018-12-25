#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<unsigned> vus(11);
    auto it = vus.begin();
    int ival;
    cout << "请输入一组成绩" << endl;
    while (cin >> ival)
        if (ival < 101)
            ++*(it + ival / 10);
    cout << "输入的成绩总数" << vus.size() << endl;
    cout << "分数段" << endl;
    for (it = vus.begin();it != vus.end();it++)
        cout << *it << " ";
    cout << endl;
    return 0;
}


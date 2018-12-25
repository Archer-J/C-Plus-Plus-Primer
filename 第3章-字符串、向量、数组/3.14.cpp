#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vint;
    int i;
    char cont = 'y';
    while(cin >> i)
    {
        vint.push_back(i);
        cout << "是否继续写入vector" << endl;
        cin >> cont;
        if(cont != 'y' && cont != 'Y')
            break;
    }
    for (auto mem:vint)
        cout << mem << ends;
    cout << endl;
    return 0;
}


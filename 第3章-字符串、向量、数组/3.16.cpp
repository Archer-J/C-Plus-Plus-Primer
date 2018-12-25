#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10,42);
    vector<int> v4{10};
    vector<int> v5{10,42};
    vector<string> v6{10};
    vector<string> v7{10,"hi"};

    cout << "v1元素个数为：" << v1.size() << endl;
    for(auto e:v1)
        cout << e << ends;
    cout << endl;

    cout << "v2元素个数为：" << v2.size() << endl;
    for(auto e:v2)
        cout << e << ends;
    cout << endl;

    cout << "v3元素个数为：" << v3.size() << endl;
    for(auto e:v3)
        cout << e << ends;
    cout << endl;

    cout << "v4元素个数为：" << v4.size() << endl;
    for(auto e:v4)
        cout << e << ends;
    cout << endl;

    cout << "v5元素个数为：" << v5.size() << endl;
    for(auto e:v5)
        cout << e << ends;
    cout << endl;
    
    cout << "v6元素个数为：" << v6.size() << endl;
    for(auto e:v6)
        cout << e << ends;
    cout << endl;

    cout << "v7元素个数为：" << v7.size() << endl;
    for(auto e:v7)
        cout << e << ends;
    cout << endl;


    return 0;
}


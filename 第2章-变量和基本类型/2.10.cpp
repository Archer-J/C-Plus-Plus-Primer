#include <iostream>
using namespace std;
std::string global_str;
int global_int;
int main()
{
	int local_int;
	std::string local_str;
	cout << global_str << endl;
	cout << global_int << endl;
	cout << local_int << endl;
	cout << local_str << endl;
	return 0;
}

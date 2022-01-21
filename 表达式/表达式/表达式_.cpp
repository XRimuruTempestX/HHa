#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	/*int val = 0;
	vector<string> ve = { "asd","Sad" };
	auto v = ve.begin();
	cout << ( v++->size());
	cin >> val;
	while (val != 42)
	{
		cin >> val;
	}
	
	string s = "asd";
	const char* c = s.c_str();
	cout << (2 != 2 < 3);*/

	vector<int> ve = { 1,2,3,4,5 };

	for (auto& v : ve)
	{
		if (v % 2 != 0)
		{
			v *= 2;
		}
	}

	for (auto v : ve)
	{
		cout << v;
	}
	return 0;
}
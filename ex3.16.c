#include<iostream>
#include<string>
#include<vector>
using std::vector;
using namespace std;
int main()
{
	vector<int> v3(10,42);
	for (auto &i : v3)
cout << i;
}

#include<iostream>
#include<string>
#include<vector>
using std::vector;
using namespace std;
int main()
{
	vector<int> vnum{1,2,3,345,234,56,423,1234,54};
	for (auto &i :vnum)
	 {	(i%2==1)?(i *=2):(i);
		cout << i<<endl;
	 }
}

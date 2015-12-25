#include<iostream>
#include<string>
#include<vector>
using std::vector;
using namespace std;
int main()
{
	vector<int> v10{1,2,3,4,5,6,7,8,9,10};
	//decltype(v10.size() ) n=0;
	for (decltype(v10.size() ) n=0 ; n!=10; ++n)
			cout << v10[n]<<'\n';
}

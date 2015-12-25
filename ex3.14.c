#include<iostream>
#include<string>
#include<vector>
using std::vector;
using namespace std;
int main()
{
int num;
vector<int> shuzi;
while(cin>>num)
{
	shuzi.push_back(num);
	}
//cout<<shuzi;   已通过编译？ 但是不知道对不对 查询书中的源代码！
	for (auto &i : shuzi)
	cout << i;
}

#include<iostream>
#include<string>
#include<vector>
using std::vector;
using namespace std;
int main()
{
//vector<string>::iterator vstr{"1","2","3","asdf"};	
vector<string> str{"1","2","3","asdf"};
	auto vstr=str.begin();
	*vstr++;
	(*vstr);
	//cout <<(*vstr) <<endl;
	(*vstr).empty();
	vstr->empty();
	//++*vstr;
	vstr++->empty();

}

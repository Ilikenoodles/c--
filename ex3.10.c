#include<iostream>
#include<string>
#include<vector>
using std::vector;
using namespace std;
int main()
{
	string s{"123,sdf,zxc"};
	string ss;
	decltype(s.size()) n=0;
for (n=0;n<=s.size();n++)
    if ( ispunct(s[n]) )
    {
        //s[n]=NULL;
    }
else{
	ss +=s[n];
}
	 cout << ss <<endl;
}


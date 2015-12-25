#include<iostream>
#include<string>
#include<vector>
using std::vector;
using namespace std;
int main()
{
string number;
cout<<"input string\n";
//cin >> number;
vector<string> s;
while(cin>>number)
{
	s.push_back(number);

}
cout << "Output is "<<s[0] << endl;
}

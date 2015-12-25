#include<iostream>
#include<string>
using std::string;
using std::cout;
using std::cin;
using std::endl;
int main ()
{
	string word;
	string sum;
	while (getline(cin,word))
	{ cout << "U input is: "<<word << endl;
	  sum +=word;
	 sum +=" ";
	}
	cout << "All input is: "<< sum << endl;		
	return 0;
}

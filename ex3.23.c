#include<iostream>
#include<string>
#include<vector>
#include<cctype>
using std::vector;
using namespace std;
int main()
{ 	
   vector <string> s{"213","","wer"};  	
	for (auto it =s.begin(); it!=s.end()&&!it->empty();++it)
		{ 
			for (auto &n :*it)
			{n=n+n;	}		
			// cout << n << '\n' <<endl;
		cout << *it << '\n' <<endl;
		}
		
}

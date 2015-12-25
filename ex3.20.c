#include<iostream>
#include<string>
#include<vector>
using std::vector;
using namespace std;
int main()
{
	int num;
	int sum;
	vector<int> v3;
	//cin >> v3;	
	while (cin >> num)
	{		
		v3.push_back(num);
		
	}
		
		for (auto it=v3.begin() ;it<v3.end()-1 ;++it)
		 {  for (auto item=it+1 ;item<v3.end() ;++item)
				cout << *it+*item;
			 cout << '\n' <<endl;
			}

		
		 
}

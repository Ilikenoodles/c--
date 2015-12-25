#include<iostream>
#include<string>
#include<vector>
using std::vector;
using namespace std;
int main()
{
	int a[10]={0,1,2,3,4,5,6,7,8,9};
	int *p=a;
	while (p!=&a[10] )
		{cout << *p;
		++p;}
		
}

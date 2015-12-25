#include<iostream>
#include<string>
#include<vector>
using std::vector;
using namespace std;
int change(int *a,int *b)
{
	int **p1=&a;
	int **p2=&b;
	int **temp;
	*temp=*p1;
	*p1=*p2;
	*p2=*temp;
	return 0;
}
int main()
{
	int max=6,min=1;
	int *p1=&max,*p2=&min;
	cout << max << " "<< min <<endl;
	change(p1,p2);
	cout << *p1 << *p2 <<endl;
	return 0;
}

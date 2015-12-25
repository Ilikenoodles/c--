#include<iostream>
#include<string>
#include<vector>
using std::vector;
using namespace std;
//void change(int &a,int &b);
void change(int &a,int &b)
{
	
	int temp;
	temp=a,a=b,b=temp;
	//int *p1=&a;
	//int *p2=&b;
	//a=*p2,b=*p1;

	}
int main()
{
	int max=6,min=11;
	cout << max << " "<< min <<endl;
	change(max,min);
	cout << max << " "<< min <<endl;
}


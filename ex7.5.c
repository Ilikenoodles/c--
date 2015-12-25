#include<iostream>
#include<string>
#include<vector>
#include"Person.h"
using std::vector;
using namespace std;
int main()
{
	Person An;
	cin>>An.name>>An.address;
	cout<<Person::getname();
}

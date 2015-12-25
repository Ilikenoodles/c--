#include<iostream>
#include<string>
using namespace std;
int main ()
{
    string hexdigital("0123456789abcdef");
decltype(hexdigital.size()) n=0;

while (n<hexdigital.size() )// not <=
    if ( isgraph(hexdigital[n]) )
    {
        hexdigital[n]='X';
	n++;
    }
    cout << hexdigital <<endl;
}

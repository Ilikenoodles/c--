#include<iostream>
#include<string>
#include<vector>
using std::vector;
using namespace std;
int main()
{
	string s1[] = {"asd","zxc","qwe"};
     string s2[] = {"asd","zxc","qwe"};
	  vector<string> v1 {"asd","zxc","qwe"};
    vector<string> v2 {"asd","zxc","qwe"};

    if (s1[0] == s2[1]) {
        cout << "a1 == a2" << endl;
   } 
	else {
        cout << "a1 != a2" << endl;
    }

    //if (v1 == v2) { // v1和v2的元素数量以及对应的位置的元素都一致，所以对比结果 v1 == v2
        cout << "v1 == v2" << endl;
   // } 
	//else {
        cout << "v1 != v2" << endl;
    //}

    return 0;
}

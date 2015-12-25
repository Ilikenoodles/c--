#include<iostream>
#include<string>
#include<vector>
using std::vector;
using namespace std;
int main()
{
	 int a1[] = {1, 2, 3};
     int a2[] = {1, 2, 3};
	  vector<int> v1 {1, 2, 3};
    vector<int> v2 {1, 2, 3};

    if (a1 == a2) { // &a1[0] != &a2[0]，所以对比结果 a1 != a2
        cout << "a1 == a2" << endl;
    } else {
        cout << "a1 != a2" << endl;
    }

    if (v1 == v2) { // v1和v2的元素数量以及对应的位置的元素都一致，所以对比结果 v1 == v2
        cout << "v1 == v2" << endl;
    } else {
        cout << "v1 != v2" << endl;
    }

    return 0;
}

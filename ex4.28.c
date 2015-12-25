#include<iostream>
#include<string>
#include<vector>
#include "Course_data.h"
using std::vector;
using namespace std;
//int ID;
int main()
{	

	//int char cstring='3';
	string str="6gsdhiawetischfggsdfkghioeuohsdoghidstyierjfgorghieri";
	
	Course_data shiyanlou;	
	int temp_ID=0;
	vector<Course_data> v_course;

	Course_data courseBuf;
	const string courseName[] = {"Linux", "C++", "HTML", "HTML5","NodeJS", "Shell", "Python"};
    for  (auto temp_name:courseName)
	{
	courseBuf.ID=temp_ID;
	temp_ID++;
	courseBuf.course_name=temp_name;
	v_course.push_back(courseBuf);
	}
	
	sizeof (v_course);
	sizeof (courseBuf);
	const size_t sz=sizeof (v_course);
	const size_t sz2=sizeof (courseBuf);
	const size_t sz3=sizeof (courseBuf.ID);
	const size_t sz4=sizeof (courseBuf.course_name);
	const size_t sz5=sizeof (str);	
	const size_t sz6=sizeof (str[4]);	
	cout << "sizeof (v_course) is:"		 <<sz<<endl;
	cout << "sizeof (courseBuf) is:"	  <<sz2<<endl;
	cout << "sizeof (courseBuf.ID) is:"	   <<sz3<<endl;
	cout << "sizeof (courseBuf.course_name) is:"<<sz4<<endl;
	cout << "sizeof (cstring) is:"		  <<sz5<<endl;
	cout << "sizeof  is:"		  <<sz5/sz6<<endl;

}

#include<iostream>
#include<string>
#include<vector>
using std::vector;
using namespace std;

class Screen{
	public:
	  typedef std::string::size_type pos;
	  //using pos=std::string::size_type;
	  Screen()=default;
	  Screen(pos ht,pos wd,char c):height(ht), width(wd),contents(ht*wd,c){}
	  Screen move(pos r,pos c);
	  char get(pos ht,pos wd) const;
	  Screen set(char c);
	  Screen set(pos r,pos col,char ch);
	  Screen dispaly(ostream &os)
	     {
		  do_display(os);
	      return *this;
	     }
	  const Screen dispaly(ostream &os) const
	     {
		  do_display(os);
	      return *this;
	     }	  	  
	private:
      pos cursor=0,height=0,width=0;
	  string contents;	
	  void do_display(ostream &os) const{os<<contents;}
};
inline
Screen Screen::move(pos r,pos c)
{
	pos row=r*width;
	cursor=row+c;
	return *this;
}
inline
char Screen::get(pos r,pos c) const
{
	pos row=r*width;
	return contents[row+c];
}

inline Screen Screen::set(char c)
{
	 contents[cursor]=c;
	 return *this;
 }
 inline Screen Screen::set(pos r,pos col,char ch)
{
	 contents[r*width+col]=ch;
	 return *this;
}

int main()
{
   Screen myScreen(5,5,'X');
   myScreen.move(4,0).set('#').dispaly(cout);
   cout << "\n";
   myScreen.dispaly(cout);
   cout << "\n";
}












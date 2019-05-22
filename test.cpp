#include<iostream>
#include<cstdlib>
using namespace std;

class square;

class rectangle
{
public:
int len,bre;

rectangle()
{
	len=10;
	bre=20;
	
	}	
int area()
{
	return len*bre;
}

void display()
{
	cout<<"rectangle"<<endl;
	cout<<"the len is:"<<len<<"the bre is:"<<bre<<endl;
	//cout<<"the area is:"<<len*bre<<endl;
}

friend int large(rectangle,square);	
};

class square
{
	public:
	int len ,bre;
	
	square()
	{
		len=30;
		bre=11;
		
	}

int area1()
{
	return len*bre;
}

void display1()
{
	cout<<"square"<<endl;
	cout<<"the len is:"<<len<<"the bre is:"<<bre<<endl;
	 
}
 friend int large(rectangle,square);	
 
};

void large(rectangle a1,square a2)
{
	if(a1.area()>a2.area1())
	{
		cout<<"the area of arectangle is greater :"<<a1.area()<<endl;
		//cout<<a1.display()<<endl;
	}
	
	else{
		cout<<"the area of square is greater:"<<a2.area1()<<endl;
		//cout<<"length is:"<<a2.len<<"and breadth is:"<<a2.bre<<endl;
	}
 
}


int main()
{
  rectangle a1;
  square a2;
  a1.display();
  a2.display1();
  large(a1,a2);
  
getch();  	
return 0;	
}

#include<iostream>
#include<string.h>
using namespace std;
/*class stu
{
	int id;
	char name[20];
	public:
	void getdata();
};

void stu::getdata()
{
		cout<<"Enter student id,name";
		cin>>id>>name;
		cout<<"id= "<<id<<endl;
		cout<<"name= "<<name;
	}

int main()
{
	stu s;
	s.getdata();
}*/


/*class stu
{
	int id;
	char name[20];
	public:
		void readdata()
		{
			cout<<"enter ur id and name "<<endl;
			cin>>id>>name;
			
			}	
		void showdata();
};

void stu::showdata()
{
	cout<<"your id is "<<id<<endl<<"your name is "<<name<<endl;
}

int main()
{
	stu s;
	s.readdata();
	s.showdata();
}*/


/*class emp
{
	int eid;
	char ename[20];
	long fees;
	public:
		void getemp(int id,char name[20],long salary);
		void putemp()
		{
			cout<<"Your id "<<eid<<endl;
			cout<<"Your name "<<ename<<endl;
			cout<<"Your fees "<<fees<<endl;
		}
};

void emp::getemp(int id,char name[20],long salary)
{
	eid=id;
	strcpy(ename,name);
	fees=salary;
}
int main()
{
	emp e;
	e.getemp(205,"Dipayan",5000000);
	e.putemp();
}*/

/*class test
{
	int a,b;
	public:
		void readdata(int x,int y)
		{
			a=x;
			b=y;
		}
		void showdata()
		{
			cout<<"a = "<<a<<endl;
			cout<<"b = "<<b<<endl;
		}
		int big()
		{
			if(a>b)
			return a;
			else
			return b;
		}
};
int main()
{
	test t;
	t.readdata(10,20);
	t.showdata();
	int max=t.big();
	cout<<"big is = "<<max;
}*/

/*class sample
{
	int a;
	public:
		void getdata()
		{
			cout<<"Enter a value "<<endl;
			cin>>a;
		}
		void putdata()
		{
			cout<<"value of a is "<<a<<endl;
		}
		void big(sample s2)
		{
			if(a>s2.a)
			cout<<"s1.a is big "<<endl;
			else if(a<s2.a)
			cout<<"s2.a is big "<<endl;
			else
			cout<<"both are equal ";
		}
};

int main()
{
	sample s1,s2;
	s1.getdata();
	s1.putdata();
	s2.getdata();
	s2.putdata();
	s1.big(s2);

}*/

/*class test
{
	int a,b;
	public:
		void show()
		{
			a=10;
			b=20;
			cout<<"obj addr = "<<this<<endl;
			cout<<"a = "<<this->a<<endl;
			cout<<"b = "<<b;
		}
};

int main()
{
	test t;
	t.show();
}*/

/*class test
{
	int a,b;
	public:
		void show(int a,int b)
		{
			this->a=a;
			this->b=b;
		}
		void display();
};

void test::display()
{
	cout<<a<<endl<<b;
}

int main()
{
	test t;
	t.show(10,20);
	t.display();
}*/

/*class test 
{
	int a,b;
	public:
		void show(int a,int b)
		{
			this->a=a;
			this->b=b;
		}
		void display()
		{
			cout<<a<<endl<<b;
		}
};
int main()
{
	test t;
	t.show(10,20);
	t.display();
}*/

/*class stu
{
	int roll;
	char name[20];
	void getdata()
	{
		cout<<"Enter your roll "<<endl;
		cin>>roll;
		cout<<"Enter your name ";
		cin>>name;
	}
	public:
		void putdata()
		{
			getdata();
			cout<<"Your roll is "<<roll<<endl;
			cout<<"Your name is "<<name;
		}
};

int main()
{
	stu s;
	s.putdata();
}*/


/*class stu
{
	int roll;
	char name[20];
	public:
		void getdata();
		void putdata();
};
void stu::getdata()
{
	cout<<"Enter your roll "<<endl;
	cin>>roll;
	cout<<"Enter your name ";
	cin>>name;
}
void stu::putdata()
{
	cout<<"Your roll is "<<roll<<endl;
	cout<<"Your name is "<<name<<endl;
}

int main()
{
	stu s[60];
	int n,i;
	cout<<"Enter the no of students ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		s[i].getdata();
	}
	for(i=0;i<n;i++)
	{
		s[i].putdata();
	}
}*/

/*class test
{
	int a,b;
	public:
		test()
		{
			a=10;
			b=20;
		}
	void showdata();
};

void test::showdata()
{
	cout<<"value of a is "<<a<<endl;
	cout<<"value of b is "<<b;
}

int main()
{
	test t;
	t.showdata();
}*/

class area
{
	int r;
	public:
		area()
		{
			r=5;
		}
		area(float r)
		{
			this->r=r;
		}
		void showarea();
};

void area::showarea()
{
	cout<<"Area of the circle is "<<3.14*r*r<<endl;
}

int main()
{
	area x;
	area y(7);
	x.showarea();
	y.showarea();
}

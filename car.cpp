#include<iostream>
#include<string>
using namespace std;
	class car{
		private :
			string name;
			string color;
			int year;
		public:
		void setname(string n)
		{
			name = n;
		}
		void setcolor(string c)
		{
			color = c;
		}
		void setyear(int y)
		{
			year = y;
		}
		string getname()
		{
			return name;
		}
		string getcolor()
		{
			return color;
		}
		void getyear()
		{
			cout<<"year: " << year;
		}		
	};
	int main()
	{
		car c1, c2;
		
		c1.setname("dena");
		c1.setcolor("gray");
		c1.setyear(2019);
		
		c2.setname("pride");
		c2.setcolor("black");
		c2.setyear(2020);
		
		
		cout<<"\t\tCar 1"<< endl;
		cout<<"Name: "<<c1.getname()<<endl;
		cout<<"Color: "<<c1.getcolor()<<endl;
		c1.getyear();
		cout<<endl;
		cout<<"----------------------------"<< endl;
		cout<<"\t\tcar 2"<< endl;
		cout<<"Name: "<<c2.getname()<<endl;
		cout<<"Color: "<<c2.getcolor()<<endl;
		c2.getyear();
		
	}
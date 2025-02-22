#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;

class residenrial_complex{
	private:
		string location;
		int totalunits;
		int availableunitforrent;
		int availableunitsforsell;
		int y=0;
		int z=0;
		int i=0;
	public:
	   //contructor
	   residenrial_complex(srting loc,int total,int rent,int sell){	
	   	cout<<"enter the location of the complex: ";
	   	getline(cin,location);
	   	cout<<"enter the total number of units: ";
	   	cin>>totalunits;
	   	cout<<"enter the number of units available for rent: ";
	   	cin>>availableunitforrent;
	   	cout<<"enter the number of units available for sell: ";
	   	cin>>availableunitsforsell;	   }
	   //get
	   string getlocation()
	   {
	   	return location;
	   }
	   int gettotalunits()
	   {
	   	return totalunits;
	   }
	   int getavailableunitforrent()
	   {
	   	return availableunitforrent;
	   }
	   int getavailableunitforsell()
	   {
	   	return availableunitsforsell;
	   }
	   
	   //set
	   void setlocation(string loc)
	   {
	   	location = loc;
	   }
	      void settotalunits(int totunits)
	   {
	   	totalunits = totunits;
	   }
	      void setavailableunitforrent(int availunitsforrent )
	   {
	   	availableunitforrent = availunitsforrent;
	   }
	      void setavailableunitsforsell(int availunitsforsell)
	   {
	   	availableunitsforsell = availunitsforsell;
	   }
	    
	   //change functions
	   void rentunit()
	   {
	   	if(availableunitforrent>0)
	   	{
	   		cout<<"how many units you want to rent?"<<endl;
	   		cin>>y;
	   		availableunitforrent=availableunitforrent-y;
	   		cout<<"unit rented successfully."<<endl<<"available units for rent: "<<availableunitforrent<<endl;
		}
		 else
		   {
		   	cout<<"no units available for rent."<<endl;
		   }
	}
		void sellunit()
	   {
	   	if(availableunitsforsell>0)
	   	{

	   		cout<<"how many units you want to sell?"<<endl;
	   		//int z;
	   		cin>>z;
	   		availableunitsforsell=availableunitsforsell-z;
	   		
	   		cout<<"unit sold successfully."<<endl<<"available units for sell: "<<availableunitsforsell<<endl;
		}
		else
		   {
		   	cout<<"no units available for sell."<<endl;
		   }
	}
	//function to return rented units
	 void returnRentedUnits()
	 {
	  if(availableunitforrent>=0)
	  {
	  		cout<<"how many units you want to return?";
	  		
	  		cin>>i;
	  		availableunitforrent=availableunitforrent+i;	
	  }
	  else{
	  	cout<<"no units available for return."<<endl;
	  }
}
	
	
		//function to show how many units were rented and sold
		void showunitsrentedandsold()
		{
		  int j;
		  j=y-i;
		  cout<<"units rented: "<<j<<endl;
		  
		  cout<<"units sold: "<<z<<endl;	
		}
		//function to show how many units left after rented and sold
		void showunitsleft()
		{
		  cout<<"total units left(sell+rent): "<<availableunitforrent+availableunitsforsell<<endl;
		}		
};

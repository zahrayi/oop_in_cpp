using namespace std;
#include <iostream>
#include "residenrial_complex.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	
  residenrial_complex mycomplex;
  cout<<mycomplex.getlocation()<<endl;
  string input="";
  cout<<"do you want to sell or rent units?"<<endl;
  string l;
  cin>>l;
  if(l=="yes"){
  

  
  
  while(input!="end")
  {
  cout<<"type rent for rent unit,type sell for sell units,type return to return units,type 'done' if your work ends."<<endl;
  string l;
  cin>>l;
   
   if(l=="rent"){
   mycomplex.rentunit();
   mycomplex.showunitsleft();
   mycomplex.showunitsrentedandsold();
   }
   
   else if(l=="sell"){
   mycomplex.sellunit();
   mycomplex.showunitsleft();
   mycomplex.showunitsrentedandsold();

  }
  
   else if(l=="return"){
   mycomplex.returnRentedUnits();
   mycomplex.showunitsleft();
   mycomplex.showunitsrentedandsold();
  }
  
  else if(l=="done"){
  cout<<"type 'end' to exit: ";
  cin>>input;
  }
  
  }
}
else if(l=="no"){
	return 0;
	
}
  return 0;

};
	

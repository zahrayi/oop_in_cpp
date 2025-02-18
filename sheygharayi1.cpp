#include <iostream>
using namespace std;
//-------1--------
//class c{
//	private:
//		int a;
//};
//main()
//{
//	c ob;
//	cout<<ob.a;
//}
//---------2-------
//class a{
//	private:
//		int x;
//	public:
//	    int f() //{ 
////	       x=1;
////	       cout<<x;
////	   }
//};
//int a::f(){
//	x=1
//	cout<<x;
//}
//main()
//{
//	a ob;
//	ob.f();
//}


//-----tarif yek class baraye saaf----
/*class q{
	private: 
	
	char a[3];
	int front,rear;
	
	public:
		void set(void);
		void insert(char ch);
	    char remove(void);
};
void q::set(void){
	front=0;
	rear=0;
}
void q::insert(char ch){
	if(rear==2){cout<<"full";return;}
	rear++;
	a[rear]=ch; 
	}

char q::remove(void){
	if (front==rear)
	{
		cout<<"empty";return 0;
	}
	front++;
	return a[front];
}
main(){
	q ob;
	ob.set();
	ob.insert('A');
	ob.insert('B');
	cout<<ob.remove();
}*/


//chap charecter 'a' ba sazande(constractor)
 /*class c{
 	private:
 		int x;
 	public:
	 c(){
	 	cout<<'a';
	 }	
 };
  main(){
  	c ob;
  }*/
  
  //tabe harchibe  bedimo jayee x bezare basazande(constractor)
  
  /*class  c{
  	private:
  		 int x;
  	public:
	    c(int=3);
		int f();	 
  };
  
  c::c(int n){
  	x=n;
  }
  
  int c::f(){
  	x++;
  	return x;
  }
  main(){
  	c ob;
  	cout<<ob.f();
  }*/
  
  //chap addad ba sazande(constractor)
  /*class c{
  	private:
  		int x;
  	public:
	  c(int=0);
	  void f();	
  };
  c::c(int a){
  	x=a;
  }
  void c::f(){
  	cout<<x;
  }
  main(){
  	c ob(2);
  	ob.f();
  }*/
  
   



/* Write a program to swap the two numbers using friend function 
without using third variable.  */

#include<iostream>
using namespace std;

class Swap 
{
  private:
    		int a, b;
  public:
    
    		void getData() 
			{
      			cout<<"\n\n\t Enter Two Numbers: ";
      			cin>>a>>b;
    		}
    		
  
  			void display() 
			{
    			cout<<"\n\n\t a = " <<a<<"b = " <<b<< endl;
  			}
   
   
  		friend void swap_number(Swap & s);
};


void swap_number(Swap & s) 
{
  		int temp;
  		/* accessing private members from the friend function */
  		temp = s.a;
  		s.a = s.b;
  		s.b = temp;
}

main() 
{
  Swap s;

  s.getData();
  cout<<"\n\n\t Before swapping" << endl;
  s.display();

  swap_number(s);
  cout<<"\n\n\t After swapping" << endl;
  s.display();

}


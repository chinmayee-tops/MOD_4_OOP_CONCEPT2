/*
Write a program to Mathematic operation like Addition, Subtraction, 
Multiplication, Division Of two number using different parameters and 
Function Overloading
*/

#include<iostream>
using namespace std;

class MOperations
{
    public:
    		int Action(int a,int b) 
    		{
        		return a+b;
    		}
    
			int Action(double a,int b) 
   	 		{
       			return a-b;
    		}
    		
    		int Action(float a,int b) 
   	 		{
       			return a*b;
    		}
    		
    		int Action(int a,float b) 
   	 		{
       			return a/b;
    		}
};

main()
{
    MOperations obj;
    cout<<"\n\n\t Addition = "<<obj.Action(20, 15);
    cout<<"\n\n\t Subtraction = "<<obj.Action(70, 20);
   	cout<<"\n\n\t Multiplication = "<<obj.Action(20, 15);
   	cout<<"\n\n\t Division = "<<obj.Action(20, 2);
}


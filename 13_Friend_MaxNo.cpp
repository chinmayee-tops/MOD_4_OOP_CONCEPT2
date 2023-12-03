//Write a program to find the max number from given two numbers using friend function.

#include<iostream>
using namespace std;

class Test 
{
		private:
   				int x, y;

		public:

   				void input() 
				{
       					cout<<"\n\n\t Enter two numbers:";
       					cin>>x>>y;
   				}

   				friend void find(Test t);
};

void find(Test t) 
{
   		if (t.x > t.y) 
		{
       		cout<<"\n\n\t Max is:"<< t.x;
   		} 
		   
		else 
		{
       		cout<<"\n\n\t Max is:" << t.y;
   		}
}

main() 
{
	Test t;
   	t.input();
   	find(t);
}

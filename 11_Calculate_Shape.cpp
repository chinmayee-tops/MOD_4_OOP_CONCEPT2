/*
Write a program to calculate the area of circle, rectangle and triangle using Function Overloading
Rectangle: Area * breadth
Triangle: ½ *Area* breadth
Circle: Pi * Area *Area
*/

#include<iostream>
using namespace std;

	const float pi=3.14;

	float area(float n,float b,float h)
	{
		float ar;
		ar=n*b*h;
		return ar;
	}
	
	float area(float r)
	{
		float ar;
		ar=pi*r*r;
		return ar;
	}

	float area(float l,float b)
	{
		float ar;
		ar=l*b;
		return ar;
	}
	
main()
{
		float b,h,r,l;
		float result;

		cout<<"\n\n\t Enter the Base & Hieght of Triangle: ";
		cin>>b>>h;
		result=area(0.5,b,h);
		
		cout<<"\n\n\t Area of Triangle: "<<result;
		cout<<"\n\n\t Enter the Radius of Circle: ";
		cin>>r;
		result=area(r);
		
		cout<<"\n\n\t Area of Circle : "<<result<<endl;
		cout<<"\n\n\t Enter the Length & Bredth of Rectangle: ";
		cin>>l>>b;
		result=area(l,b);
		cout<<"\n\n\t Area of Rectangle: "<<result<<endl;

}

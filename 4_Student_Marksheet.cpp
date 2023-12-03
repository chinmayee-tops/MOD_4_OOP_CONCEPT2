/*
Write a C++ Program display Student Mark sheet using Multiple inheritance
*/

#include<iostream>
using namespace std;

class student
{
        int roll;
        char name[25];
        char add [25];
        char city[25];
        
        public:
    	
		student()
        {
                cout<<"\n\n\t welcome in the student information system  "<<endl;
        }
        void getdata()
        {
                cout<<"\n\n\t  enter the student roll no.  ";
                cin>>roll;
                cout<<"\n\n\t  enter the student name  ";
                cin>>name;
                cout<<"\n\n\t enter ther student address  ";
                cin>>add;
                cout<<"\n\n\t  enter the student city  ";
                cin>>city;
        }
        void putdata()
        {
                cout<<"\n\n\t the student roll no: "<<roll;
                cout<<"\n\n\t the student name: "<<name;
                cout<<"\n\n\t the student coty: "<<city;
        }
};

class marks: public student
{
        int sub1;
        int sub2;
        int sub3;
        int per;
        
		public:

    void input()
        {
                getdata();
                cout<<"\n\n\t enter the marks1: ";
                cin>>sub1;
                cout<<"\n\n\t enter the marks2: ";
                cin>>sub2;
                cout<<"\n\n\t enter the marks3: ";
                cin>>sub3;
        }
        void output()
        {
                putdata();
                cout<<"\n\n\t marks1: "<<sub1;
                cout<<"\n\n\t marks2: "<<sub2;
                cout<<"\n\n\t marks3: "<<sub3<<"\n";
        }
        void calculate ()
        {
                per= (sub1+sub2+sub3)/3;
                cout<<"\n\n\t total percentage :: "<<per<<"\n";
        }
};

int main()
{
        marks m1;
        int ch;
        int count=0;
        do
        {
                cout<<"\n1.input data";
                cout<<"\n2.output data";
                cout<<"\n3.Calculate percentage";
                cout<<"\n4.exit\n";
                cout<<"\nEnter the choice :: ";
                cin>>ch;
                switch (ch)
                {
        		case 1:
                        m1.input();
                        count++;
                        break;

        		case 2:
                        m1.output();
                        break;

        		case 3:
                        m1.calculate();
                        break;
                }
        } while (ch!=4);
}

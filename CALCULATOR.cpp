#include<iostream>
using namespace std;
int main()
{
int choice,n1,n2;
do
{
cout<<"\nCALCULATOR: \n1.ADDITION \n2.SUBTRACTION \n3.MULTIPLICATION \n4.DIVISION \n5.EXIT. \nENTER YOUR CHOICE: ";
cin>>choice;
switch(choice)
{
case 1:
cout<<"ENTER TWO NUMBERS: ";
cin>>n1>>n2;
cout<<"Result of Addition is: "<<n1+n2;
break;
case 2:
cout<<"ENTER TWO NUMBERS: ";
cin>>n1>>n2;
cout<<"Result of Subtraction is: "<<n1-n2;
break;
case 3:
cout<<"ENTER TWO NUMBERS: ";
cin>>n1>>n2;
cout<<"Result of Multiplication is: "<<n1*n2;
break;
case 4:
cout<<"ENTER TWO NUMBERS: ";
cin>>n1>>n2;
cout<<"Result of Division is: "<<n1/n2;
break;
case 5:
cout<<"You choose Exit! Goodbye\n";
break;
default:
cout<<"INVALID CHOICE\n";
}
}
while(choice!=5);
return 0;
}

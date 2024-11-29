//WRITE A PROGRAM THAT ASSIGN GRADES BASED ON MARKS AND REPEATS
#include<iostream>
using namespace std;
int main()
{  
   char choice;
   float marks;
   do
   {
   cout<<"Enter your marks out of hundred to find your grade: ";
   cin>>marks;	
	if(marks>=90 && marks<=100)
	 { cout<<"A grade";
		}   
	else if(marks>80 && marks<=89)
	 { cout<<"B grade";
		}
	else if(marks>70 && marks<=79)
	 { cout<<"C grade";
		}  
	else if(marks>60 && marks<=69)
	 { cout<<"D grade";
		}
	else if(marks<60)
	 { cout<<"FAIL";
	    }
    else
     { cout<<"Invalid Input";
	 }        
	 cout<<"\nDo you want to calculate another Grade? \nEnter (Y for yes or N for no): ";
	 cin>>choice;
	 }
	 while(choice=='y' || choice=='Y');
	 cout<<"GOODBYE!";
   return 0;
}


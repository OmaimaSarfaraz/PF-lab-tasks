#include<iostream>
using namespace std;
int main()
{
   const int pass=4312;
   int user_pass;
   for(int i=1;i<=3;i++)
   {
    cout<<"ENTER PASSWORD: ";
    cin>>user_pass;
    if(pass==user_pass) 
        { cout<<"ACCESS GRANTED";
          break;
		  }
    else
        {cout<<"ACCESS DENIED.TRY AGAIN \n";
                }
   }
    return 0;
}

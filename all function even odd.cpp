#include<iostream>
using namespace std;
void funtion1(); // funtion 1
void funtion2(int a); //funtion 2
string  funtion3(); //funtion 3
string funtion4(int x); //funtion 4
int main()
{
  
    funtion1(); //f1
     int x;
     cout<<"enter the number";
     cin>>x;
     funtion2(x);// f2
     cout<<funtion3(); // f3
	 int a;// f4
     cout<<"enter the number";
     cin>>a;
     cout<<funtion4(a);
	
}
								//function number 1
void funtion1()
{
     int a;
     cout<<"enter the number";
     cin>>a;
             if(a%2==0)
             {
               cout<<"number is even \n"<<a;
              }
              else
                 {
                  cout<<"number is odd\n";
                 }
             
    }
								//function number 2
    void funtion2(int a)
	{
	if(a%2==0)
             {
               cout<<"number is even \n"<<a;
              }
              else
                 {
                  cout<<"number is odd\n";
                 }
                 }
                 
   								//function number 3              
string funtion3()
{
	  int a;
     cout<<"enter the number:";
     cin>>a;
             if(a%2==1)
             {
               return "the number is odd\n";
              }
              else
                {
                   return  "the number is even\n";
                 }
             
	

	
}
						//function number 4
string funtion4(int x)
{
	if(x%2==0)
             {
               return "the number is even\n";
              }
              else
                 {
                  return "the number is odd";
                 }
                 }
	


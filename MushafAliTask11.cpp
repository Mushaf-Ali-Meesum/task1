#include<iostream>
using namespace std;
int main()
{
   int a,b,c,d;
   cout<<"enter a number ="<<endl;
   cin>>a;
   if(a%2==1)
   {
   	cout<<"Odd numbers less than or equal to"<< a <<"are : ";
   	for(b=a;b>=1;b--)
   	{
   		c=a-2;
   		cout<<c<<endl;
   		a=c;
	   }
   	
   }
   else
   {
   	cout<<" even numbers less than or equal to"<< a <<"are : ";
   	for(b=a;b>=1;b--)
   	{
   		d=a-2;
   		cout<<d<<endl;
   		a=d;
	   }
   }
   return 0;
}

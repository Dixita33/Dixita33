#include<iostream>
using namespace std;
void main()
{
  int a=20,b=30,c=10;
if((a>b)&&(a>c)) 
cout<<"\na is greater";
if((b>a)&&(b>c)) 
cout<<"\nb is greater";
if((a>b)||(a>c))
  cout<<"\nA";
if(!(a==b)) 
cout<<"\ntrue";
return 0;
}

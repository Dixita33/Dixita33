#include<iostream>
using namespace std;
int a=30;
int main()
{
  int a=50;
cout<<"global value="<<::a;
cout<<"local value="<<a;

return 0;
}


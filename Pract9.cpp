#include<iostream>
using namespace std;
{
enum Gender{male,female};
Gender gender=female;
switch(gender) 
{
case male:
cout<<"Gender is male:";
break;
case female:
cout<<"Gender is female:";
break;
default:
cout<<"Gender does not match";
break;
}
return 0;
}

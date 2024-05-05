#include<iostream>
using namespace std;
class car
{
private:
int car_id;
char name[20];
int review;
public:
static int static_num;
car() 
{ 
static_num++;
}
void inp() 
{
  cout<<"Enter id:";
  cin<<car_id;
  cout<<" Enter Name:";
  cin<<name;
  cout<<"Review:";
  cin<<review;
}
void disp() 
{
  cout<<"\nId:"<<car_id;
cout<<"\nName"<<name;
cout<<"\nReview"<<review;
}
};
int car::static_num=0;
int main() 
{
  car c1;
  c1.inp() 
  c2.disp();
cout<<"\n No of object:"<<car::static::num;
return 0;
}
    

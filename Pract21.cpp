#include <iostream>
using namespace std;
class circle
{
 private:
 double radius; 
public: 
void compute_area(double r) 
{
radius=r;
 double area=3.14*r*r;
cout<<"Radius is:"<<radius;
cout<<"area is:"<<area;
}
};
int main() 
{
circle obj;
obj.compute_area(1.5) ;
return 0;
}

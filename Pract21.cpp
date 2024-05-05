#include <iostream.h> 
#include <conio.h>
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
Cout<<"Radius is:"<<radius;
Cout<<"area is:"<<area;
}
};
int main() 
{
Circle obj;
obj.compute_area(1.5) ;
Return 0;
}

// Online C++ compiler to run C++ program onlin
#include <iostream>
using namespace std;
class planet{
    public:
    string nameofplanet;
    double disfromsun;
    double gravity;
    

void getvalue()
{
    cout<<"enter the values name of planet,distance from sun, gravity"<<endl;
    cin>>nameofplanet>>disfromsun>>gravity;
    
}
void display()
{
     cout<<"name of planet : "<<nameofplanet<<endl;
     cout<<"distance from sun : "<<disfromsun<<endl;
     cout<<"gravity :"<<gravity<<endl;
    
   
}
};    int main ()
    {
        planet obj1,obj2;
        obj1.getvalue();
        obj1.display();
        obj2.getvalue();
        obj2.display();
    }
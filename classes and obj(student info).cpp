// using clasees and objects for characteristics of students
#include <iostream>
using namespace std;
class student{
    public:
    string firstname;
    string lastname;
    int year;
    string major;

void getvalue()
{
    cout<<"enter the values firstname, lastname, year, major";
    cin>>firstname>>lastname>>year>>major;
    
}
void display()
{
     cout<<"firstname "<<firstname<<endl;
     cout<<"lastname "<<lastname<<endl;
     cout<<"year "<<year<<endl;
     cout<<"major "<<major<<endl;
   
}
};    int main ()
    {
        student obj1,obj2;
        obj1.getvalue();
        obj1.display();
        obj2.getvalue();
        obj2.display();
    }
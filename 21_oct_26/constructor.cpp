#include<iostream>
using namespace std;
class student
{
    public :
    student()
{
cout<<"constructor"<< endl;
}
    ~student()
    {
        cout<<"object destructor" <<endl;
    }
};
int main ()
{
    cout<<"main function student" <<endl;
    student s1;
    cout<<"working with object" <<endl;
}
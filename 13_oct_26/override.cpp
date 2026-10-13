#include<iostream>
using namespace std;
class student{
    public :
    void add (int a) {
        cout<<"value of a is" <<a<<endl;
    };
    void add (int a,int b) {
        cout<<"sum of a & b is" <<a+b<<endl;
    };
    void add(int a,int b,int c) {
        cout<<" sum of a& b& c is" <<a+b+c<<endl;
    };
};
int main () {
    student obj;
    obj.add(10);
    obj.add(10,20);
    obj.add(10,20,30);
    return 0;
}
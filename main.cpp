#include <iostream>
#include <string>
using namespace std;

class Box
{
    double length, width, height;
public:
    Box(double l=0, double w=0, double h=0) : length{l}, width{w}, height{h} {}
    double getVolume() {return length*width*height;}
    friend void print(Box b);
    Box operator+(const Box& b2)
    {
        Box b;
        b.length=this->length+b2.length;
        b.width=this->width+b2.width;
        b.height=this->height+b2.height;
        return b;
    }
};

void print(Box b)
    {
        cout<<"상자의 길이: "<<b.length<<endl;
        cout<<"상자의 너비: "<<b.width<<endl;
        cout<<"상자의 높이: "<<b.height<<endl;
        cout<<"상자의 부피: "<<b.getVolume()<<endl;
    }

int main()
{
   Box a(2, 2, 2), b(3, 3, 3), c;
   c=a+b;
   cout<<"상자 #1"<<endl;
   print(a);
   cout<<"상자 #2"<<endl;
   print(b);
   cout<<"상자 #3"<<endl;
   print(c);
   
   return 0;
}
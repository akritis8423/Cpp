#include<iostream>
using namespace std;

class rectangle{
    private:
    int length;
    int breadth;

    public:
    rectangle(){length=breadth=0;}
    rectangle(int l, int b){
        length=l;
        breadth=b;

    }
    int area(){
        return 2*(length+breadth);
    }
    int perimeter(){
        return length+breadth;
    }
    int getlength(){
        return length;
    }
    void setlength(int l){
        length=l;
    }
    

};

int main(){
    rectangle r1(10,5);
    cout<<r1.area()<<endl<<r1.perimeter()<<endl<<r1.getlength()<<endl;
    r1.setlength(20);
    cout<<r1.area()<<endl<<r1.perimeter()<<endl;
    
}
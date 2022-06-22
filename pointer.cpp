#include<iostream>
using namespace std;

struct rectangle{
    int length;
    int breadth;
};

int main(){
    rectangle r{10,5};
    rectangle *p;
    p=&r;
    cout<<r.length<<endl;
    cout<<(*p).length<<endl;

}
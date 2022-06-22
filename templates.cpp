#include<iostream>
using namespace std;

// templates are the generic types of data that are used for any type of data in ctass i.e. represented with T

template<class T>

class arithmetic{
    private:
    T a;
    T b;

    public:
    arithmetic(T a, T b);
    T sum();
    T sub();
};

template<class T>

arithmetic<T>::arithmetic(T a, T b){
    this->a=a;
    this->b=b;
}

template<class T>
T arithmetic<T>::sum(){
    T c=a+b;
    return c;
}

template<class T>

T arithmetic<T>::sub(){
    T c=a-b;
    return c;
}

int main(){
    arithmetic<int> a1(10,5);
    cout<<"the sum of numbers are: "<<a1.sum()<<endl;
    cout<<"the difference of numbers are: "<<a1.sub()<<endl;


}
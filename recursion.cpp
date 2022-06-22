#include<iostream>
using namespace std;

// int func1(int n){
//     // cout<<"hey there we r inside function now: "<<endl;
//     // cout<<n<<endl;
//     if(n>0){
//     func1(n-1);
//     }
//     cout<<"hey there we r inside function now: "<<endl;
//     cout<<n<<endl;
// }

// int main(){
//     int x=5;
//     func1(x);
//     cout<<"we are outside the function now: ";

// }



// static variable in recursion:------

// int func1(int n){
//     // cout<<"hey there we r inside function now: "<<endl;
//     // cout<<n<<endl;
//     static int x=0;
//     if(n>0){
//         x++;
//         return func1(n-1)+x;
    
//     }
//     return 0;
   
// }

// int main(){
//     int b=5;
//     int r=func1(b);
//     cout<<r<<endl;
//     cout<<"we are outside the function now: ";

// }



// // ''''''''''TREE RECURSION''''''''''''''''''''''
// int func1(int x){
//     if(x>0){
//         cout<<x<<endl;
//         func1(x-1);
//         func1(x-1);
//     }
// }
// int main(){
//     func1(3);
// }




// ............... INDIRECT RECURSION..................

void funcB(int x);

void funcA(int x){
    if(x>0){
        cout<<x<<endl;
        funcB(x-1);
    }
}

void funcB(int x){
    if(x>0){
        cout<<x<<endl;
        funcA(x/2);
    }
}

int main(){
    funcA(20);
}
#include<bits/stdc++.h>
using namespace std;

//compile time polymorphism(static polymorphism)

//function overloading-can be achieved by the changing arguments to the same
//function name.

class A{
    public:
    void func(){
        cout<<"hello"<<endl;
    }
    void func(int n){
        return;

    }
    void func(string name){
        cout<<"hello "<<name <<endl;
    }
};

//operator overloading

class B{
    
    public: 
    int a;
    int b;

    void operator+  (B &obj) //syntax
    {
        int value=this->a;
        int val=obj.a;
        cout<<"diff is: "<<val-value<<endl;
    }
     
};


//run-time polymorphism (dynamic polymorphism)

//method overridiing

class animal{
    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};

class dog: public animal{

    public:

    void speak(){
        cout<<"barking"<<endl;
    }
};

int main(){

    // A obj;
    // obj.func("Shirish"); // function overloading

    // B ob1,ob2;
    // ob1.a=10;
    // ob2.a=20;

    // ob1 + ob2; //operator ovverloading


    dog d;
    d.speak(); //method overriding
    return 0;

}






#include<bits/stdc++.h>
using namespace std;

//encapsulation is nothing but class
//fully encapsulation is all data members are private


//parent class or superclass
class Human{

    public:
    int height;

    protected:
    int age;

    private:
    int weight;

    public:

    int getHeight(){
        return this->height;
    }
    void setWeight(int w){
        this->weight=w;
    }
    int getWeight(){
        return this->weight;
    }

};


class animal{

    public: 
    int height;
    void bark(){
        cout<<"barking "<<endl;
    }
};


//inheritance---
//child class or sub class

//****Single Level Inheritance****
class male : public Human{

    public:
    int rank;

    void random(){
        cout<<"running"<<endl;
    }
};

//****multilevel Inhertance****
class temp:public male{
    public:
    int val;
};

//****multiple Inhertance**** // *** Hybrid Inhertance == hierarchial + multiple***
class mixed: public Human,public animal{
    public:
    int w;

};

//****hierarchial Inheritance is one class serving as parent for more
// than one class****--->easy for implementation , so i have not done it.

//****Hybrid inheritance is combiantion of more than one type of inheritance****.


int main(){
    male m;
    /*
        parent     child 
        ----------------------------------------    
        public     public    -> public
        public     protected -> protected
        public     private   -> private
        protected  public    -> protected
        protected  protected -> protected
        protected  private   -> private
        private    public       _
        private    protected     |-----     Not
        private    private      _|-----    Accessible

    */
    m.height=40;
    cout<<m.height<<endl; //single inheritance

    temp k;
    cout<<k.height<<endl; //multilevel inheritance

    mixed g; //multiple inheritance

    // cout<<g.height<<endl; -->throw an error

    cout<<g.Human::height<<endl;    //avoiding inheritance ambiguity by 
    cout<<g.animal::height<<endl;   // using scope resolution
    g.bark();

return 0;
}
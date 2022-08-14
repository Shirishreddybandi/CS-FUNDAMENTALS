#include<bits/stdc++.h>
//#include "hero.cpp"
//we can also include this using external file which contains 'class'

using namespace std;

class hero{
    private:
    int health;
    char level;
    

    public:
    char* name;
    static int timeToComplete;
    //default constructor is not visible
    //constructor does not have input parameters and return valuea

    //contstructor
    hero(){
        cout<<"constructor called"<<endl;
        name=new char[100];
    }

    //parameterised constructor->contains input parameters
    hero(int health){
        this->health=health;
    }

    //cutom copy constructor

    // & is mandatory beacuse if we pass by value there will be infinte 
    //loop occurs and there will be error
    hero(hero& temp){
        
        char *t=new char[strlen(temp.name) ];
        strcpy(t,temp.name);  //deep copy

        this->name=t;
        this->health=temp.health;
        this->level=temp.level;
    }

    hero(int health,char level){
        this->level=level;
        this->health=health;
    }

    void setHealth(int h){
        health=h;
    }
    void setLevel(int l){
        level=l;
    }
    void setName(char name[]){
        strcpy(this->name,name);
    }
    int getHealth(){
        return health;
    }
    void print(){
        cout<<endl;
        cout<<"[ Name: "<<this->name<<" ";
        cout<<"health: "<<this->health<<" ";
        cout<<"level: "<<this->level<<" ]";
        cout<<endl;
        cout<<endl;
    }

    static int random(){
        return timeToComplete;
    }

    ~hero(){
        cout<<"destructor is called"<<endl;
    }
};


int hero:: timeToComplete=40;

int main(){

//---------------------------------------------
    
//     hero h(30);
//     cout<<h.getHealth()<<endl;

//     hero *a = new hero(10);
//     cout<<a->getHealth()<<endl; 

//     // cout<<"size: "<<sizeof(h)<<endl;

//     a->setHealth(40);
//     h.setHealth(50);

//     cout<< h.getHealth()<<endl;
//     cout<<a->getHealth()<<endl; 

// //--------------------------------------------

//     hero s(60,'A');
//     s.print();

//     //copy constructor
//     //default copy constructor is inbuilt function

//     hero r(s);
//     r.print();

//--------------------------------------------

//shallow copy
//     char t[4]="ram";
//     hero ram;
//     ram.setHealth(23);
//     ram.setLevel('c');
//     ram.setName(t);

//     //using deafult constructor is shallow copy
//     hero sam(ram);
//     // ram.print();
//     // sam.print();
//     ram.name[0]='s';
//     ram.print();
//     sam.print(); //here the name of the sam also changes if we use shallow copy
//     //it will not changed if we use custom copy constructor because we do deep copy



//     //copy assignment operator- copy the elemnts from the other object
//     ram=sam;
//      ram.print();
//     sam.print();

// //-------------------------------------------
// //destructor

//     //for static allocated memory destructor is automatically called

//     hero a;

//     //for dynamically allocated memory destructor is manually called

//     hero *b = new hero();
//     delete b; //manual destructor

//------------------------------------------
//static data member

    // cout<<hero::timeToComplete<<endl;

    // hero a;
    // a.timeToComplete=20;
    // hero b;
    // cout<<a.timeToComplete<<endl;
    // cout<<b.timeToComplete<<endl;

//--------------------------------------------
//static function

    //static function can only access static data members
    cout<<hero::random()<<endl;

return 0;
}

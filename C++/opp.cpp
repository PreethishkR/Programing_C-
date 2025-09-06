#include<iostream>
using namespace std;

//////////////Encapsulation///////////////
class Student {
    public:
    string name;
    int cgpa;
    void getpercentage(){
        cout<<name<<" ";
        cout<<(cgpa*10)<<endl;
    }
    
};

//changing valuse of the private variables using function
class Studentfunc {
    string name;
    int cgpa;
    public:
    //setter
    void setname(string nameval){
        name=nameval;
    }
    void setcgpa(float cgpaval){
        cgpa=cgpaval;
    }
    //getters
    string getname(){
        return name;
    }
    float getcgpa(){
        return cgpa;
    }
    
};
//////////////Constructors//////////////
class car{
    string name;
    string color;
    public:
    string getname(){
        return name;
    }
    string getcolor(){
        return color;
    }
    car(){
        cout<<"constructor without parameter"<<endl;
    }
    /*
    car(string nameval,string colorval){
        cout<<"contructor taking values with parameter (without this->special parameter) "<<endl;
        name=nameval;
        color=colorval;
    }
    */
    
    car(string name,string color){
        cout<<"contructor taking values with parameter (with this->special parameter) "<<endl;
        this->name=name;
        this->color=color;
    }
    
};

//practise question is on notes
class user{
    int id;
    string password;
    public:
    string username;

    user(int id){
        this ->id =id;
    }
    void setpassword(string password){
        this ->password=password;
    }
    string getpassword(){
        return password;
    }
};

//Shallow copy and Deep copy
class scdc{
    public:
    string name;
    string color;
    int *mileage;

    scdc(string name,string color){
        this ->name =name;
        this ->color=color;
        mileage=new int;
        *mileage =12;
    }
    scdc(scdc &original){
        name=original.name;
        color=original.color;
        mileage=new int;
        *mileage = *original.mileage;

    }
    ///////////destructor/////////
    ~scdc(){
        cout<<"deleting object"<<endl;
        if(mileage!=NULL){
            delete mileage;
            mileage=NULL;
        }
    }
};

//////////constructor and destructor when there is inheritance//////////////////

class parents{
    public:
    parents(){
        cout<<"parent constructor\n";
    }
    ~parents(){
        cout<<"parent destructor\n";
    }
};
class childs: public parents{
    public:
    childs(){
        cout<<"child constructor\n";
    }
    ~childs(){
        cout<<"child destructor\n";
    }
};
/////////////////////Inheritance//////////////

///////////Single level inheritance///////////
class Animal{
    public:
    string color;
    
    void eat(){
        cout<<"eats\n";
    }
    void breath(){
        cout<<"breaths\n";
    }

};
//inheritance type public
class Fish:public Animal{
    public:
    int fins;
    void swim(){
        cout<<"swims\n";
    }
};

////////Hierarchial inheritence///////////////
class Bird:protected Animal{
    public:
    int feather;
    void swim(){
        cout<<"swims\n";
        eat();
        breath();
    }
    
};

//////////////Multilevel inheritance//////////
class Animals{
    public:
    void eat(){
        cout<<"eat\n";
    }
    void breath(){
        cout<<"breath\n";
    }
};
class Mammal:public Animals{
    public:
    void bloadType(){
        cout<<"warm\n";
    }
};
class Dog:public Mammal{
    public:
    void wagestail(){
        cout<<"wages tail\n";
    }
};

//////Multiple inheritance////////////
class Teacher{
    public:
    int salary;
    string subject;

};
class Students{
    public:
    int rollno;
    float cgpa;
};
class TA:public Teacher,public Student{
    public:
    string name;
};

////////////Hybrid inheritance/////////////
class Principal_Teaching{
    public:
    int salary;
    string subject;

};
class Students_of_Principal{
    public:
    int rollno;
    float cgpa;
};
class Non_teaching:public Principal_Teaching{//single inhertance
    public:
    int number;
};
class Assis:public Teacher,public Student{//multilevel inheritance
    public:
    string name;
};

///////polymorphism//////////////
//1)Compile time polymorphism
//*Function overloading
class ploy_def{
    public:
    
    void print(int a){
        cout<<a<<endl;
    }

    void print(string b){
        cout<<b<<endl;
    }
};
//*operator overloading
class complex{
    int real;
    int img;
    public:

    complex(int r,int i){
        real=r;
        img=i;
    }
    void show(){
        cout<<real<<"+"<<img<<"i"<<endl;
    }

    //using void return type
    void operator + (complex &c2){
        int realval=this->real+c2.real;
        int imgval=this->img+c2.img;
        complex c3(realval,imgval);
        c3.show();
    }
    //using complex return type (user defined data type)
    complex operator - (complex &c2){
        int realval=this->real-c2.real;
        int imgval=this->img-c2.img;
        complex c3(realval,imgval);
        return c3;
    }
};

//2) Run time polymorphism
//*Function overridding
class parent{
    public:
    void show(){
        cout<<"parent class show...\n";
    }
//*vertual function
    virtual void hello(){
        cout<<"parent hello\n";
    }
};
class child: public parent{
    public:
    void show(){
        cout<<"child class show...\n";
    }
//*vertual function
    void hello(){
        cout<<"child hello\n";
    }
};

////////////////////static Keyword//////////////////
    //////////////static variable/////////
    class Example{
        public:
        static int x;
    };
    //scope operator
    int Example::x=0;

    /////////////static object/////////////////////
     class Examples{
        public:
        Examples(){
            cout<<"constructor...."<<endl;
        }
            void hello(){
            cout<<"how are you?\n";
        }
        ~ Examples(){
            cout<<"destructor...."<<endl;
        }

    };

    ////////////Friend class and Function////////////////////
    class A{
        string secret="king is back!\nwill never leave \n";
        friend class B;
        friend void secretReveal(A &obj);
    }; 
    //friend class 
    class B{
        public:
        void showsecret(A &obj){
            cout<<obj.secret<<endl;
        }
    };
    //frined function
    void secretReveal(A &obj){
        cout<<"From function\n";
        cout<<obj.secret<<endl;
    } 

    ///////////////ASSIGNMENT QUESTION////////////
    //2)question 
    class BankAccount{
        int accountNunber;
        double balance;

        public:
        BankAccount(int accnum,double bal){
            accountNunber=accnum;
            balance=bal;
        }
        void deposit(double money){
            balance=balance+money;
        }
        void withdraw(double money){
            balance=balance-money;
        }
        void getbalance(){
            cout<<"Account:"<<accountNunber<<"\n"<<"Balance: "<<balance<<endl;

        }
    };
    //3)
    class personel{
        //private: can access only in defines class not child and main 
        //protected:can access protrected only inside the defined class and inherited class
        protected:
        string name;
        int age;
        public:
        personel(string n,int a){
            name=n;
            age=a;
        }
        //friend class studentss;can access private

    };
    class studentss:public personel{
        string studentID;
        public:
        studentss(string n,int a,string stID ): personel(n,a){
            studentID=stID;

        }
        void displaystudentinfo(){
            cout<<name<<"\n"<<age<<"\n"<<studentID<<endl;
        }
    };

int main(){
    /*
    Student s1;
    s1.name="king ";
    s1.cgpa=9.8;
    s1.getpercentage();
    
    cout<<sizeof(s1)<<endl;
    //cout<<sizeof(name)<<endl;
    
    //setters and getters
    Studentfunc s2;
    s2.setname("Queen");
    s2.setcgpa(10);
    cout<<s2.getname()<<endl;
    cout<<s2.getcgpa()<<endl;
    */
    
    ///////////////////////constructor/////////////////////////////////////// 
    /*
    car c0;
    car c1("scoda","white");
    cout<<c1.getname()<<":";
    cout<<c1.getcolor()<<endl;
    car c2("maruti","black");
    cout<<c2.getname()<<":";
    cout<<c2.getcolor()<<endl;
    
    
    //copy constructor
    cout<<"copy constructor"<<endl;
    car c4(c1);
    cout<<c4.getname()<<":";
    cout<<c4.getcolor()<<endl;
    */

    //practise question
    /*
    user s1(234);
    s1.setpassword("king103");
    s1.username="ASTALA PISTA BABY";
    cout<<"user name:"<<s1.username<<endl;
    cout<<"password:"<<s1.getpassword()<<endl;
    */

    //////////////Destructor///////
    //Shallow and Deep copy
    /*
    scdc e1("kill","pink");
    cout<<*e1.mileage<<'\n';
    scdc e2(e1);
    cout<<*e2.mileage<<'\n';
    *e2.mileage=20;
    cout<<*e1.mileage<<'\n';
    cout<<*e2.mileage<<'\n';
    */
    
    //constructor and destructor when there is inheritance
    /*
    //parents p1;
    childs ch1;
    */

    //Inheritance
    //////singla level inheritance////
    /*
    //public type of inheritance
    Fish f1;
    f1.fins=3;
    cout<<f1.fins<<endl;
    f1.swim();
    f1.eat();
    f1.breath();
    //protected type of inheritance
    Bird b1;
    b1.feather=5;
    cout<<b1.feather<<endl;
    b1.swim();
    //not possible because in protected and private type inheritance parent prop & func in child only accessable not accessable to call parent por & func using child object from main 
    //b1.eat();
    //b1.beath();
    */

    ////Multi levle inheritance////
    /*
    Dog d1;
    d1.eat();
    d1.breath();
    d1.bloadType();
    d1.wagestail();
    */

    ///////Multiple inheritance///////
    /*
    TA ta1;
    ta1.salary=35000;
    ta1.subject="C++";
    ta1.cgpa=9.8;
    ta1.name="phalopin";
    cout<<ta1.name<<endl;
    cout<<ta1.salary<<endl;
    cout<<ta1.subject<<endl;
    cout<<ta1.cgpa<<endl;
    */
   ///////Hybrid inheritance/////
   /*
   Assis ta1;
   ta1.salary=35000;
   ta1.subject="C++";
   ta1.cgpa=9.8;
   ta1.name="phalopin";
   cout<<ta1.name<<endl;
   cout<<ta1.salary<<endl;
   cout<<ta1.subject<<endl;
   cout<<ta1.cgpa<<endl;
   
   
   Non_teaching N1;
   N1.number=10;
   cout<<N1.number<<endl;
   */

   ////ploymorphism///
   //1)complie time pol....
   //*Function overloading
   /*
   ploy_def p1;
   p1.print(1);
   p1.print("Hello king");
   */

   //*opreator overloading
   /*
   complex c1(1,2);
   complex c2(3,4);
   c1.show();
   c2.show();
   c1+c2;
   complex c3=c1-c2;
   c3.show();
   */

    //2)Run time polymorphism
    /*
    //*Function overridding
    
    child c1;
    c1.show();
    parent c2;
    c2.show();
    
    //*vertual functions
    child child1;
    parent *ptr;
    ptr=&child1;
    ptr->hello();
    */

    /////static keyword//////
    
    //static variable
    /*
    Example eg1;
    Example eg2;
    Example eg3;
    cout<<eg1.x++<<endl;
    cout<<eg2.x++<<endl;
    cout<<eg3.x++<<endl;
    */

    //static object
    /*
    int  a=0;
    if(a==0){
        static Examples eg1;
        
        //without static
        //Examples eg1;
        eg1.hello();    
    }
    cout<<"code ending....\n";
    return 0;
    */
   
    ////Friend class and Function////
    /*
    A a1;
    B b1;
    b1.showsecret(a1);
    secretReveal(a1);
    */

    /////assignment question
    //2)question
    /*
    BankAccount b1(2343,1438);
    b1.deposit(2000);
    b1.withdraw(780);
    b1.getbalance();
    */

    //3)
    studentss op1("joker",20,"lo443");
    op1.displaystudentinfo();
}


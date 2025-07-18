#include<iostream>
using namespace std;


/////////////////////////////////////////////////////  [pointers.cpp ]notes   /////////////////////////////////////////////////////////////


//passing argument to function using pointer
void changeValue(int *ptr){
    *ptr=30;
    cout<<"value of a is changed to : "<<*ptr<<endl;
}

//pass by reference using reference variable in function

void use_of_reference_variable(int &x){
    x=50;
   cout<<"value of x : "<<x<<endl;
  
}

 ////////////////////////////assignment///////////////////////////
 //2]
 void multiply_by_2(int &x,int &y,int &z){
    x=x*2;
    y=y*2;
    z=z*2;
    
 }

int main(){
    /*
    int a =10;
    int *ptr=&a;
    cout<<*ptr<<endl;
    cout<<ptr<<endl;


    int **ptr1=&ptr;
    cout<<**ptr1<<endl;
     cout<<ptr1<<endl;
    cout<<*ptr1<<endl;
   
   ///change value of a using pointer
    *ptr=20;
    cout<<"value a is changed to : "<<a<<endl;
    */

    //passing argument to function using pointer
    // pass by reference
   /* int a=20;
    changeValue(&a);
    cout<<"value of a is changed to : "<<a<<endl;
    */
    
    //pass by reference using reference variable
    /*
    int a=10;
    int &b=a;
    b=30;
    cout<<"now value of a is : "<<a<<endl;          
    */

    //pass by reference using reference variable in function
    /*
    int a=100;
    use_of_reference_variable(a);
    cout<<"value of a is after refvari : "<<a<<endl;
    */
   ////////////////////////////assignment///////////////////////////
   //2]
   /*
   int a=10;
   int b=20;
   int c=30;
    multiply_by_2(a,b,c);
    cout<<a<<" "<<b<<" "<<c<<endl;
    */
     
     //3]
     /*
     int a=32;
     int *ptr=&a;

     char ch='A';
     char &cho=ch;

     cho+=a;
     *ptr+=ch;
    cout<<a<<","<<ch<<endl;
    */

    
   
}
#include<iostream>
#define PI 3.14
using namespace std;

int main()
{
    cout<< "Hello Guys" <<endl;
    //cout << "Hello Guys" ;
    cout << PI ;
    cout<<"\n***\n**\n*\n";
    /*
    cout<<"***\n";
    cout<<"**\n";
    cout<<"*\n";
    */
   //variabls
   int a =1;
   int b=10;
   cout <<"a="<<a;
   cout <<"\n";
   cout<<a<< " \n" <<b<<endl;

   //Taking input
   /*
   int age;
   cout <<"Enter the age: ";
   cin>>age;
   cout<<"age="<<age;
   */
  //sum
  int d,c;
  cout<<"enter d:";
  cin>>d;
  cout<<"enter c:";
  cin>>c;
  int sum=d+c;
  cout<<"sum="<<sum<<endl;
  //difference
  int l,m;
  cout<<"enter l & "<<"enter m:\n";
  
  cin>>l>>m;
  int diff=l-m;
  cout<<"diff="<<diff<<endl;

  //average
  float average=(d+c+l+m)/4;
  cout<< "average of d,c,l,m ="<<average<<endl;

    return  0;
}
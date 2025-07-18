#include<iostream>
using namespace std;

int main(){
    //to find the factorial of the number
    /*
    cout<<"enter the nummber to factorial: ";
    int n;
    cin>>n;
    int factorial=1;
    for(int x=1;x<=(n-1);x++){
        factorial = n*x;

    }
    cout<<factorial<<endl;
    */

    //multiplication table of a number entered by the user
    /*
    cout<<" enter the number to find its multiplication table: ";
    int n,s=0;
    cin>>n;
    for(int i=1;i<=10;i++){
        s=n*i;
        cout<<n<<"x"<<i<<"="<<s<<endl;
    }
    */

    //check if it is a amstrong number or not
    /*
    int num,n,sum=0,last_digit=0;
    cout<<" enter a number to check if it is a amstrong number or not: ";
    cin>>num;
    n=num;
    while (n>0)
    {
        last_digit=n%10;
        sum+=last_digit*last_digit*last_digit;
        n/=10;
        
    }
    if(sum==num){
        cout<<num<<" is an amstrong \n";
    }
    else{
        cout<<num<<" is not a amstrong \n";
    }
    */
    
    //program that prints all the prime numbers between 2 to n and sum of prime numbers in that range
    
    /*
    int x=0,n;
    cout<<"enter n to print all the prime numbers till n: ";
    cin>>n;
    for(int i=2;i<=n;i++){
        int curr=i;
        bool isprime=true;
        for(int j=2;j*j<=i;j++){
            
            if(i%j==0){
            isprime=false;
            break;
            }
        }
        if(isprime){
            
            cout<<curr<<endl;//to print the prime number in the range 2 to n
            
            x+=curr;//to store all the sum  
        }

    }
    cout<<x<<endl;//print the sum after finding all the sum of prime numbers in a loop
    */
   
   // Fibonocci series
   /*
   int n=10;
   int first=0,sec=1;
   cout<<first<<"\n"<<sec<<"\n";
   for(int i=0;i<=10;i++){
    int third=first+sec;
    cout<<third<<"\n";
    first=sec;
    sec=third;
   }

   */
    
    //

}
#include<iostream>
using namespace std;


int main(){
    //print squre pattern
    /*
    for(int i=0;i<=3;i++){
        cout<<"**** \n"; 
    }
    */

    //print n to 1
    /*
    int n;
    cout<<"enter n ";
    cin>>n;
    for(int j=n;j>=1;j--){
        cout<<j<<" ";
    }
    */
    
    //10829 add all the numbers
    int nu=10829;
    int sum1=0;
    /*
    while(nu>0){
        int last_digit=n%10;
        cout<<"last_digit="<<last_digit<<" ";
        sum1+=last_digit;
        nu/=10;
    }
     cout<<"\nsum of all 10829: "<<sum1<<endl;
    */

    //10829 sum of only odd and even
    /*
    while(nu>0){
        int last_digit=nu%10;
        if(last_digit%2!=0){
            sum1+=last_digit;

        }
        nu=nu/10;
    }
    cout<<"sum of odd last digit is: "<<sum1<<endl;
    */

   //print the number in reverse order
   /*
   while(nu>0){
    int last_digit=nu%10;
    cout<<last_digit;
    nu=nu/10;
   }
   */

    //do while loop
    /*
    int i=1;
    do{
        cout<<i<<" ";
        i++;
    }while(i<=5);
    */
    //break statement
    //take input from user till multiple of 10 given by the user 
    /*
    int n;
    do{ 
        cout<<"enter the number: ";
        cin>>n;
        if(n%10==0){
            break;
        }
        cout<<"you entered "<<n<<endl;

    }while(true);
    */
    
    //continue statement
    /*
    for(int i=0;i<=10;i++){
        if(i==3){
        continue;
        cout<<i<<endl;
        }
    }
    */
    //prime number
    /*
    int n=1;
    int isprime=true;
    for(int x=2;x<=n-1;x++){
        if(n%x==0){
            isprime=false;
            break;
        }
    }
    if(isprime){
        cout<<"number is prime \n";
    }
    else{
        cout<<"number is not prime number \n";
    }

    */
    
     
    

    
    


}
   

     
     


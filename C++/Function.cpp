#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////  [Function.cpp ]notes   ////////////////////////////////////////////// 
//intro

int sum(int a, int b){
        int sum= a+b;
        return sum;
    }
int diff(int a,int b ){
    int diff=a-b;
    return diff;
}


//1] product

int prod(int a, int b){
    return a*b;
}


//2]

  void oddeven(int a){
        if(a%2==0){
            cout<<a <<" is even"<<'\n';
        }
        else{
            cout<<a <<" is odd"<<'\n';
        }
    }

//22] odd even using boolean can be used for if else statement for continuing with result easily

bool iseven(int n){
    if(n%2==0){
        return true;
    }
    else{
        return false;
    }

}

//3]
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
         fact=fact*i;
    }
    cout<<"factorial of "<<n<<" is: "<<fact<<'\n';
    return fact;
}

//4] number prime or not

bool isprime(int n){
    if(n==1){
        return false;
    }
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            return false;
        }
        else{
            return true;
        }
    }
}

// 44] & // 6]

bool isprime2(int a){
    if(a==1){
        return false;
    }
    for(int i=2;i*i<=a;i++){
        if(a%i==0){
            return false;
        }
        else{
            return true;
        }
    }
}

// //5] binomial coeffecient for a given number n and r
int factoial(int a){
    int fact=1;
    for(int i=1;i<=a;i++){
        fact=fact*i;
    }
    return fact;
}

//5]
int binocoeff(int n,int r){
    int val1=factoial(n);
    int val2=factoial(r);
    int val3=factoial(n-r);
    int result=val1/(val2*val3);
    return result;
}

//6]
void all_primes_in_range(int n){
    for(int i=2;i<=n;i++){
        if(isprime2(i)){
            cout<<i<<'\n';
        }
    }
}
/////////////////////assignment
//1]
int reverse(int n){
    int res=0;
    while (n>1)
    {
        int last_digit=n%10;
        res=res*10+last_digit;
        n=n/10;
    }
    return res;
    
}
bool palindrome(int num){
    int resvalue=reverse(num);
    return resvalue==num;

    }

//2]

int sumofdigit(int n){
    int sum =0;
    while (n>0)
    { 
        /*
        int last_digit=n%10;
        sum=sum+last_digit;
        */
        
        sum=sum+n%10;
        n=n/10;
    }
    return sum;
}

//3] 
int polyout(int a,int b){
    int result= a*a+2*a*b+b*b;
    return result;
}

//4] largest of 3

int largestof3(int a,int b,int c){
    if(a>=b && a>=c){
        return a;
    }
    else if(b>=c){
        return b;
    }
    else
        return c;
}

//5] next char

char nextchar(char a){
    if(a=='z'){
        return 'a';
    }
    else{
        return a+1;
    }
}

int main(){
    ////////intro
    
    //cout<<sum(50,70)<<'\n';
    /*
    int x=sum(46,42);
    cout<<"sum = "<<x<<'\n';
    */

    /*
    int y=diff(50,79);
    cout<<"difference ="<<y<<'\n';
    */
    

   //1]
    // cout<<prod(11,11)<<"\n";
  

    //2]odd even function
    /*
     int n;
     cout<<"enter the number to check odd or even:";
     cin>>n;
     oddeven(n);
    */
    
    
    //22]
    //cout<<iseven(10)<<'\n';

    //3] factorial
    /*
    factorial(5);
    */
   
   //4] number prime or not
    /*
    cout<<isprime(11)<<'\n';
    */

    //44]
    /*
    cout<<isprime2(11);
    */
    
    //5] binomial coeffecient for a given number n and r
    /*
    cout<<binocoeff(4,2);
    */

    //6] print all the prime numbers in the range 2 to n
     /*
     all_primes_in_range(20);
    */
    
   ////////////////////////////assignment////////////////////////
    
    //1] pallindrome
    /*
    cout<<palindrome(120);
    */

    //2] function to calculate sum of digits of a number
    /*
    cout<<sumofdigit(532);
    */

    //3]
    /*
    cout<<polyout(3,2);
    */

    //4]largest of 3 numbers
    /*
    cout<<largestof3(5,7,4)<<'\n';
    cout<<largestof3(5,7,9)<<'\n';
    cout<<largestof3(10,7,9)<<'\n';
    */
    
    //5] next char
    /*
    cout<< nextchar('z');
   */


/*test
    for(int i=0; i<1; i--){
        cout<<'&'<<'\n';

    }

    int ++a = 10;
    cout << a << " \n " ;
    */

   /*
   int i;
   for(i=1;i<6;i++){
    if(i>3)
    cout<<i<<'\n';
    continue; 
   }
   */
   
   
}

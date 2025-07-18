//check if Amstrong number for 3 digit
#include<iostream>
using namespace std;

int main(){
    
    int number;
    while(true){
    cout<<"enter the number: ";
    cin>>number;
    int Amstrong=number;
    int digit1=number%10;
    number=number/10;
    int digit2=number%10;
    number=number/10;
    int digit3=number;
    int num=digit1*digit1*digit1+digit2*digit2*digit2*+digit3*digit3*digit3;
    if(Amstrong==num){
        cout<<Amstrong<<"is Amstrong \n";
    }
    else{
        cout<<Amstrong<<" is not Amstrong \n";
    }
    }
    
}
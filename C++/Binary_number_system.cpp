#include<iostream>
using namespace std;


/////////////////////////////////////////////////////////  [binary number system.cpp ]notes   ////////////////////////////////////////////// 

//1] binary to decimal conversion  

    int bintodec(int bintonum){
    int n=bintonum;
    int pow=1;
    int deci=0;

    while (n>0)
    {
        int lastdigit= n%10;
        deci=deci+lastdigit*pow;
        pow=pow*2;
        n=n/10;
    }
    return deci;
    }

     //2] decimal to binary conversion

     void dectobin(int decimal){
        int n=decimal;
        int pow=1;
        int binary=0;
        while (n>0)
        {
            int remaider=n%2;
            binary=binary+remaider*pow;
            pow=pow*10;
            n=n/2;
        }
        cout<<binary<<'\n';
        
     }
int main(){

    //1] binary to decimal conversion
    /*
    cout<<bintodec(1111);
    */

    //2] decimal to binary conversion
    /*
    dectobin(20);
    */
   
}

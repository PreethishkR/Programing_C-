#include<iostream>
#include<string.h>
using namespace std;


////////////////////////////////////////////////////////////////  [Bitmanipulation.cpp ]notes  ///////////////////////////////////////////////////////////////////////////

void clear_N_bits(int num,int i){
    int biMask=~0<<i;
    num=num & biMask;
    cout<<num<<endl;
}

void update_ith_bit(int num,int set,int clr){
    int bitMask_set=1<<set;
    int bitMask_clr=~(1<<clr);
    num =num | bitMask_set;
    num=num & bitMask_clr;
    cout<<num<<endl;
}

bool check_for_power_of_2(int num){
    if(!(num & (num-1))){
        return true;
    }
    else return false;
}

void set_ith_bit(int num,int i){
    int bitMask=1<<i;
    num=num | bitMask;
    cout<<num<<endl;
}

void clear_ith_bit(int num,int i){
    int bitMask=~(1<<i);
    num=num & bitMask;
    cout<<num<<endl;
}

void get_ith_bit(int num,int i){
    int bitMask=1<<i;
    int it=num & bitMask;
    cout<<it<<endl; 
}

void odd_or_even(int num){
    if((num & 1<<0)==0){
        cout<<"even"<<endl;
    }
    else cout<<num<<" odd"<<endl;
    }

int count_set_bits(int num){
    int count=0;
    while(num>0){
        int last_bit=num & 1;
        count+=last_bit;
       num= num>>1; 
    }
    cout<<count<<endl;
    return count;
}

void Fast_exponentiation(int x, int n ){
    int ans=1;
    while(n>0){
        int lastbit=n&1;
        if(lastbit){
            ans=ans*x;
        }  
        x=x*x; 
        n=n>>1;
    }
    cout<<ans<<endl;
}

///////////////////////////////////asseignment ////////////////////////////////////////

//1)

void clear_the_range_of_bits(int num,int i,int j){
     
    for(int k=i;k<=j;k++){
        num=num & ~(1<<k);
    }
    cout<<num<<endl;
}
 int main(){

    // clear_N_bits(15,2);
    // update_ith_bit(7,3,2);
    // cout<<check_for_power_of_2(10)<<endl;
    // set_ith_bit(5,1);
    // clear_ith_bit(5,2);
    //get_ith_bit(5,2);
    // odd_or_even(5);
    // cout<<~6<<endl;
    //count_set_bits(5);
    //Fast_exponentiation(3,5);
    //clear_the_range_of_bits(31,1,3);
    


   
 } 
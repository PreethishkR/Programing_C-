#include<iostream>
#include<climits>
using namespace std;
#include <algorithm>

/////////////////////////////////////////////////////  [Basic sorting algorithm.cpp ]notes   /////////////////////////////////////////////////////////////


//print arra
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
//print character array
void printchar(char arr[],int n){
    for(char i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
//bubble sort
void bubble_sort(int arr[],int n){
    for(int i=0;i<=n-1;i++){
       // bool swapped=false;
        for(int j=0;j<n-i-1;j++){
           // cout<<j<<" "<<j+1<<endl;
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
               // swapped=true;
            }
        }
      //  if(swapped==false){
         //   return;
    }
    print(arr,n);
}

//selection sort
void selection_sort(int *arr,int len){
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            //cout<<j;
            if(arr[i]<arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    print(arr,len);
} 
//insertion sort
void insertion_sort(int *arr,int len){
    for (int i=1;i<len;i++){
        int curr=arr[i];
        int prev=i-1;
        while(prev>=0 && arr[prev]>curr){
            swap(arr[prev],arr[prev+1]);
            prev--;
        }
        //cout<<arr[prev+1]<<" "<<curr<<endl;
        //arr[prev+1]=curr;
       
    }
    print(arr,len);
}

 //Counting sort
 void counting_sort(int *arr,int len){
    int freq[100000];//int freq[100000]={0}; // both are same
    int minval=INT_MAX,maxval=INT_MIN;

    for(int i=0; i<len; i++){
        freq[arr[i]]++;
        minval=min(minval,arr[i]);
        maxval=max(maxval,arr[i]);
    }
    
    for(int i=minval,j=0;i<=maxval;i++ ){// for descending order for(int i=maxval,j=0;i>=minval;i-- )
        while (freq[i]>0){
            arr[j++]=i;
            freq[i]--;
        }
    }
     print(arr,len);
 }

 //sort character array using insertion sort
 void inserition_sort_char(char arr[],int c){
    for(int i=1;i<c;i++){
        int prev=i-1;
        while(prev>=0 && arr[prev]>arr[prev+1]){
            swap(arr[prev],arr[prev+1]);
            prev--;
        }
    }
    printchar(arr,c);
         
 }

 //assignment questions
 void bubble_sort2(int *arr,int n){
    for(int i=0;i<n;i++){
        for(int i=0;i<n;i++){
            if(arr[i]<arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }
    }
    print(arr,n);
 }

 int main(){
    
    int arr[]={8,8,8,5,9,4,1,3,2};
    char arrchar[]={ 'a','b','c','d','e','f','g','h','i'};
    int n=sizeof(arr)/sizeof(arr[0]);
    int c=sizeof(arrchar)/sizeof(arrchar[0]);
    
    //bubble sort
   // bubble_sort(arr,n);

    // selection sort
    selection_sort(arr,n);


    //insertion sort
    //insertion_sort(arr,n);

    //counting sort
    //counting_sort(arr,n);

    //ascending order
    /*
    sort(arr,arr+n);
    print(arr,n);
   */

   //descending order
    /*
    sort(arr,arr+n,greater<int>());
    print(arr,n);
    */

    //sort character array using insertion sort
    //inserition_sort_char(arrchar,c);

    //Assignment Questions
    //ubble_sort2(arr,n);
 }

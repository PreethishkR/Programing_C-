#include<iostream>
using namespace std;

/////////////////////////////////////////////////////  [arrays.cpp ]notes   /////////////////////////////////////////////////////////////

  //print the array using function

  void printArray(int arr1[],int n){
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }
  }


   void printArray2(int *ptr,int n){
    for(int i=0;i<n;i++){
        cout<<*(ptr+i)<<" ";
    }
  }
    //linear search in an array
    int linearsearch(int *arr,int n,int key ){
        for(int i=0;i<n;i++){
            if(arr[i]==key){
                return i;
            }
        }
        return -1;
    }

     int linearsearch2(int arr[],int n,int key ){
        for(int i=0;i<n;i++){
            if(arr[i]==key){
                return i;
            }
        }
        return -1;
    }

    //reverse the array without using extra space with swap keyword and print the array using function

    int binarysearch(int *arr,int n,int key){
        int start=0;
        int end=n-1;
        while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
      }
       return -1;
    }
    /////////////////////////////////////////////////   assignment ////////////////////////////////////////////////////////////
    //any appears twice in an array return true return false if all distinct
    bool appeartwice(int arr[],int n){
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]==arr[j]){
                    return true;
                }
            }
        }
        return false;
    }
int main(){
    //output from an array
    /*
    int marks[25]={10,8,9,7,9};
    int len = sizeof(marks)/sizeof(int);
    for(int i=0;i<len;i++){
        cout<<marks[i]<<"  ";
    }
    cout<<endl;
    */
    
    //input to an array
    
    /*
    int marks[5];
    int len = sizeof(marks)/sizeof(int);
    for(int i=0;i<len;i++){
       // cout<<"Enter the value of marks for student "<<": ";
        cin>>marks[i];
    }
    for(int i=0;i<len;i++){
        cout<<marks[i]<<" ";
    }
    cout<<endl;
    */

    //taking the length of an array at runtime
    /*
    cout<<"Enter the length of the array: ";
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    */

    //Find the largest element in an array

    //4] largest in an array

    /*
    int arr[]={15,10,5,50,25};
    int len=sizeof(arr)/sizeof(int);
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<len;i++){
        if(arr[i]>max){
            max=arr[i];
            cout<<"assigning value: "<<arr[i]<<" to max"<<endl;
        }
    }
    cout<<"largest element in array is : "<<max<<endl;

    // find the smallest element in an array

    //smallest in an array
    for(int i=0;i<len;i++){
        if(arr[i]<min){
            min=arr[i];
            cout<<"assigning value: "<<arr[i]<<" to min"<<endl;
        }
    }
    cout<<"smallest element in array is : "<<min<<endl;
    */

    //print the array using function
    /*
    int arr[]={1,2,3,4,50};
    int len=sizeof(arr)/sizeof(int);
    printArray(arr,len);
    */
   
    //print the array using function with pointer dereferencing
    /*
    int arr[]={1,2,3,4,50};
    int len=sizeof(arr)/sizeof(int);
    printArray2(arr,len);
    */
   
   //Linear search in an array
   /*
    int prr[]={1,2,3,4,5,6,7,8,9,10};
    int len=sizeof(prr)/sizeof(int);
    cout<<linearsearch(prr,len,5)<<endl;
    cout<<linearsearch2(prr,len,20);
    */

   //reverse the array and print the array using function

   /*
   int arr[]={5,4,3,9,2};
   int len=sizeof(arr)/sizeof(int);
   int copyArr[len];
   for(int i=0;i<len;i++){
    int j=len-i-1;
    copyArr[i]=arr[j];
   }
   for(int i=0;i<len;i++){
       arr[i]=copyArr[i];
   }
    printArray(arr,len);
    */

    //reverse the array without using extra space and print the array using function

    /*
    int arr[]={5,4,3,9,2,10};
    int len=sizeof(arr)/sizeof(int);
    int start=0;
    int end=len-1;
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    printArray(arr,len);
    */

   //reverse the array without using extra space with swap keyword and print the array using function
    /*
    int arr[]={5,4,3,9,2,10};
    int len=sizeof(arr)/sizeof(int);
    int start=0;
    int end=len-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    printArray(arr,len);
    */
    
    // binary search
    /*
    int arr[]={2,4,6,8,10,12,14,16};
    int len=sizeof(arr)/sizeof(int);
    int key=20;
    cout<<binarysearch(arr,len,key);
    */

//////////////////////////////////////////////////////  [arrays partII.cpp ]notes   ////////////////////////////////////////////////////
    
    //subarray
    /*
    int arr[]={1,2,3,4,5};
    int len=sizeof(arr)/sizeof(int);
    for(int i=0;i<len;i++){
         for(int j=i;j<len;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
       }
    }
    */
    /////////////////////////////////////////////////   assignment ////////////////////////////////////////////////////////////
    //any appears twice in an array return true return false if all distinct
   /*
    int arr[]={1,2,3,4,2};
    int len=sizeof(arr)/sizeof(int);
    cout<<appeartwice(arr,len);
    */
}  
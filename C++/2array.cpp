#include<iostream>
using namespace std;


////////////////////////////////////////////////////////////////  [2D array.cpp ]notes  ///////////////////////////////////////////////////////////////////////////

// spiral matrrix
void spriralmatrix(int arr[][4],int row,int col){
    int srow=0,enrow=row-1,scol=0,encol=col-1;
    while(srow<=enrow && scol<=encol){
        //top
        for(int i=scol;i<=encol;i++){
            cout<<arr[srow][i]<<" ";
        }
        //right
        for(int i=srow+1;i<=enrow;i++){
            /*
            if(scol==encol){ //won't be neccesaary as srow+1 will be > enrow and loop won't run
            break;
        }
        */
            cout<<arr[i][encol]<<" ";
        }
        //bottom
        for(int i=encol-1;i>=scol;i--){
             if(srow==enrow){
            break;
        }
            cout<<arr[enrow][i]<<" ";
        }
        //left
        for(int i=enrow-1;i>=srow+1;i--){
            if(scol==encol){
            break;
        }
            cout<<arr[i][scol]<<" ";
        }
        srow++;enrow--;scol++;encol--;
    }
    cout<<'\n';
}

//diagonal sum
void diagonalsum_const_col_4(int arr[][4],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum+=arr[i][j];
            }
            else if(j==n-i-1){
                sum+=arr[i][j];
            }
        }
    }
    cout<<"diagonal {x} sum="<< sum<<endl;                            
}

void diagonalsum_cons_col_3(int arr[][3],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum+=arr[i][j];
            }
            else if(j==n-i-1){
                sum+=arr[i][j];
            }
        }
    }
    cout<<"diagonal {x} sum="<< sum<<endl;                            
}

void diagonalsum_cons_col_3_shortcut(int arr[][3],int n){
    int sum=0;
    for(int i=0;i<n;i++){
          sum+=arr[i][i];
        
         if(i!=n-i-1){
            sum+=arr[i][n-i-1];
        }
        
    }
    cout<<"shortcut diagonal {x} sum="<< sum<<endl;                            
}

//search in sorted matrix
//search for a key in row wise and column wise sorted matrix

//1) Brute force approach

void Bruteforce(int arr[][4],int n,int key){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==key){
                cout<<"key found at: "<<i<<","<<j<<endl;
                return;
            }
        }
    }
    cout<<"key not found: "<<endl;
}

//staircase search  approach

void staircase_search(int arr[][4],int n,int m,int key){
    int i=0,j=m-1;
    while(i<n && j>=0){
        if(arr[i][j]==key){
            cout<<"key found at: "<<"("<<i<<","<<j<<")"<<endl;
            return;
        }
        else if(arr[i][j]>key){
            j--;
        }
        else{
            i++;
        }
    }
}


int main()
{
    
/*
//2d array input
int arr[3][3],row=3,col=3;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }

//2D array output
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
*/

// spiral matrrix
/*
int arr[4][4]={ {1,2,3,4},
               {5,6,7,8},
               {9,10,11,12},
               {13,14,15,16}};
    spriralmatrix(arr,3,4);
*/

//diagonal sum
/*
int mat[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
diagonalsum_const_col_4(mat,4);
*/


//diagonal sum 3x3 matrix
/*
int mat1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
diagonalsum_cons_col_3(mat1,3);
diagonalsum_cons_col_3_shortcut(mat1,3);
*/

//search in sorted matrix
//search for a key in row wise and column wise sorted matrix

int mat3[4][4]={{10,20,30,40},
                {15,25,35,45},
                {27,29,37,48},
                {32,33,39,50}};


//1) Brute force approach
/*
Bruteforce(mat3,4,33);
*/

//2) staircase search  approach
/*
staircase_search(mat3,4,4,10);
*/

//matrix pointer
/*
cout<<*mat3<<endl; //address of first element   
cout<<**mat3<<endl;
cout<<*(mat3+1)<<endl; //address of second row
cout<<*(*(mat3+1)+1)<<endl; //value of first element
*/

//////////////////////////////////////assignment questions////////////////////////////////////////
//Print the number of all 7’s that are in the 2d array

/*
int arr[2][3]={{4,7,8},{8,8,7}};
int sum=0;
for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
        if(arr[i][j]==7){ 
        sum+=1;
        cout<<"no.of times 7 is present in array: "<<sum<<endl;
        }
    }
    cout<<endl;
}
*/

//Print out the sum of the numbers in the second row of the “nums” array

/*
int sum=0;
int arr[3][3]={{1,4,9},{11,4,3},{2,2,3}};
for(int i=0;i<3;i++){
   sum=sum+ *(*(arr+1)+i);
}
cout<<"sum of 2nd row: "<<sum<<endl;
*/

//Write a program to Find Transpose of a Matrix.
/*
int arr1[2][3]={{1,2,3},{4,5,6}};
for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
        cout<<arr1[i][j]<<" ";
    }
    cout<<endl;
}
    cout<<"transpose is"<<endl;
for(int j=0;j<3;j++){
    for(int i=0;i<2;i++){
    
        cout<<arr1[i][j]<<" ";
    }
    cout<<endl;
}
*/
    

/*
#include <vector>
using namespace std;
*/
/*
class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        
        if (original.size() != m * n)  // Check if reshaping is possible
            return {};

         vector<vector<int>> arr(m, vector<int>(n));  // Correct 2D array initialization

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int x=original[i*n+j];
                arr[i][j]=x;
            }
        }
        return arr;
    }
};
*/


}
#include<iostream>
using namespace std;

int main(){
    /////////////////////////////////////////////////////////  [Pattern.cpp ]notes   ////////////////////////////////////////////// 
    //1] 
    /*
    for(int i =1; i<=4;i++){
        for( int j=1;j<=4;j++){
            cout<<i<<" ";
        }
        cout<<"\n";
    }
    */
   // 2]star pattern
   /*
    for(int i=1;i<=4;i++){
        for (int j=1;j<=i;j++){
            cout<<'*'<<" ";
        }
        cout<<'\n';
    }
    */
   // 3]inverted star pattern
    /*
   for(int i=1;i<=4;i++){
    for (int j=4;j>=i;j--){
        cout<<'*'<<" ";
     }
     cout<<'\n';
   }
    
   //3] or
   /*
   int row=7;
   for (int i=1;i<=row;i++){
    for (int j=1;j<=(row-i+1);j++){
        cout<<"* ";
    }
    printf("\n");
   }
   */

  //4] half pyramid pattern
  /*
  int n =5;
   for (int i=1;i<=n;i++){
    for (int j=1;j<=i;j++){
        printf("%d ",j);
    }
    cout<<"\n";
   }
   */
   //5] character pyramid pattern

   /*
    int n=4;
    char ch ='A';
    for (int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
           cout<< ch++<<" " ;
        }
        cout<<'\n';
    }
    */

   //6] hollow rectangle
   /*
   int n=10;
   for(int i=1;i<=n;i++){
    cout<<'*';
    for (int j=1;j<=n-1;j++){
        if(i==1 || i==n){
            cout<<"*";
        }else{
            cout<<" ";
        }
    }
    cout<<'*';
    cout<<'\n';
   }
   */
   
   //7]Inverted & rotated half pyramid

   /*
    int n=10;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<'\n';
    }
    */

   //8] Floyd's triangle
   /*
   int n=5,num=1;
   for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<num++<<" " ;
    }
    cout<<'\n';
   }
   */
    
    //9] Diamond pattern
    //1st pyramid
    
    /*
    int n=9;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){

            cout<<" ";  
        }
        for (int j=1;j<=2*i-1;j++){
            cout<<"*";

        }
        cout<<"\n";
    }
    
    //2nd pyramid
    for(int i=n;i>=1;i--){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<'\n';
    }
    */

    //Butterfly pattern
    //1st half
    /*
    int n=14;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=1;j<=2*(n-i);j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    //2nd half
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=1;j<=2*(n-i);j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    */

    ///////////////////assignment//////////////////////////////////////////

    //1] 0-1 Triangle Pattern
    /*
    bool val=true;
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<val<<"";
            val=!val;
        }
        cout<<"\n";
    }
    */

    //2] Rhombus pattern

    /*
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=n;j++){
            cout<<"*";
        }
        cout<<'\n';
    } 
    */

    //3] palindromic pattern with numbers

    /*
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";//<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<j;//<<" ";
        }
        for(int j=2;j<=i;j++){
            cout<<j;//<<" ";
        }
        cout<<'\n';
    }
    */
    
    /*
    int n=4;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
         cout<<'\n';
     }
    */ 
   

 }
    

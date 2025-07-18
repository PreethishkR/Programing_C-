#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

////////////////////////////////////////////////////////////////  [vectors.cpp ]notes  ///////////////////////////////////////////////////////////////////////////


    //pair sum, vector function
        vector<int>pairsum(vector<int>arr,int target){
            int st=0; int end=arr.size()-1;
            vector<int>ans;
            int sum=0;
            sum=arr[st]+arr[end];
            while(st<end){
                if(sum==target){
                    ans.push_back(st);
                    ans.push_back(end);
                    return ans;
                }
                else if(sum>target){
                    end--;
                }
                else{
                    st++;
                }
                
            }
            return ans;
         }
    


 void dynamic_array(){
    cout<<"enter size: "<<endl;
    int size;
    cin>>size;
    int *ptr=new int [size];
    for(int i=0;i<size;i++){
        ptr[i]=1;
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
    delete [] ptr;
 }

 //assignment_1_ LEETCODE_Find the number that occurs twice and the number that is missing and return them in the form of an array.
 vector<int> findErrorNums_mine(vector<int>& nums) {
    vector<int> ans;
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[i]==nums[j]){
                nums[j]=nums[i]+1;
                ans.push_back(nums[i]);
                ans.push_back(nums[j]);
            }
           
        }
    }
     return ans;
}


  vector<int>findErrorNums(vector<int>&nums){
    vector<int>ans;
    int n=nums.size();
    vector<bool>isPresent(n+1,false);
    for(int i=0;i<n;i++){
        if(isPresent[nums[i]]){
        ans.push_back(nums[i]);
        }
        isPresent[nums[i]]=true;
    }
    for(int i=1;i<isPresent.size();i++){
        if(!isPresent[i]){
        ans.push_back(i);
        break;
         }
    }
    return ans;
    }

    //assignment_2_ LEETCODE_Container With Most Water
        int maxArea(vector<int>&height){
            int left=0;
            int right=height.size()-1;
            int maxArea=0;
            while(left<right){
            int currentArea = min(height[left], height[right]) * (right-left);
            maxArea=max(maxArea,currentArea);
            if(height[left]<height[right]){
                left++;
             }else{
                right--;
             }
            }
        return maxArea;
        }

 int main(){
    /*
    dynamic_array();
    return 0;
    */

    /*
    //2D dynamic array
    int row,cols;
    cout<<"enter row: "<<endl;
    cin>>row;
    cout<<"enter cols: "<<endl;
    cin>>cols;
    int **matrix=new int*[row];
    for(int i=0;i<row;i++){
        matrix[i]=new int[cols];
    }
    int x=1;
    for(int i=0;i<row;i++){
        for(int j=0;j<cols;j++){
            matrix[i][j]=x++;
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    */

    //vector IMPLEMENTATION in memory
    /*
    vector<int>vec={1,2,3,4};
    cout<<"size:"<<vec.size()<<'\n';
    cout<<"capacity:"<<vec.capacity()<<'\n';
    
    vec.push_back(5);
    cout<<"size:"<<vec.size()<<'\n';
    cout<<"capacity:"<<vec.capacity()<<'\n';
    
    vec.pop_back();
    vec.pop_back();
    vec.pop_back();
    cout<<"size:"<<vec.size()<<'\n';
    cout<<"capacity:"<<vec.capacity()<<'\n';
    */
    
    //pair sum
    /*
    vector<int>vect2check={2,7,11,15};
    int target=9;
    vector<int>ans=pairsum(vect2check,target);
    cout<<ans[0] <<","<<ans[1]<<endl;
    */
    
    //vector 2D
    /*
    vector<vector<int>>matrix={{1,2,3,}, {4,6}, {8}};
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[i].size();j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl; 
    } 
    */

    //assignment_1_ LEETCODE_Find the number that occurs twice and the number that is missing and return them in the form of an array.
    /*
    vector<int>num={1,2,2,4};
    vector<int>ans_a=findErrorNums_mine(num);
    cout<<ans_a[0]<<","<<ans_a[1]<<endl;  
    */

    /*
    vector<int>numss={0,0};
    vector<int>ans_b=findErrorNums(numss);
    cout<<ans_b[0]<<","<<ans_b[1]<<endl;  
    */

    /*
    vector<int>max_water_area={1,8,6,2,5,4,8,3,7};
    cout<<maxArea(max_water_area)<<endl;
    */
    
 }  
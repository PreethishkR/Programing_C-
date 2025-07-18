#include<iostream>
#include<string.h>
#include<cstring>
#include<string>
using namespace std;


////////////////////////////////////////////////////////////////  [Char_array__strings.cpp ]notes  ///////////////////////////////////////////////////////////////////////////

   
   //Convert to upper case  
  //  void to_upper_case(char word[],int n){

  //        for(int i=0;i<n;i++){
  //          char ch=word[i];
  //             if(ch>='A' && ch<='Z'){
  //               continue;
  //             }
  //             else{
  //               word[i]=ch-'a'+'A'; 
  //             }
  //        }
  //   }

    void to_upper_case(char word[],int n){

      for(int i=0;i<n;i++){
        
           if(word[i]>='A' && word[i]<='Z'){
             continue;
           }
           else{
             word[i]=word[i]-'a'+'A'; 
           }
      }
 }

    void to_lower_case(char word[],int n){

        for(int i=0;i<n;i++){
          char ch=word[i];
             if(ch>='A' && ch<='Z'){
               word[i]=ch-'A'+'a';
             }
             else{
                continue;
             }
        }
   }
 
   void reverse_string(char word[],int n){
    int start=0;
    int end=n-1;
    while(start<end){
        swap(word[start],word[end]);
        start++;
        end--;
    }
    cout<<word<<endl;

   }

   bool check_pallindrome(char pallli[],int n ){
    int start=0;
    int end=n-1;
    while(start<end){
        if(pallli[start++]==pallli[end--]){
            cout<<"A vallid pallindrome"<<endl;
            return true;
        }
        else{
            cout<<"Not a pallindrome"<<endl;
            return false;
        }
       
    }
   }

   bool is_Anagram(string s1,string s2){
       if(s1.length()!=s2.length()){
        cout<<"Not an anagram"<<endl;
           return false;
       }
       int count[26]={0};
       for(int i=0;i<s1.length();i++){
          int idx= count[s1[i]-'a']++;
       }

       for(int i=0;i<s2.length();i++){
          int idx= s2[i]-'a';
          if(count[idx]==0){
            cout<<"Not an anagram"<<endl;
            return false;
          }
          count[idx]--;

       }
       cout<<"is Anagram"<<endl;
       return true;
   }

  void no_of_low_vowels(string s){
    int count=0;
    for(int i=0;i<s.length();i++){
      if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
        count++;
      }
    }
    cout<<count<<endl;
  }
   int main(){
    /*
    char work[] = "code";
    cout<<work<<endl;
    char work1[] = {'c','o','d','e','\0'};
    cout<<strlen(work)<<endl;
   */

    //taking string input from user
    /*
    char words[10];
    cout<<"Enter a word: ";
    cin>>words;
    cout<<"your entered words:"<<words<<endl;
    cout<<"Length of the word: "<<strlen(words)<<endl;
    */

   //taking sentence input from user using 
   /*
   char sentence[100];
   cout<<"Enter a sentence: ";
   cin.getline(sentence,100,'*');
   cout<<"Your entered sentence: "<<sentence<<endl;
   */
       
       char word[]="hellPPoL";
       /*
       to_upper_case(word,strlen(word)); 
       cout<<word<<endl;
       */
       

       /*
       to_lower_case(word,strlen(word));
       cout<<word<<endl;
       */

       /*
       reverse_string(word,strlen(word));
       */

       /*
       char pallli[]="racecar";
       check_pallindrome(pallli,strlen(pallli));
       */
       
       ///////////////////////////////// < cstring > library functions //////////////////////////////////////////////
       /*
       //strcpy() function
       char str1[100];
       //str1="hello";
       strcpy(str1,"hello");
       cout<<str1<<endl;
       char str2[100];
       strcpy(str2,str1);
       cout<<"from str2: "<<str2<<endl;
       
       //strcat() function
       char str3[100]="hello";
       char str4[100]="world";
       strcat(str3,str4);
       cout<<str3<<endl;
       
       //strcmp() function
       char str5[100]="hello";
       char str6[100]="hello";
       cout<<strcmp(str5,str6)<<endl;
       
       char str7[100]="hello";
       char str8[100]="x";
       cout<<strcmp(str7,str8)<<endl;//as x greater than h //-1
       */
       
       //////////////////////////////////////// string class //////////////////////////////////////////////
        /*
        string s1="hello";
        cout<<s1<<endl;
        s1="world";
        cout<<s1<<endl;
        
        string str; 
        getline(cin,str,'$');
        */

         //printing string each character
         /*
         string strg="appna college";
         for(int i=0;i<strg.length();i++){
          cout<<strg[i]<<"-";
        }
        cout<<endl;
        */
        
        //anagram
        /*
        string s1="listen";
        string s2="silent";
        is_Anagram(s1,s2);
        */

        //no of vowels
        string s="hello";
        no_of_low_vowels(s);

   }
 
#include <iostream>
#include<string>
using namespace std;
// class Solution {
// public:
//     string mergeAlternately(string word1, string word2) {
        // int i,j;
        // string array;
        // j=0;
        // for(i=0; i<n; i++){
            
        //  array[j]=word1[i];
        //  j++;
        //  array[j]=word2[i];
        //  j++
        // }
        // return array;
//     }
    int main(){
     string word1, word2;
     cin>>word1>>word2;
             int i,j,a,b,n;
             a=word1.length();
             b=word2.length();
             n=max(a,b);
             cout<<n;
        string array;
        j=0;
       
        for(i=0; i<n; i++){
        if(i<a){
            array[j]=word1[i];
         j++;
        }
        if(i<b){
             array[j]=word2[i];
         j++;
        }
        }
        for ( i = 0; i <j; i++)
        {
           cout<<array[i];
        } 
    }
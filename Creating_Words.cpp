#include <iostream>
#include<string>
using namespace std;

int main(){

    int i,n;
    cin>>n;
    
    string array1[n]={};
    string array2[n]={};
    for ( i = 0; i < n; i++)
    {
        cin>>array1[i];
        cin>>array2[i];
    }

    char b;
    for ( i = 0; i < n; i++)
    {
        b=array1[i][0];
        array1[i][0]=array2[i][0];
        array2[i][0]=b;
    }
    
    for ( i = 0; i < n; i++)
    {
        cout<<array1[i]<<" ";
        cout<<array2[i]<<'\n';
    }
    
    
}
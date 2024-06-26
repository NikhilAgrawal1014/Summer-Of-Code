#include <iostream>
using namespace std;

int main() {
    long long int i,n,m;
    cin >> n;
    long long int array[n]={0};
    for ( i = 0; i < n; i++)
    {
        cin >> m;
        array[i]=m*m+2*m+2;
    }
    for ( i = 0; i < n; i++)
    {
      cout<<array[i];
      cout<< '\n';
    }
    
    
    // while (t--) {
    //     long long n;
    //     cin >> n;
    //     // Calculate the total length of the chocolate layer
    //     array[i]
    //     cout << (n * n) +2*n+2 << endl;
    // }
    return 0;
}

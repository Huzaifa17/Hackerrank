#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,m,k,i,j,q,s,t;
    cin>>n>>q;
    int *arr[n];
    for(i=0;i<n;i++)
    {
        cin>>m;
        arr[i]=new int[m];
        for(j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int arr2[q],arr3[q];
    for(i=0;i<q;i++){
        cin>>arr2[i]>>arr3[i];
    }
    for(i=0;i<q;i++){
        cout<<arr[arr2[i]][arr3[i]]<<endl;
    }
    return 0;
}

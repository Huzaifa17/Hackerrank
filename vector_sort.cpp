#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int i,j,k,n;
    vector<int> arr;
    cin>>n;
    for(i=0;i<n;++i)
    {
        cin>>k;
        arr.push_back(k);
    }
    sort(arr.begin(),arr.end());
    for(i=0;i<n;++i)
    {
        if(i==0)
        {
            cout<<arr[i];
        }
        else{
            cout<<' '<<arr[i];
        }
    }
    cout<<endl;
    return 0;
}

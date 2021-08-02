#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i,j,k,n,m;
    cin>>n;
    vector<int> arr(n);
    for(i=0;i<n;++i)
    {
        cin>>arr[i];
    }   
    cin>>m;
    vector<int>::iterator i1=arr.begin()+m-1,start,en;
    arr.erase(i1);
    cin>>n>>m;
    start=arr.begin()+n-1;
    en=arr.begin()+m-1;
    arr.erase(start,en);
    cout<<arr.size()<<endl;
    for(i=0;i<arr.size();++i)
    {
        if(i==0)
        {
            cout<<arr[i];
        }
        else {
            cout<<' '<<arr[i];
        }
    }
    cout<<endl;
    return 0;
}

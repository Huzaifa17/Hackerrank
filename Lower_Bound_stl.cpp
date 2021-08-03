#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int i,j,k,n,q,m;
    cin>>n;
    vector<int> arr;
    for(i=0;i<n;++i)
    {
        cin>>k;
        arr.push_back(k);
    }  
    cin>>q;
    vector<int>::iterator p1;
    for(i=0;i<q;++i)
    {
        cin>>m;
        p1=lower_bound(arr.begin(),arr.end(),m);
        k=p1-arr.begin();
        if(arr[k]==m)
        {
            cout<<"Yes "<<k+1<<endl;
        }
        else{
            cout<<"No "<<k+1<<endl;
        }
    }
    return 0;
}

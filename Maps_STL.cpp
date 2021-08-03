#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int i,j,k,n,m;
    char s[50];
    map<string,int> mp;
    int t,q;
    cin>>t;
    for(i=0;i<t;++i)
    {
        cin>>q;
        if(q==1)
        {
            cin>>s>>k;
            if(mp.find(s)!=mp.end())
            {
                mp[s]=mp[s]+k;
            }
            else
            {
                mp.insert(make_pair(s,k));
            }
        }
        else if(q==2)
        {
            cin>>s;
            mp.erase(s);
        }
        else
        {
            cin>>s;
            cout<<mp[s]<<endl;
        }
    }
    return 0;
}

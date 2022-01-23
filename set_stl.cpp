#include<iostream>
#include<set>
using namespace std;

int main()
{
	int i,j,t,x,y;
	set<int> st;
	set<int> :: iterator it;
	cin>>t;
	for(i=0;i<t;++i)
	{
		//st.clear();
		cin>>y>>x;
		if(y==1)
		{
			st.insert(x);
		}
		else if(y==2)
		{
			if(st.find(x)!=st.end())
			{
				st.erase(st.find(x));
			}
		}
		else if(y==3)
		{
			if(st.find(x)!=st.end())
			{
				cout<<"Yes"<<endl;
			}
			else
			{
				cout<<"No"<<endl;
			}
		}
	}
	return 0;
}

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a;
    char b;
    long c;
    double d;
    float e;
    cin>>a>>c>>b>>e>>d;
    cout<<a<<"\n"<<c<<"\n"<<b<<"\n";
    cout.precision (3) ;
    cout<<fixed<<e<<endl;
    cout.precision (9) ;
    cout<<fixed<<d<<endl;
    return 0;
}

#include <cstdio>
#include <iostream>
using namespace std;
string a[101][4];
int main(void)
{
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
    int n=1;
    while(cin>>a[n][0]>>a[n][1]>>a[n][2]>>a[n][3])
        ++n;
    for(int i=1;i<=n;++i)
        cout<<"| "<<a[i][0]<<" | "<<a[i][1]<<" | "<<
            a[i][2]<<" | "<<a[i][3]<<" | "<<endl;
    return 0;
}
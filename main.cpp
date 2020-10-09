
#include <bits/stdc++.h>
using namespace std;


int main(){
int x;
cin>>x;
int a[x];
int dp[1000];
dp[0]=0;
for(int i=1;i<=x;i++)
{
    cin>>a[i];
    dp[i]=dp[i-1]+a[i];
}
int i,j;
cin>>i>>j;
cout<<dp[j]-dp[i-1];





}
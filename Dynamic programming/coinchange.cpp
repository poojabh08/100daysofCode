/*Given a value N, if we want to make change for N cents, and we have infinite supply of each of S = { S1, S2, .. , Sm} valued coins, how many ways can we make the change? The order of coins doesn’t matter.

For example, for N = 4 and S = {1,2,3}, there are four solutions: {1,1,1,1},{1,1,2},{2,2},{1,3}. So output should be 4. For N = 10 and S = {2, 5, 3, 6}, there are five solutions: {2,2,2,2,2}, {2,2,3,3}, {2,2,6}, {2,3,5} and {5,5}. So the output should be 5.*/
#include<iostream>
using namespace std;

int count(int a[],int m,int n)
{
    int t[n+1];
    for(int i=0;i<n+1;i++)
    {
        t[i]=0;
    }
    t[0]=1;
    for(int i=0; i<m; i++) 
        for(int j=a[i]; j<=n; j++) 
            t[j] += t[j-a[i]]; 
  
    return t[n]; 
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
     cin>>a[i];
    int m;
    cin>>m;
    int r=count(a,n,m);
    cout<<r;
    return 0; 
}
/*find the repeating and missing; Given an unsorted array of size n, Array elements are in the range from 1 to n, One number from set 1,2..n is missing and one number occurs twice in the array. Find these two numbers.*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int e,n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>e;
        v.push_back(e);
    }
    vector<int> x;
    vector<int> y;
    int xor1=0;
    for(int i=0;i<n;i++)
        xor1^=v[i];
    for(int i=1;i<=n;i++)
        xor1^=i;
    for(int i=0;i<n;i++)
    {
        if(v[i]<<1==1)
            x.push_back(v[i]);
        else
        {
            y.push_back(v[i]);
        }
        if(i<<1==1)
            x.push_back(i);
        else
        {
            y.push_back(i);
        }
    }
    int a=0,b=0,f=0;
    for(int i=0;i<x.size();i++)
        a^=x[i];
    for(int i=0;i<y.size();i++)
        b^=y[i];
    for(int i=0;i<n;i++)
    {
        if(a==v[i]){
            cout<<"Repeating number: "<<v[i];
            f=1;
            break;
        }
        if(b==v[i])
        {
            cout<<"Repeating number: "<<v[i];
            break;
        }
    }
    if(f==0)
    {
        cout<<"\nMissing number: "<<a;
    }
    else
    {
        cout<<"\nMissing number: "<<b;
    }
    return 0;
}

// Need to be reviewed.
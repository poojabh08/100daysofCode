#include<iostream>
using namespace std;
bool prime(int n)
{
    if(n<=1)
    {
        return false;
    }
    if(n<=3)
        return true;
    else
    {
        for(int i=3;i<n;i++)
            if(n%i==0)
            return false;
        return true;
    }
}
int main()
{
    int d,p;
    cin>>d>>p;
    int n=d/p;
    int h=n;
    int c=0;
    while(n>1)
    {
        int i=0;
        int count=0;
        while(true){
            if(prime((i*h)+n)and ((i*h)+n)<=d)
                count++;
            if(i==(p-1))
                break;
            i++;
        }
        if(count==p)
            c++;
        n--;
    }
    cout<<c;
}
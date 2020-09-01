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
    int *x;
    int *y;
    int xor1=v[0];
    for(int i=1;i<n;i++)
        xor1^=v[i];
    for(int i=1;i<=n;i++)
        xor1^=i;
    int set_bit_no = xor1 & ~(xor1 - 1); 
    for(int i=0;i<n;i++)
    {
        if(v[i] & set_bit_no)
            *x^=v[i];
        else
        {
            *y^=v[i];
        }
    }
    for(int i=1;i<=n;i++){
        if(i& set_bit_no)
            *x^=i;
        else
        {
           * y^=i;
        }
    }
    cout<<"Missing "<<*x;
    cout<<"\nRepeating "<<*y;
    
}

// Need to be reviewed.   Still working on it
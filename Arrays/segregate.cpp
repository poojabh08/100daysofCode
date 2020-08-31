//segregate 0's oneside and 1's one side
#include<iostream>
using namespace std;
void swap(int *i,int *j)
{
    int *t=i;
    *i=*j;
    *j=*t;
}
int main()
{
    int t;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
    }
    int *f,*e;
    f=&a[0];
    e=&a[t-1];
    while(*f!=*e)
    {
      
        if(*f==1 && *e==0)
        {
            swap(*f,*e);
            *(f++);
            *(e--);
        }
        else if(*f==0)
        *(f++);
        else if(*e==1)
        *(e--);
    }
    
    for(int i=0;i<t;i++)
     cout<<a[i];
    return 0;

}
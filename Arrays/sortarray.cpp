/*Sort the array having 0s,1s and 2s.*/
#include<iostream>
#include<cstdlib>
#include<vector>
using namespace std;
void sorted(vector<int>& a)
{
    int l=0;
    int mi=0;
    int high = a.size()-1;
    while(mi<=high)
    {
        switch(a[mi])
        {
            case 0: swap(a[l],a[mi]);
                    mi++;
                    l++;
                    break;
            case 1: mi++;
                    break;
            case 2: swap(a[mi],a[high--]);
                    break;
        }
    }
    return;
}
int main()
{
    int n,e;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>e;
        v.push_back(e);
    }
    sorted(v);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<"\t";
    }
    return 0;
}

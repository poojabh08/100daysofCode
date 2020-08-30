/*given an array nums containing n+1 integers where each integer is between 1 and n ,prove that at least one duplicate number must exist,find the duplicate number. Assume that there is only one duplicate number.*/
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int a[n];
//     int b[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//         b[i]=0;
//     }
//     for(int i=0;i<n;i++)
//     {
//         if(b[a[i]]==0)
//         {
//             b[a[i]]=1;
//         }
//         else
//         {
//             cout<<a[i];
//         }
//     }
// }
// here we are using O(n) space complexity.
// Improved code with space complexity O(1)
// time complexity O(n)

#include<iostream>
#include<vector>
using namespace std;
int duplicate(vector<int>& a)
{
    int slow=a[0];
    int fast=a[0];
    do{
        slow=a[slow];
        fast=a[a[fast]];
    }while(slow!=fast);
    fast = a[0];
    while(slow!=fast)
    {
        slow=a[slow];
        fast=a[fast];
    }
    return slow;
}
int main()
{
    int n,e;
    cin>>n;
    vector<int> a;
    for (int i=0;i<n;i++){
    cin>>e;
    a.push_back(e);}
    int r=duplicate(a);
    cout<<r;
    return 0;
}
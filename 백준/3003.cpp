#include<iostream>
using namespace std;
// 1 1 2 2 2 8
int main()
{
    int arr[6];
    int let[6]={0};
    int brr[6]={1,1,2,2,2,8};
    for(int x=0;x<6;x++)
    {
        cin>>arr[x];
    }
    for(int x=0;x<6;x++)
    {
        let[x]=brr[x]-arr[x];
    }
    for(int i=0;i<6;i++)
    {
        cout<<let[i]<<" ";
    }
    
    return 0;
}

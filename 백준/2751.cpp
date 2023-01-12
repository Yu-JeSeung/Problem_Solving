#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int arr[1000000]={0};
    for(int x=0;x<a;x++)
    {
        cin>>arr[x];
    }
    sort(arr,arr+a);
    for(int x=0;x<a;x++)
    {
        cout<<arr[x]<<"\n";
    }
    
    return 0;
}

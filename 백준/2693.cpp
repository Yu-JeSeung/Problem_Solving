#include<iostream>
#include<algorithm>
using namespace std;
int arr[10]={0};
int main()
{
    int a;
    cin>>a;
    for(int y=0;y<a;y++)
    {
        for(int x=0;x<10;x++)
        {
            cin>>arr[x];
        }
        sort(arr,arr+10);
        cout<<arr[7]<<"\n";
    }
    return 0;
}

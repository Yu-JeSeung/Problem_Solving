#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int arr[100]={0};
    int result[100]={0};
    int cnt=0;
    int result_cnt=0;
    for(int x=0;x<a;x++)
    {
        cin>>arr[x];
    }
    for(int x=0;x<100;x++)
    {
        if(arr[x]==0)continue;
        for(int y=1;y<=arr[x];y++)
        {
            if(arr[x]%y==0)cnt++;
        }
        if(cnt==2)
        {
            cnt=0;
            result_cnt++;
        }
        cnt=0;
    }
    cout<<result_cnt;
    
    
    return 0;
}

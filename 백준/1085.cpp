#include<iostream>
using namespace std;
int main()
{
    int x,y,w,h;
    cin>>x>>y>>w>>h;
    int cal_a[2];
    cal_a[0]=x-0>w-x?w-x:x-0;
    cal_a[1]=y-0>h-y?h-y:y-0;
    int result=cal_a[0]>cal_a[1]?cal_a[1]:cal_a[0];
    cout<<result;
    return 0;
}

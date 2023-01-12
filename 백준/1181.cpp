#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool cmp(string a, string b)
{
    if(a.length()!=b.length())
    {
        return a.length()<b.length();
    }
    else
    {
        return a<b;
    }
}
string arr[20000];
int main()
{
    int a;
    cin>>a;
    for(int x=0;x<a;x++)
    {
        cin>>arr[x];
    }
    
    sort(arr,arr+a,cmp);
    
    for(int x=0;x<a;x++)
    {
        if(arr[x]==arr[x+1])continue;
        cout<<arr[x]<<"\n";
    }
    
    return 0;
}

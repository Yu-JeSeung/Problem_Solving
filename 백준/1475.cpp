#include<iostream>
#include<string>
#include<algorithm>
#include <typeinfo>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int arr[10]={0}; // 0 1 2 3 4 5 6 7 8 9
    for(int x=0;x<a.length();x++)
    {
        arr[(int)a[x]-48]++;
    }
    int max=0;
    int max_double=0;
    int final_result;
    for(int x=0;x<10;x++)
    {
        if(x==6||x==9)continue;
        if(max<arr[x])max=arr[x];
    }
    max_double=(arr[6]>arr[9]?arr[6]:arr[9]);
    max_double=arr[6]+arr[9];
    if(max_double%2==1)max_double=max_double/2+1;
    else max_double=max_double/2;
    final_result=(max>max_double)?max:max_double;
    cout<<final_result;
    
    
    return 0;
}

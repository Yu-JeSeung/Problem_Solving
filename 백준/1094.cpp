#include<iostream>
using namespace std;
int main()
{
    int b;
    cin>>b;
    int cnt=0;
    while(b!=1)
    {
        if(b%2==1)
        {
            cnt++;
            b=b/2;
        }
        else b= b/2;
    }
    cout<<cnt+1;
    
    return 0;
}

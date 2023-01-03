#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int max_S = 2*a-1;
    int cen_S;
    if(max_S%2==1)cen_S=max_S/2+1;
    for(int x=1;x<=a;x++)
    {
        for(int i=max_S;i>2*a-x;i--)
        {
            cout<<" ";
        }
        for(int j=x*2-1;j<=max_S;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int max_S=2*a-1;
    int cen_S = max_S/2;
    if(max_S%2==1)cen_S+=1;
    int mid_X=cen_S;
    for(int x=1;x<=max_S;x++)
    {
        for(int i=1;i<=x;i++)
        {
            if(x>cen_S)
            {
                continue;
            }
            cout<<"*";
        }
        for(int j=cen_S;j>x;j--)
        {
            cout<<" ";
        }
        for(int k=cen_S;k>x;k--)
        {
            cout<<" ";
        }
        for(int i=1;i<=x;i++)
        {
            if(x>cen_S)
            {
                continue;
            }
            cout<<"*";
        }
        cout<<endl;
        if(x>=cen_S)
        {
            for(int i=mid_X;i>1;i--)
            {
                cout<<"*";
            }
            for(int j=cen_S;j<=x;j++)
            {
                cout<<" ";
            }
            for(int j=cen_S;j<=x;j++)
            {
                cout<<" ";
            }
            for(int i=mid_X;i>1;i--)
            {
                cout<<"*";
            }
            mid_X--;
        }
        
    }
    
    
    return 0;
}

#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int a,b,c,qw,tmp;

    cin>>a>>b>>c;
    qw=a%b;
    
    for(int x=0;x<c;x++)
    {
        tmp = (qw*10)/b;
        qw = (qw*10)%b;
    }
    cout<<tmp;
    
    return 0;
}

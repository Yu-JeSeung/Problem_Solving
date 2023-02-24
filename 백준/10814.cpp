#include<iostream>
#include<algorithm>
using namespace std;

struct node{
    int age;
    string name;
};

node abc[100001];

bool cmp(node a,node b)
{
    return a.age<b.age;
}

int a;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin>>a;
    for(int x=0;x<a;x++)
    {
        cin>>abc[x].age>>abc[x].name;
    }
    
    stable_sort(abc,abc+a,cmp);
    
    for(int x=0;x<a;x++)
    {
        cout<<abc[x].age<<" "<<abc[x].name<<"\n";
    }
    
    return 0;
}

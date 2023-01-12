#include<iostream>
using namespace std;
// 배열 선언
int arr[10001]={0};

void printQ(int count,int value)
{
    
    for(int x=0;x<count;x++)
    {
        cout<<value<<"\n";
    }
}
int main()
{
    int a,b;
    scanf("%d",&a);
    
    // 10000000개 입력+카운트 추가
    for(int x=0;x<a;x++)
    {
        scanf("%d",&b);
        arr[b]++;
    }
    
    // 배열에 값 출력
    for(int x=0;x<10001;x++)
    {
        if(arr[x]==0)continue;
        printQ(arr[x],x);
    }
    
    return 0;
}

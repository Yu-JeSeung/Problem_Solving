#include<iostream>
#include<string>
#include<algorithm>

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
    
    // 전체 돌면서 숫자 갯수세기 단, 6,9는 제외
    for(int x=0;x<10;x++)
    {
        if(x==6||x==9)continue;
        if(max<arr[x])max=arr[x];
    }
    
    // max_double에 6이랑 9 더하기
    max_double=arr[6]+arr[9];
    
    // 홀수면 +1해주기 (3일때 1.5라서 1로 됨으로)
    if(max_double%2==1)
        max_double=max_double/2+1;
    else
        max_double=max_double/2;
    
    // 6,9를 더하고 나눈값이랑 다른 숫자 카운트값이랑 비교해서 큰값
    final_result=(max>max_double)?max:max_double;
    
    cout<<final_result;
    
    
    return 0;
}

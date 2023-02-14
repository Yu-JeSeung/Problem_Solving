#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int a,flag=1;

int func(int num) {
    int ret = 0;
    if (num == 2 || num == 4){
        return num / 2;
    }
    if (num % 5 == 0){
        return num / 5;
    }
    if ((num - ((num / 5) * 5)) % 2 == 0) {
        ret += (num / 5);
        num = num - ((num / 5) * 5);
        return ret + (num / 2);
    }
    else {
        ret += (num / 5 - 1); //-1
//        if(ret == 1 || ret == -1)
//            return -1;
        num = (num - ((num / 5) - 1) * 5);
        return ret + (num / 2);
    }
}

int main()
{
    cin >> a;
    int ret = func(a);
    if(ret==a||a==1)cout<<-1;
    else cout<<ret;

    return 0;
}

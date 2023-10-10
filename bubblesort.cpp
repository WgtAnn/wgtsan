#include<bits/stdc++.h>
using namespace std;
int n, a[10000005];
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)//输入
    cin>>a[i]; 
    for(int i=1;i<n;i++)//总共进行n-1轮冒泡
    {
         for(int j=1;j<=n-i;j++)//一轮冒泡  
         {
              if(a[j]>a[j+1])
              {
                   swap(a[j],a[j+1]);
              }
         }
    }
    for(int i=1;i<=n;i++)//输出
    cout<<a[i]<<" ";
    return 0;//结束
}

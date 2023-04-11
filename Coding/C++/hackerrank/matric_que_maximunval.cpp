#include<iostream>
#define int long long 
using namespace std;
int32_t main()
{
    int n,m,max;
    cin>>n>>m;
    static int *arr;
    arr=new int[n];
    int input[3];
    //arr=new int[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=0;
    }
    max=0;
    for(int i=1;i<=m;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>input[j];
        }
        
        for(int j=input[0]-1;j<input[1];j++)
        {
            arr[j]=arr[j]+input[2];
            if(arr[j]>max) max=arr[j];
        }
    }
    cout<<max;
    return 0;
}

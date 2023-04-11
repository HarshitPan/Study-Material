#include<iostream>
#define size 6
using namespace std;
int check(int a[][6])
{
    int max=-9999999;
    for(int i=0;i<size-2;i++)
    {
        for(int j=0;j<size-2;j++)
        {
            int sum=0;
            for(int k=0;k<3;k++)
            {
                for(int l=0;l<3;l++)
                {
                    if(k==0 || k==2 || k==l ) sum+=a[i+k][j+l];
                }
            }
            cout<<sum<<" ";
            if(sum>max) max=sum;
        }
        cout<<endl;
    }
    return max;
}
int main()
{
    int a[6][6];
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<check(a);
    return 0;
}
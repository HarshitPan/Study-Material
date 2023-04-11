#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter a number (under 9)->";
    int n;
    cin>>n;
    int max=2*n-1;
    for(int i=0;i<=max;i++)
    {
        int temp=i,value=n,count_a=0,count_b=0;
        if(temp==n) continue;
        else if(temp>n) temp=max-i;
        for(int j=0;j<max;j++)
        {
            cout<<value;
            if(j<=n && count_a<temp) 
            {
                value--;
                count_a++;
            }
            else if(j>=max-temp-1 && count_b<temp) 
            {
                value++;
                count_b++;
            }
            
        }
        cout<<endl;
    }
    return 0;
}
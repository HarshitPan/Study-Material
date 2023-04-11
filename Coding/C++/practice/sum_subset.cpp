#include <iostream>
using namespace std;

char ch[10][7];
int pos=0;
int maxi=10;

void sum_subset(int arr[],int loc,int sum,int rem,string str)
{
    if(sum==maxi)
    {
        str=str+'A';
        int i;
        for(i=0;str[i]!='A';i++)
        {
            ch[pos][i]=str[i];
        }
        ch[pos][i]='A';
        pos++;
        return;
    }
    if(sum>maxi || loc>5)
    {
        return;
    }
    string temp=str+'1';
    sum_subset(arr,loc+1,sum+arr[loc],rem-arr[loc],temp);
    temp=str+'0';
    sum_subset(arr,loc+1,sum,rem-arr[loc],temp);
}
int main()
{
    int arr[]={7,3,5,6,8,10};
    int sum=0;
    for(int i=0;i<6;i++)
    {
        sum+=arr[i];
    }
    sum_subset(arr,0,0,sum,"");
    for(int j=0;j<pos;j++)
    {
        for(int i=0;ch[j][i]!='A';i++)
        {
            int index;
            if(ch[j][i]=='0') index=0;
            else index=1;
            if(index==1)
            {
                cout<<arr[i]<<",";
            }
            
        }
        cout<<endl;
    }
    return 0;
}
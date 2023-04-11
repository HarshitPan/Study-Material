#include<iostream>
using namespace std;
int largerst_divide_conquerer(int a[],int start,int end,int max=0)
{
    if(start<=end)
    {
        int mid=(start+end)/2;
        if(a[mid]>a[max])
        {
            max=mid;
        }
        int max_temp=largerst_divide_conquerer(a,start,mid-1,max);
        int max_temp2=largerst_divide_conquerer(a,mid+1,end,max);
        if(max_temp>max_temp2)
        {
            return max_temp;
        }
        else
        {
            return max_temp2;
        }
    }
    else return max;
}
int main()
{
    int size;
    cout<<"Enter size of array ->";
    cin>>size;
    int a[size];
    for(int i=0;i<size;i++)
    {
        cout<<"Enter element"<<i+1<<"->";
        cin>>a[i];
    }
    int max_pos=largerst_divide_conquerer(a,0,size-1);
    cout<<max_pos+1;
}
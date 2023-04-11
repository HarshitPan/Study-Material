#include <iostream>
using namespace std;

int main()
{
    int arr[]={234,54,3,64,534,22};
    int size=sizeof(arr)/sizeof(arr[0]);
    int check=1;
    int cal=10;
    int temp[size];
    while(1)
    {
        for(int i=0;i<size;i++)
        {
            temp[i]=(arr[i]%cal)/(cal/10);
        }
        for(int i=0;i<size;i++)
        {
            if(temp[i]!=0)
            {
                check=1;
                break;
            }
            check=0;
        }
        if(!check) break;
        for(int i=0;i<size;i++)
        {
            for(int j=i;j<size;j++)
            {
                if(temp[i]>temp[j])
                {
                    temp[i]+=temp[j];
                    temp[j]=temp[i]-temp[j];
                    temp[i]-=temp[j];
                    arr[i]+=arr[j];
                    arr[j]=arr[i]-arr[j];
                    arr[i]-=arr[j];
                }
            }
        }
        cal*=10;
    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" , ";
    }
    return 0;
}
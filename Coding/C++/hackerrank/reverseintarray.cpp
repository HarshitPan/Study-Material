#include<iostream>
using namespace std;
void reverse(int arr[],int n)
{
    int size=n-1;
    for(int i=0;i<size;i++,size--)
    {
            int temp=arr[size];
            arr[size]=arr[i];
            arr[i]=temp;
    }

}
int main()
{
    int arr[100],n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    reverse(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
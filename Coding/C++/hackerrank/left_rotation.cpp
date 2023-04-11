#include<iostream>
using namespace std;
int main()
{
    int n,d;
    cin>>n>>d;
    int arr[100],arr2[100];
    for(int i=0;i<n;i++) cin>>arr[i];
    int j;
    for(j=0;j<n;j++)
    {
        arr2[j]=arr[(j+d)%n];
    }
    for (int i=0;i<n;i++) cout<<arr2[i]<<" ";
    cout<<endl;
    return 0;
}
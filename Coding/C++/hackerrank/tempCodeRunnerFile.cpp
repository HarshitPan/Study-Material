 #include<iostream>
using namespace std;
int main()
{
    int n,m,max;
    cin>>n>>m;
    int array[n];
    for(int i=0;i<n;i++) array[i]=0;
    for(int i=0;i<m;i++)
    {
        int input[3];
        for(int j=0;j<3;j++) cin>>input[j];
        for(int i=input[0]-1;i<input[1];i++) array[i]=array[i]+input[2];
    }
    max=array[0];
    for(int i=0;i<n;i++) if(array[i]>max) max=array[i];
    cout<<max;
    return 0;
}

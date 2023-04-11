#include<iostream>
using namespace std;
void function()
{
    int n,m,count=1;
    cin>>n>>m;
    int lastAnswer[n];
    lastAnswer[0]=0;
    int **a,query[3],pos[n];
    a=new int*[n];
    for(int i=0;i<n;i++)
    {
        a[i]=new int[1000];   
    }
    for(int i=0;i<n;i++)
    {
        pos[i]=0;
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>query[j];
        }
        int idx=((query[1]^lastAnswer[count-1])%n);
        
        if(query[0]==1)
        {
            a[idx][pos[idx]++]=query[2];
        }
        else if(query[0]==2)
        {
            if(pos[idx]!=0)
                lastAnswer[count++]=a[idx][query[2]%pos[idx]];
            
        }
    }
    for(int i=1;i<count;i++)
    {
        cout<<lastAnswer[i]<<endl;
    }
}
int main()
{
    function();
    return 0;
}

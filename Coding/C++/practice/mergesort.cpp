#include<iostream>
using namespace std;
int* merge(int *a,int n)
{
    if(n>1)
    {
        int *b=new int[n/2];
        int *c=new int[n-(n/2)];
        int i=0;
        for(;i<n/2;i++)
        {
            b[i]=a[i];
        }
        for(int j=0;j<n-(n/2);j++,i++)
        {
            c[j]=a[i];
        }
        b=merge(b,n/2);
        c=merge(c,n-(n/2));
        i=0;
        int k=0;
        int j=0;
        int check=0;
        for(;i<n/2;i++)
        {
            check=0;
            for(;j<n-(n/2);j++)
            {
                if(b[i]<=c[j])
                {
                    a[k]=b[i];
                    j--;
                    k++;
                    check=1;
                    break;
                }
                else 
                {
                    a[k]=c[j];
                    k++;
                }
            }
            if(check==0) a[k++]=b[i];
        }
    }
    return a;
}
int main()
{
    int a[5]={10,23,0,1,4};
    merge(&a[0],5);
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
}
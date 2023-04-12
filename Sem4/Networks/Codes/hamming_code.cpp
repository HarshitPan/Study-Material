// Incomplete

#include<iostream>
using namespace std;

int binary(int x)
{
    int temp=0;
    int i=1;
    while(x!=0)
    {
        temp+=i*(x%2);
        x=x/2;
        i*=10;
    }
    return temp;
}

int main()
{
    long long int l=11,data=10101101101;
    cout<<"Enter length of data ->";
    cin>>l;
    cout<<"Enter data (in binary) ->";
    cin>>data;
    int i=2,p=1;
    int max=0;
    cout<<"Data -> "<<data;
    while(1)
    {
       // cout<<i<<" "<<l+p<<endl;
        
        if(l+p==i-1)
        {
            
            max=i-1;
            break;
        }

        if(i>l) break;
        i*=2;
        p+=1;
    }
    if(max==0)
    {
        cout<<"Hamming Code isn't applicable for this data...";
    }
    int temp=1;
    //cout<<max<<p;
    int arr[max];
    i=1;
    arr[0]=0;
    while(i<max)
    {
        if(i+1==temp*2 && i+1!=max)
        {
            arr[i]=0;
            temp=temp*2;
        }
        else {
            arr[i]=data%10;
            data/=10;
        }
        i++;
    }
    //cout<<endl;
    // for(int i=max-1;i>=0;i--)
    // {
    //     cout<<arr[i]<<" , ";
    // }
    // cout<<endl;
    i=0;
    int k=10;
    while(i<=p-1)
    {
        int j=1;
        int cal=0;
        while(j<=max)
        {
            int b=binary(j);
            // cout<<k<<" "<<j<<" "<<b<<" "<<(b%k)/(k/10)<<" "<<arr[j-1]<<endl;
            
            if((b%k)/(k/10)==1)
            {
                cal+=arr[j-1];
            } 
            j++;
        }
        // cout<<endl<<cal<<endl;
        int power=1;
        for(int t=0;t<i;t++) power*=2;
        arr[ power-1 ]=cal%2;
        k*=10;
        i++;
    }
    cout<<endl;
    cout<<"Hamming Code ->";
    for(int i=max-1;i>=0;i--)
    {
        cout<<arr[i]<<"";
    }
    cout<<endl;
    return 0;
}
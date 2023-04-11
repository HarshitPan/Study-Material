#include<bits/stdc++.h>
using namespace std;
int pickingNumbers(vector<int> a) {
    int max=0,count=1;
    for(int i=0;i<a.size();i++)
    {
        for(int j=i+1;j<a.size();j++)
        {
            int temp=a[i];
            count=1;
            for(int k=j;k<a.size();k++)
            {
                if(abs(a[k]-temp)<=1)
                {
                    count++;
                    temp=a[k];
                }   
            }
            if(count>max) max=count;
        }
    }
    return max;
}
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<pickingNumbers(a);
    return 0;
}
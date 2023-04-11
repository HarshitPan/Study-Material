#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'taumBday' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER b
 *  2. INTEGER w
 *  3. INTEGER bc
 *  4. INTEGER wc
 *  5. INTEGER z
 */

long taumBday(int b, int w, int bc, int wc, int z) {
    if(bc>wc+z)
    {
        return wc*w+b*(wc+z);   
    }
    else if(wc>bc+z)
    {
        return bc*b+w*(bc+z);
    }
    return bc*b+wc*w;
}

int main()
{
    int b,w,bc,wc,z;
    int count;
    cin>>count;
    for(int i=0;i<count;i++)
    {
        cin>>b>>w;
        cin>>bc>>wc>>z;
        int temp=taumBday(b,w,bc,wc,z);
        cout<<temp<<endl;
    }
    return 0;
}

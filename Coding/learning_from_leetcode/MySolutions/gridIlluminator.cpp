#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> gridIllumination(int n, vector<vector<int>>& lamps, vector<vector<int>>& queries) {
        // time limit exceeded... we have to use map / hashtable

        vector<vector<int>> light_on;
        vector<int> result;
        for(int i=0;i<lamps.size();i++)
        {
            light_on.push_back(vector<int>({lamps[i][0],lamps[i][1]}));
        }
       

        for(int i=0;i<queries.size();i++)
        {
            bool check=false;
            // if lamp query is on or off
            for(int j=0;j<light_on.size();j++)
            {
                if(queries[i][0] == light_on[j][0] || queries[i][1] == light_on[j][1] || 
                 queries[i][0]-queries[i][1]==light_on[j][0]-light_on[j][1] || queries[i][0]+queries[i][1]==light_on[j][0]+light_on[j][1]) 
                {
                    check=true;
                    break;
                }
            }
            if(check) result.push_back(1);
            else result.push_back(0);

            // off lamps at all four sides of query lamp

            for(int j=0;j<light_on.size();j++)
            {
                if((light_on[j][0] == queries[i][0] || light_on[j][0] == queries[i][0]+1 || light_on[j][0] == queries[i][0]-1) 
                && (light_on[j][1] == queries[i][1] || light_on[j][1] == queries[i][1]+1 || light_on[j][1] == queries[i][1]-1) ) 
                {
                    light_on.erase(light_on.begin()+j);
                    j--;
                }
            }
        }
        return result;
    }
    vector<int> second_way(int n, vector<vector<int>>& lamps, vector<vector<int>>& queries)
    {
        vector<int> result;
        vector<vector<int>> dir({{0,0},{0,1},{0,-1},{1,0},{-1,0},{-1,-1},{-1,1},{1,-1},{1,1}});
        unordered_map<string,int> map;
        unordered_map<int,int>row,column,dig1,dig2;
        for(int i=0;i<lamps.size();i++)
        {
            int x=lamps[i][0];
            int y=lamps[i][1];
            string block_id;
            if(map.find(to_string(n*x+y)) == map.end()) map[to_string(n*x+y)] = 1; 
            else map[to_string(n*x+y)]++;
            if(row.find(x) == row.end()) row[x]=1;
            else row[x]++;
            if(column.find(y) == column.end()) column[y]=1;
            else column[y]++;
            if(dig1.find(x+y) == dig1.end()) dig1[x+y]=1;
            else dig1[x+y]++;
            if(dig2.find(x-y) == dig2.end()) dig2[x-y]=1;
            else dig2[x-y]++;
        }
        for(auto i:map)
        {
            cout<<i.first<<" "<<i.second<<endl;
        }
        for(int i=0;i<queries.size();i++)
        {
            int x=queries[i][0];
            int y=queries[i][1];
            if( row.find(x)!=row.end() || column.find(y)!=column.end() || 
            dig1.find(x+y)!=dig1.end() || dig2.find(x-y)!=dig2.end())
            {
                result.push_back(1);
            }
            else
            {
                result.push_back(0);
            }

            // to remove
            for(int i=0;i<dir.size();i++)
            {
                int x1=x+dir[i][0];
                int y1=y+dir[i][1];
                if( x1>=0 && x1<n && y1>=0 && y1<n && map.find(to_string(n*x1+y1)) != map.end())
                {
                    int occurance=map[to_string(n*x1+y1)];
                    row[x1]-=occurance;
                    if(row[x1]==0) row.erase(x1);
                    column[y1]-=occurance;
                    if(column[y1]==0) column.erase(y1);
                    dig1[x1+y1]-=occurance;
                    if(dig1[x1+y1]==0) dig1.erase(x1+y1);
                    dig2[x1-y1]-=occurance;
                    if(dig2[x1-y1]==0) dig2.erase(x1-y1);
                    map.erase(to_string(n*x1+y1));
                }
            }
        }
        cout<< endl<<endl<<endl<< to_String( operateBigInt( to_vector(99365),to_vector(655),'+' ) );
        return result;
    }


     string to_String(vector<int> n)
    {
        string s;
        for(int i=n.size()-1;i>=0;i--)
        {
            s=s+char(n[i]+48);
        }
        return s;
    }
    vector<int> to_vector(int n)
    {
        vector<int> result;
        while(n!=0)
        {
            result.push_back(n%10);
            n=n/10;
        }
        return result;
    }
    vector<int> operateBigInt(vector<int> n,vector<int> m,char op)
    {
        vector<int> result;
        int carry=0;
        if(op=='+')
        {
            int smaller=( (n.size()<m.size())?n.size():m.size() );
            for(int i=0;i<smaller;i++)
            {
                result.push_back(n[i]+m[i]+carry);
                if(result[i]>=10)
                {
                    result[i]-=10;
                    carry=1;
                }
                else
                {
                    carry=0;
                }
            }
            int bigger=n.size();
            bool remaining=false;
            if(smaller == n.size()) {bigger=m.size(); remaining=true;}
            for(int i=smaller;i<bigger;i++)
            {
                result.push_back( ((remaining)?m[i]:n[i])+carry );
                if(result[i]>=10)
                {
                    result[i]-=10;
                    carry=1;
                }
                else
                {
                    carry=0;
                }
            }
            if(carry==1) result.push_back(1);
        }
        else if(op=='*')
        {
            //for multiplication;   
        }
        return result;
    }






};
int main()
{
    return 0;
}
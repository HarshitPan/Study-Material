#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'minimumDistances' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY a as parameter.
 */

int minimumDistances(vector<int> a) {
    int dist=0;
    vector<int> values;
    for(int i=0;i<a.size();i++)
    {
        bool check=false;
        for(int j=0;j<values.size();j++) 
        {
            if(a[i]==values[j]) 
            {
                check=true;
                break;
            }
        }
        if(check) continue;
        vector<int> indices;
        indices.push_back(i);
        for(int j=i+1;j<a.size();j++)
        {
            if(a[j]==a[i])
            {
                indices.push_back(j);
            }
        }
        if(indices.size()>1 && dist==0) dist=indices[1]-indices[0];
        for(int j=1;j<indices.size();j++)
        {
            if(a[j-1]-a[j]>dist) dist=indices[j]-indices[j-1];
        }
        values.push_back(i);
    }
    cout<<dist;
    if(dist==0) return -1;
    return dist;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string a_temp_temp;
    getline(cin, a_temp_temp);

    vector<string> a_temp = split(rtrim(a_temp_temp));

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        int a_item = stoi(a_temp[i]);

        a[i] = a_item;
    }

    int result = minimumDistances(a);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}

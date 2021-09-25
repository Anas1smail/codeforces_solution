#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

int main()
{
    string s;
    int n,sum=0;
    vector<string>v;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        v.push_back(s);
    }
    for(int i=0;i<v.size();i++)
    {
                   string x = v[i];
        if(x.size()>10){
               for(int i=1;i<x.size()-1;i++)
               {
                   sum=sum+1;
               }
               cout<<x[0]<<;<<x[x.size()-1]<<" "<<endl;
               sum=0;
            }
        else{
            cout<<x<<endl;
        }

    }


    return 0;
}

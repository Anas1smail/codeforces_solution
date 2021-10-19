#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main()
{

    string name ,capital,small;
    int sum=0,low;

    cin>>name;

    for(int i=0;i<name.size();i++){

        if(isupper(name[i])){
            sum++;

        }
    }

    low = name.size() - sum;

    if(low < sum){
        for(int i=0;i<name.size();i++){
            capital+=toupper(name[i]);

        }
         cout<<capital;

    }
    else
    {
       for(int i=0;i<name.size();i++){
           small+=tolower(name[i]);
       }
       cout<< small;


    }



    return 0;
}

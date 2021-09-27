#include <iostream>

using namespace std;

int main()
{
    bool a,b,c;
    int n;
    int sum=0;

    cin>>n;
    for(int i=1;i<n+1;i++){
        cin>>a>>b>>c;
    if(a == 1 && b==1&&c==1 || a ==1 &&b==1 && c==0 ||a==1&& b==0 &&c==1 || a==0&&b==1&&c==1){
        sum++;


    }


    }
    cout<<sum;



    return 0;
}

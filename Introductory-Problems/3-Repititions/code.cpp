#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int maxi = INT16_MIN;
    int count = 0 , i = 0;
    while(s[i]!='\0'){
        if(s[i] == s[i+1]){
            count++;
        }
        else{
            count = 0;
        }
        maxi = max(count,maxi);
        i++;
    }
    cout<<maxi+1<<endl;
}
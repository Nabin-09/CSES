#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    char maxi ;
    int mini = INT8_MIN;
    int count = 0;
    for(int i = 0 ; s[i]!='\0' ; i++){
        if(s[i] == s[i+1]){
            count++;
            if(count>=mini){
                maxi = s[i];
            }
            mini = count;
        }
    }
    cout<<maxi;
    return 0;
}

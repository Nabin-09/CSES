/* 
Naive approach is to find sum till n numbers and then find the sum of all the numbers submitted and then subtract the 
sum of n numbers and sum of given given terms which ill ulitmately give us the missing number*/
/*Best approach will be to use hashing and frequency array . */
#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long
int main()
{
    ll n ;
    cin>>n;
    int a [n-1];
    int hash[200001] = {0};
    for(int i = 0 ; i < n - 1 ; i++){
        cin>>a[i];
        hash[a[i]]++;
    }
    sort(a , a+n);
    for(int i = 1; i < 200001 ; i++){
        if(hash[i] == 0){
            cout<<i;
            break;
        }
    }
    return 0;
}

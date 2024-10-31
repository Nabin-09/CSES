#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1 , 2 , 3 , 3 ,3,3,3,33,3,3,3,33,33,3,3, 4 , 2 , 8};
    map<int , int> mpp;
    for(int num : arr){
        mpp[num]++;
    }
    for(const auto& pair : mpp){
        cout << "Element "<<pair.first<<" occurs "<<pair.second<<" times.\n";
    }
    return 0;
}
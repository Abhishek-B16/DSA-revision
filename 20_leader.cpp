#include <bits/stdc++.h> 
vector<int> findLeaders(vector<int> &elements, int n) {
    vector<int> ans;
    int maxi = INT_MIN;
    for(int i=n-1 ; i>=0 ; i--){
        if(elements[i]>maxi){
            ans.push_back(elements[i]);
        }
        maxi=max(maxi,elements[i]);
    }

    reverse(ans.begin(),ans.end());  //if they want as it is order where they are like in original array
    return ans;
}

//this is optimal solution
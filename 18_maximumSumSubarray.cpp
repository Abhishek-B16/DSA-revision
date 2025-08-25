#include<bits/stdc++.h>

using namespace std;

long long MaxSubSum(vector<int> &arr , int n){
    long long maxi= INT_MIN;
    long long sum =0;

    for (int i = 0; i < n; i++)
    {
      sum+=arr[i];
    

    if(sum>maxi){
        maxi= sum;
    }

    if(sum<0){
        sum=0;
    }
}

    return maxi;
    
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int result = MaxSubSum(arr,n);

    cout<<result;

    return 0;
    
}
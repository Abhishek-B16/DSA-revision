#include<bits/stdc++.h> 

using namespace std;

int largestSum0(vector<int> &arr , int n){
    int sum=0;
    int maxi=0;
    unordered_map<int, int> mpp;
    
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum==0){
            maxi=i+1;
        }
        else if(mpp.find(sum)!=mpp.end()){
        maxi = max(maxi,(i-mpp[sum]));
        }
        else{
            mpp[sum]=i;
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

    int result=largestSum0(arr,n);
    cout<<result;
    
}
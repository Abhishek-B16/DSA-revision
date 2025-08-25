// find maimum consecutive ones;
#include<bits/stdc++.h>

using namespace std;


int findConsecutiveOnes(int arr[], int n){
    int maxi=0;
    int cnt=0;

    for (int i = 0; i < n; i++)
    {
        if(arr[i]==1){
            cnt++;
            maxi= max(maxi, cnt);
        }
        else{
            cnt=0;
        }
    }

    return maxi;
    
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<findConsecutiveOnes(arr,n);

    return 0;
}
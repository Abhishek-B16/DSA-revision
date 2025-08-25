// //better approach ;

#include<bits/stdc++.h>

using namespace std;

int LongestSubarr(vector<int> &arr , int n, long long k){
//     map<long long , int> presumMap;
//     long long sum=0;
//     int MaxLength =0;

//     for (int i = 0; i < n; i++)
//     {
//         sum+=arr[i];
//         if(sum==k) {
            
//             MaxLength=max(MaxLength,i+1);
//         }
//         int rem = sum-k;
//         if(presumMap.find(rem)!=presumMap.end()){
//             int length = i-presumMap[rem];
//             MaxLength = max(MaxLength, length);
            
//         }

//         if(presumMap.find(sum)==presumMap.end()){
//             presumMap[sum]=i;
//         }
//     }
//     return MaxLength;
    
// }

// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     int result = LongestSubarr(arr,n,3);

//     cout<<result<<" ";

    
    
    

// }




//Optimal solution;


int left=0;
int right =0;
long long sum=arr[0];
int Maxlength = 0;

while(right<n){
    while(left<=right && sum>k){
        sum-=arr[left];
        left++;
    }

    if(sum==k){
        Maxlength=max(Maxlength, right-left+1);
    }
    right++;
    if(right<n){
        sum+=arr[right];
    }
}
return Maxlength;

}

int main(){
     int n;
     cin>>n;
     vector<int> arr(n);
     for (int i = 0; i < n; i++)
     {
         cin>>arr[i];
     }
     int result = LongestSubarr(arr,n,6);

     cout<<result<<" ";
    }



    // this is optimal solution for longest subarray if it contains only positives and zeroes 

     // tc will be ~O(2n) in worst case;


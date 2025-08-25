//rearrange array element by sign
#include<bits/stdc++.h>

using namespace std;


//brute force approach -->>


  vector<int> RearrangebySign(vector<int>A, int n){
    
  // Define 2 vectors, one for storing positive 
  // and other for negative elements of the array.
  vector<int> pos;
  vector<int> neg;
  
  // Segregate the array into positives and negatives.
  for(int i=0;i<n;i++){
      
      if(A[i]>0) pos.push_back(A[i]);
      else neg.push_back(A[i]);
  }
  
  // Positives on even indices, negatives on odd.
  for(int i=0;i<n/2;i++){
      
      A[2*i] = pos[i];
      A[2*i+1] = neg[i];
  }
  
  
  return A;
    
}



//optimal

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,0);

        int pos=0;
        int neg=1;

        for(int i=0; i<n;i++){
            if(nums[i]<0){
                ans[neg]=nums[i];
                neg+=2;
            }
            else{
                ans[pos]=nums[i];
                pos+=2;
            }
        }

        return ans;
        
    }
};





//second variety



vector<int> rearr(vector<int> &arr , int n){

    vector<int> ans(n,0);
    vector<int> pos;
    vector<int> neg;

    for (int i = 0; i < n; i++)
    {
        if(arr[i]>0) pos.push_back(arr[i]);
        else neg.push_back(arr[i]);
    }

    if(pos.size()>neg.size()){
        for (int i = 0; i < neg.size(); i++)
        {
            ans[2*i]=pos[i];
            ans[2*i+1]=neg[i];

           
        }
        int index= neg.size()*2;
        for (int i = neg.size(); i < pos.size(); i++)
        {
            ans[index]=pos[i];
            index++;
            
        }
    }
        
    else{
         for (int i = 0; i < pos.size(); i++)
        {
            ans[2*i]=pos[i];
            ans[2*i+1]=neg[i];

           
        }
        int index= pos.size()*2;
        for (int i = pos.size(); i < neg.size(); i++)
        {
            ans[index]=neg[i];
            index++;
            
    }
        
    }

    return ans;
    
}
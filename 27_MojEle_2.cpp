class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
    int cnt1=0;
    int cnt2=0;
    int n= nums.size();
    int el1=INT_MIN;
    int el2=INT_MIN;

    for(int i=0;i<n;i++){
        if(cnt1==0 && el2!=nums[i]){
            cnt1=1;
            el1=nums[i];
        }
        else if(cnt2==0 && el1!=nums[i]){
            cnt2=1;
            el2=nums[i];
        }
        else if(el1==nums[i]) cnt1++;
        else if(el2==nums[i]) cnt2++;

        else {cnt1--; cnt2--;}
    } // upto this we are only cancle out terms and there is possibility is that elements could be. 
    


 
    cnt1=0;  // this is where we are actually checking if there count is more than >n/3
    cnt2=0;
    for(int i=0;i<n;i++){

         if(el1==nums[i]) cnt1++;
         if(el2==nums[i]) cnt2++;
    }

    vector<int> ls;
    int mini = ((n/3)+1);
    if(cnt1>=mini) ls.push_back(el1);
    if(cnt2>=mini && el2!=el1) ls.push_back(el2);  // to avoid duplicates ifarray is arr[2,2]


    
return ls;
    
    }
};
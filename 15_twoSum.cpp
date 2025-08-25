#include <bits/stdc++.h>

using namespace std;

vector<int> twoSum(vector<int> &arr, int target, int n)
{

    map<int, int> mpp;

    for (int i = 0; i < n; i++)
    {
        int a = arr[i];
        int more = target - arr[i];
        if (mpp.find(more) != mpp.end())
        {
            return {mpp[more], i};
        }
        mpp[a] = i; // stores every element with index into map
    }
    return {-1, - 1};
}

int main()
{
    int n;
    vector<int> arr(n);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

     vector<int> result = twoSum(arr, 14, n);
     for (int i : result) cout << i << " ";  //This simply loops through the two elements inside result—whatever 
                                             //twoSum() gave back—and prints them one by one. So if twoSum() returned {2, 5}, it prints:


  
}




//optimal approach without using map

string read(int n,vector<int> book, int target){
    int left =0; right = n-1;

    sort(book.begin(), book.end ());

    while(left<right){
        int sum = book[left]+book[right];

        if(sum==target){
            return "YES";
        }
        else if(sum<target){
            left++;
        }
        else right--
    }
    return "NO";
}
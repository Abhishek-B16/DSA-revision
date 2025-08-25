//to check if it is sorted or not

#include<bits/stdc++.h>

using namespace std;


int main(){
    int n;
    cin>>n;
    bool isSorted = true;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    for (int i = 1; i < n; i++)
    {
        if(arr[i]<arr[i-1]){
          
            isSorted= false;
            break;
    }
    }

    if(isSorted){
        cout<<"sorted";
    
    }
    else{
        cout<<"not sorted";
    }

}
//Rotate array by one place;

#include<bits/stdc++.h>

using namespace std;


int rotate(int arr[], int n){
    int temp = arr[0];

    for (int i = 1; i < n; i++)
    {
        arr[i-1]=arr[i];

    }
    arr[n-1]=temp;   // stores at last index
    
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    
    rotate(arr,n);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    

}
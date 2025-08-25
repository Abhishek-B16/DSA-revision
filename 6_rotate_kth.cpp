#include<bits/stdc++.h>

using namespace std;

// void leftrotate(int arr[], int n, int d){
//     d= d%n;
 
//     vector<int> temp(d);
//     for (int i = 0; i < d; i++)            // creates temp array
//     {
//         temp[i]=arr[i];

//     }

//     for (int i = d; i < n; i++)             // shift remaining array by dth places
//     {
//         arr[i-d]=arr[i];
//     }
    
//     for (int i = n-d; i < n; i++)            // rejoins that temp array to original array after rotating
//     {
//         arr[i]=temp[i-(n-d)];

//     }


    
    
// }


void leftrotate(int arr[], int n, int d){
    reverse(arr, arr+d);  // This is called a range of pointers.
                           //arr is a pointer to the first element of the array
                             //- arr + d points to the (d)th element, i.e., the element at index d
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
    
}


//without using STL there is user defined reverse function


// void reverse(int arr[], int start, int end){

//     while(start<=end){
//         int temp = arr[start];
//         arr[start]=arr[end];
//         arr[end]= temp;
//         start++;
//         end--;
//     }
// }



int main(){

    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    leftrotate(arr,n,3);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;

}
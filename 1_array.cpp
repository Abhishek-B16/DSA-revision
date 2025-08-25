// largest element in array;

#include <bits/stdc++.h>

using namespace std;

// void lar(int arr[], int n)
// {
//     int largest = arr[0];
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > largest)
//         {
//             largest = arr[i];
//         }
//     }
//     cout << "largest :" << largest;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     lar(arr, n);

//     return 0;
// }




int largestElement(vector<int> &arr, int n){
    int largest =arr[0];
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    return largest;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];

    }

    int result = largestElement(arr,n);
    cout<<"largest element is:"<<result;

    return 0;
    
}












// this will be brute force approach >>

#include <bits/stdc++.h>
using namespace std;

int largestElement(vector<int>& arr, int n) {
    sort(arr.begin(), arr.end());  // Sort in ascending order
    return arr[n - 1];             // Last element is the largest
}
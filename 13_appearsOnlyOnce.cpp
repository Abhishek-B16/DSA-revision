//brute force approach :
#include <bits/stdc++.h>

using namespace std;

int find(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == num)
            {
                cnt++;
            }
        }
        if (cnt == 1){
            return num;}
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << find(arr, n);

    return 0;
}














//better approach;

//using hashing ;

maxi= arr[0];
for (int i = 0; i < n; i++)
{
    maxi = max(maxi, arr[i]);
}
for (int i = 0; i < n; i++)
{
    hash[arr[i]++];
}
for (int i = 0; i < n; i++)
{
   if(hash[arr[i]]==1){
    return arr[i];
   }
}




//optimal;


int xor=0;
for (int i = 0; i < n; i++)
{
   xor=xor^arr[i];
}

return xor;

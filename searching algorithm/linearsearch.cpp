#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i+1;
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int x;
    cin>>x;
    int ar[n];
    for(int i=0;i<n;i++){
      cin>>ar[i];
    }
    cout<<"Element is at "<<search(ar,n,x);
    return 0;
}
 
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;

    for(int i=0;i<n;i++)
    {
        sort(arr,arr+n);


    }
    cout<<arr[k-1];
}

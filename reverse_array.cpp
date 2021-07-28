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

    cout<<"reversed array is"<<endl;
    int start=0;
    int end1=n-1;
    while(start < end1)
    {
        int temp=arr[start];
        arr[start]=arr[end1];
        arr[end1]=temp;
        start++;
        end1--;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

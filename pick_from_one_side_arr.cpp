#include<iostream>
#include<vector>
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
    int b;
    cin>>b;
    int sum1=0,sum2=0,min1;
    for(int i=0;i<n;i++)
    {
        sum1 +=arr[i];
    }
    int i=0;
    int j=n-b-1;

    for(int k=i;k<=j ;k++)
    {
        sum2 +=arr[k];
    }
    min1=sum2;
    i++;
    j++;
    while(j<=n)
    {
        sum2 +=arr[j] - arr[i-1];
        min1=min(sum2,min1);
        i++;
        j++;
    }
    cout<<(sum1-min1)<<endl;

}

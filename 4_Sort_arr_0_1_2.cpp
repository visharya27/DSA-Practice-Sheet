//Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.

#include<bits/stdc++.h>
using namespace std;


class Solution
{
    public:
    void sort012(int a[], int n)
    {
    int num_0 = 0, num_1 =0, num_2 = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            num_0++;
        }
        else if(a[i]==1)
        {
            num_1++;
        }
        else
        {
            num_2++;
        }
    }
    for(int i=0;i<num_0;i++)
    {
        a[i] = 0;
    }
    for(int i=num_0;i<num_0+num_1;i++)
    {
        a[i]=1;
    }
    for(int i=num_0+num_1;i<num_0+num_1+num_2;i++)
    {
        a[i]=2;
    }
    }
};

int main()
{
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

//Time Complexity: O(n)
//Space Complexity: O(n)

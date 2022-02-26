//Given an array A of size N of integers. Your task is to find the minimum and maximum elements in the array.

//Method-1: Naive Approach (Using Sort function)

#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}

pair<long long, long long> getMinMax(long long a[], int n) {
    sort(a,a+n);
    pair<long long, long long> MinMax;
    MinMax.first = a[0];
    MinMax.second = a[n-1];
    return MinMax;
}
//TIme Complexity: O(nlogn)
//Space Complexity: O(n)

//Method-2: Iterative approach, making n comparisons 
#include<bits/stdc++.h>
using namespace std;

pair<int,int> MinMax(int arr[], int size)
{
    int min=arr[0],max=arr[0];
    pair<int,int> s;
    for(int i=1; i<size; i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    s.first = min;
    s.second = max;
    return s;
}
int main()
{
    int a[6] = {1,2,3,4,5,27};
    cout << MinMax(a,6).first << MinMax(a,6).second;

    return 0;
}
//Time Complexity: O(n)
//Space Complexity: O(n)

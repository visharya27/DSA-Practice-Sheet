//You are given a string s. You need to reverse the string.
//Method - 1: Iterative method:
#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}

string reverseWord(string str){
    
    for(int i=0; i<str.length()/2; i++)
    {
        char temp;
        temp = str[i];
        str[i] = str[str.length()-1-i];
        str[str.length()-1-i] = temp;
    }
    return str;
}
//Time Complexity = O(n)
//Space Complexity = O(n)


//Method-2: Recursive Method:
#include<iostream>
using namespace std;

void Reverse_Array(int arr[], int start, int end)
{
    if(start >= end)
    {
        return;
    }
    else
    {
            int temp;
            temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            return Reverse_Array(arr,start+1,end-1);
    }

}
int main()
{
    int a[5] = {1,2,3,4,5};
    Reverse_Array(a,0,4);
    for(int i=0; i<5; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
//Time Complexity: O(n)
//Space Complexity: O(n)

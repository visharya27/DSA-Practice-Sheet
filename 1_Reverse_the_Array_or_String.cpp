//You are given a string s. You need to reverse the string.

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

//An array contains both positive and negative numbers in random order.
//Rearrange the array elements so that all negative numbers appear before all positive numbers.

#include <iostream>
using namespace std;

int main() 
{
	int A[9] = {1, -3, 5, -7, 9, 0, 4, -2, 8};
	int l=0,r=8,temp;
	while(l<r)
	{
	    
	    if(A[l]<0)
	    {l++;
	        continue;
	    }
	    if(A[r]>=0)
	    {r--;
	        continue;
	    }
	    
	    
	    if(A[l]>=0 || A[r]<0)
	    {
	        temp = A[l];
	        A[l] = A[r];
	        A[r] = temp;
	    }
	}
	for(int i=0; i<8;i++)
	{
	    cout << A[i] <<"\t";
	}
	return 0;
}
//Time Complexity = O(n)
//Space Complexity = O(n)

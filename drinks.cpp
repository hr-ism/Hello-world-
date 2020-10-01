#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int arr[n],arr1[n];
	for (int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	sort(arr,arr+n);

	for (int i=0;i<n-1; )
	{
		while(arr[i+1] == arr[i])
		{
			count++;
			i++;
		}
		

		if(arr[i+1] != arr[i])
		{
			if (count > 0)
			{
				arr1[l] = count;
				l++;
			}
			
			arr1[l] = 1;
			l++;
			count = 0;
			i++;
		}
	}

	sort(arr1,arr1+l);

	for(int i=l-1;l>=0;k--)
	{
		if(arr1[i]%2 == 0)
		{

		}
	}
}
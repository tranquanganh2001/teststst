#include<bits/stdc++.h>
using namespace std;
///11 2 3 4 6 6 7
//a[i] = true
int main()
{
	
   int n;
   cin>>n;
   int a[n];
  bool dp[n];
  for(int  i = 0 ; i<n ; i++)
  {
  	dp[i] = false;
  }
//   for(int i = 0 ; i<n ; n++)
//   {
//   	 cin>>a[i];
////   	 dp[i] = true;
//	} 
	for(int i = 0 ; i<n ; i++)
	{
		for(int j = 0 ; j<n ; j++)
		{
			if(a[i]>a[j])
			{ 
			int b;
			b=a[i];
			a[j] = b;
			a[i] = a[j];
			}
		}

	}
	for(int i = 0 ; i<n ; i++)
	{
		cout<<a[i];
	}
}

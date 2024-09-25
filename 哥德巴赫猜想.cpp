#include<bits/stdc++.h>
using namespace std;

bool prime(int x)
{
	if(x<2) return 0;
	for(int i=2;i<=x/i;i++)
	  if(x%i==0)
	   return 0;
	   return 1;
}
int main()
{
	for(int i=4;i<=10000;i+=2)
	for(int j=2;j<=i/2;j++)
	 if(prime(j)&&prime(i-j))
	 {
	 	cout<<i<<"="<<j<<"+"<<i-j<<endl;
	 	break;
	  }
	  return 0; 
}

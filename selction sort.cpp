#include<iostream>
using namespace std;
int main()
{
	int i,j,min,loc,temp;
	int a[5]={5,7,2,4,1};
	int length;
	int p,q,t;
	for( i=0; i<(length-1); i++)
	{
		min=a[i];
		loc=i;
		for(j=i+1; j<length; j++)
		{
			if(a[j]<min)
			{
				min=a[j];
				loc=j;
			}
			
		}
		temp=a[i];
		a[i]=a[loc];
		a[loc]=temp;
	}
	for(int i=0; i<5; i++)
	{
		cout<<a[i];
	}
}

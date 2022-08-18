#include<stdio.h>
int main()
{
	int arr[]={2,3,4,5,6,7};
	int len=sizeof(arr)/sizeof(int);
	for(int i=0;i<len;i++)
	{
		int n=arr[i];
		int f=1;
		while(n>0)
		{
			f*=n;
			n--;
		}
			printf("factorial of %d is : %d\n",arr[i],f);
	}
	
	return 0;
}

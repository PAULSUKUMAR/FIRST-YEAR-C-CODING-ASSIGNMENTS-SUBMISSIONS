#include<stdio.h>
int main()
{
	int arr[]={10,20,30,40,50,60,40};
	int len=sizeof(arr)/sizeof(int);
	int count;
	for(int i=0;i<len;i++)
	{
		for(int j=i+1;j<len;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
			}
		}
	}
	if(count==0)
	{
		printf("UNIQUE");
	}
	else
	{
		printf("DUPLICATE");
	}
	return 0;
}

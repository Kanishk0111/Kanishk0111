#include <stdio.h>
int main(){
	int a[5],i,j,low=0,high=4,mid,n,temp,f=0;
	printf("Enter 5 values");
	for(i=0;i<5;i++)
	{printf("Enter value at %d position of an array",i);
	scanf("%d",&a[i]);
	}
	printf("before sorting\n");
	for(i=0;i<5;i++)
	{printf("%d\t",a[i]);}
	printf("\n");
	for(i=0;i<4;i++)
		for(j=(i+1);j<4;j++)
		{if(a[i]>a[j])
			{temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			}
		}
printf("\n");
printf("after sorting\n");
	for(i=0;i<5;i++)
	{printf("%d\t",a[i]);}
printf("\nEnter value you want to find:-");
scanf("%d",&n);
while(low<=high)
	{mid=(high+low)/2;
	if(a[mid]==n)
		{f=1;
		break;}
	else if(a[mid]<n)
		{low=mid+1;}	
	else
	{high=mid-1;}	
	}
if(f==1)
{printf("value founded, %d exist.",n);}
else
{printf("value %d not exist.",n);}
return(0);}
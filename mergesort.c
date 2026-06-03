//merge sort
#include<stdio.h>
int mergesort(int a[],int l,int h);
int merge(int a[],int l,int mid,int h);

int mergesort(int a[],int l,int h)
{
	int mid;
	if(l<h)
	{
		mid=(l+h)/2;
		mergesort(a,l,mid);
		mergesort(a,mid+1,h);
		merge(a,l,mid,h);
	}
	
}

int merge(int a[],int l,int mid,int h)
{
	int i=l;
	int k=l;
	int b[20];
	int j=mid+1;
	while(i<=mid && j<=h)
	{
		if(a[i]<a[j])
		{
		b[k]=a[i];
		k++;
		i++;
		}
		else{
			b[k]=a[j];
			k++;
			j++;
		}
	}
	while(i<=mid)
	{
		b[k]=a[i];
		k++;
		i++;
	}
	while(j<=h)
	{
		b[k]=a[j];
		k++;
		j++;
	}
	for(i=l;i<k;i++)
	{
		a[i]=b[i];
	}
}

int main ()
{
	int i,n;
	printf("Enter n value:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	mergesort(a,0,n-1);
	printf("After merge sort:");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
	
}

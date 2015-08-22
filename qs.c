#include<stdio.h>
#include<stdlib.h>

void qs(int *,int,int);
void swap(int *,int,int);

int main()
{
	int *a,n,i,beg,end,time1,time2,time3;
	struct timeval t1,t2;
	printf("how many no. u want to sort\n");
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof (int));
	printf("enter no.s\n");
	for(i=0;i<n;i++)
	{
		//scanf("%d",&a[i]);
		a[i]=rand()%n;
		printf("%d\n",a[i]);
	}	
	beg=0;
	end=n-1;
	qs(a,beg,end);	
	printf("time before sorting\n");
	gettimeofday(&t1,NULL);
	time1=t1.tv_sec*1000000L+t1.tv_usec;
	printf("%d\n",time1);
	printf("after sorting\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	gettimeofday(&t2,NULL);
	time2=t2.tv_sec*1000000L+t2.tv_usec;
	printf("time after sorting\n");
	printf("%d\n",time2);
	time3=time2-time1;
	printf("time taken in sorting\n");
	printf("%d\n",time3);
return 0;
}

void qs(int a[],int beg,int end)
{
	if(beg>=end)
		return;
	int pivot=beg;
	int j;
	int elem=beg;
	int r=rand()%(end-beg)+beg;
	printf("value of r is %d\n",r);	
	swap(a,beg,r);
	for(j=beg+1;j<=end;j++)
	{
		if(a[j]<a[pivot])
		{
			swap(a,++elem,j);
		}
	}
	swap(a,elem,pivot);
	qs(a,beg,elem-1);
	qs(a,elem+1,end);
}
void swap(int a[],int i,int j)
{
	int temp;
	temp=a[i];
	a[i]=a[j];
	a[j]=temp;
}

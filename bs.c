#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,j,*a,n,temp,time1,time2,time3;
	printf("enter no. of elements u want to sort\n");
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof (int));
	printf("enter elements\n");
	for(i=0;i<n;i++)
	{
		a[i]=rand()%n;
		printf("%d\n",a[i]);
	}
	//scanf("%d",&a[i]);
	struct timeval t1,t2;
	printf("time before sorting\n");
	gettimeofday(&t1,NULL);
	time1=t1.tv_sec*1000000L+t1.tv_usec;
	printf("%d\n",time1);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)	
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;		
			}		
		}
		
	}
	printf("after sorting\n");
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
	gettimeofday(&t2,NULL);
	time2=t2.tv_sec*1000000L+t2.tv_usec;
	printf("time after sorting\n");
	printf("%d\n",time2);
	time3=time2-time1;
	printf("time taken in sorting\n");
	printf("%d\n",time3);
}

#include<stdio.h>
#include<stdlib.h>

void ms(int *,int *,int,int);
void merge(int *,int *,int,int,int);

int main()
{
	int *a,*aux,n,i,time1,time2,time3;
	struct timeval t1,t2;
	printf("enter no. of elements u want to sort\n");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	aux=(int*)malloc(n*sizeof(int));
	printf("enter elements\n");
	for(i=0;i<n;i++)
	{
		a[i]=rand()%n;
		printf("%d\n",a[i]);
		//scanf("%d",&a[i]);
	}
	printf("time before sorting\n");
	gettimeofday(&t1,NULL);
	time1=t1.tv_sec*1000000L+t1.tv_usec;
	printf("%d\n",time1);
	ms(a,aux,0,n-1);	
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
	printf("after sorting\n");
}
void ms(int *a,int *aux,int beg,int end)
{
	if(beg>=end)
		return;
	int mid=(beg+end)/2;
	ms(a,aux,beg,mid);
	ms(a,aux,mid+1,end);
	merge(a,aux,beg,mid,end);	 
}

void merge(int *a,int *aux,int beg,int mid,int end)    
{
	int i=beg;
	int j=mid+1;
	int z;	
	for(z=beg;z<=end;z++)
	{
		if(i>mid)
			aux[z]=a[j++];
		else if(j>end)
			aux[z]=a[i++];
		else if(a[i]>a[j])
			aux[z]=a[j++];
		else
			aux[z]=a[i++];					
	}
	for(z=beg;z<=end;z++)
	{
		a[z]=aux[z];
	}
}

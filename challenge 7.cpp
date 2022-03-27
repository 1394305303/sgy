#include<stdio.h>
int main(void)
{
	int n,m,i,j;
	int a[1000]={0},b[1000]={0},c[1000]={0};
	double s[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf %d %d\n",&s[i],&a[i],&b[i]);
	}
	scanf("%d",&m);
	for(j=0;j<m;j++)
	{
		scanf("%d",&c[j]);
	}
	for(j=0;j<m;j++)
	{
		for(i=0;i<n;i++)
		{
			if(a[i]==c[j])
			{
				printf("%.0lf %d\n",s[i],b[i]);
			}
		}
	}
	return 0; 
}


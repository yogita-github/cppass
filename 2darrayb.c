#include<stdio.h>
int main()
{
	int i,j;
	int arr[2][3]={{1,2,3},{4,5,6}};
	printf("%d",arr[0][2]);
}	for(i=0;i<2;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("arr[%d][%d]=%d\n",i,j,arr[i][j]);
		}
	}

for(i=0;i<2;i++)
	{
		printf("\n");
		for (j=0;j<3;j++)
		{
			printf("%d\t",arr[i][j]);
		}
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int i,j;
	int arr[2][3]={{1,2,3},{4,5,6}};
	for(i=0;i<2;i++)
	{
		printf("\n");
		for (j=0;j<3;j++)
		{
			printf("%d\t",i,j,arr[i][j]);
		}
	}
	return 0;
}

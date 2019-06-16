#include<stdio.h>
#include<string.h>
void main()
{
        char set1[50][20],set2[50][20],set3[50][20],set4[50][20],i,j;
	int n1,n2,counter=0,flag;
	printf("Enter the number of elements of the first set\n");
	scanf("%d",&n1);
	printf("Enter the elements of the first set A\n");
	fflush(stdin);
	for(i=0;i<n1;i++)
	{	
		scanf("%s",set1[i]);
	}
	printf("Enter the number of elements of the second set\n");
	scanf("%d",&n2);	
	printf("Enter the elements of the second set B\n");
	for(i=0;i<n2;i++)
	{
		scanf("%s",set2[i]);		
	}
	printf("\nThe first set is\n\nA={");
	for(i=0;i<n1;i++)
	{
		if(i!=(n1-1))
			printf("%s, ",set1[i]);
		else
			printf("%s}",set1[i]);
	}
	printf("\n\nThe second set is\n\nB={");
	for(i=0;i<n2;i++)
	{	
		if(i!=(n2-1))
			printf("%s, ",set2[i]);
		else
			printf("%s}",set2[i]);
	}
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			flag=0;
			if(strcmp(set1[i],set2[j])==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			strcpy(set3[counter],set1[i]);
			counter++;
		}
	}
	for(i=0;i<n2;i++)
	{
		for(j=0;j<n1;j++)
		{
			flag=0;
			if(strcmp(set2[i],set1[j])==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			strcpy(set3[counter],set2[i]);
			counter++;
		}
	}
	printf("\n\nThe symmetric difference of the sets is\n");
	printf("\n{");
	for(i=0;i<counter;i++)
	{	
		if(i!=(counter-1))
			printf("%s, ",set3[i]);
		else
			printf("%s}",set3[i]);
	}	
}

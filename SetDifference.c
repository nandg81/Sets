//Program to implement set difference operation
#include<stdio.h>
#include<string.h>
void main()
{
        char set1[50][20],set2[50][20],set3[50][20],set4[50][20],i,j;
	int n1,n2,counter1=0,counter2=0,flag;//n1,n2 for no of elements in sets, counters for no of elements in resulting sets
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
			printf("%s, ",set1[i]);//if middle element, print "," after it
		else
			printf("%s}",set1[i]);//if last element, print "} after it
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
			if(strcmp(set1[i],set2[j])==0)//if the element is common to both sets
			{
				flag=1;
				break;
			}
		}
		if(flag==0)//if the element belongs to only the first set
		{
			strcpy(set3[counter1],set1[i]);
			counter1++;
		}
	}
	for(i=0;i<n2;i++)
	{
		for(j=0;j<n1;j++)
		{
			flag=0;
			if(strcmp(set2[i],set1[j])==0)//if the element is common to both sets
			{
				flag=1;
				break;
			}
		}
		if(flag==0)//if the element belongs to only the second set
		{
			strcpy(set4[counter2],set2[i]);
			counter2++;
		}
	}
	printf("\n\nThe difference of the sets is\n");
	if(counter1!=0)
	{
		printf("\nA-B={");
		for(i=0;i<counter1;i++)
		{	
			if(i!=(counter1-1))
				printf("%s, ",set3[i]);
			else
				printf("%s}",set3[i]);
		}
	}
	else
	{
		printf("\nA-B equates to a null-set {}\n");
	}
	if(counter2!=0)
	{
		printf("\n\nB-A={");
		for(i=0;i<counter2;i++)
		{	
			if(i!=(counter2-1))
				printf("%s, ",set4[i]);
			else
				printf("%s}",set4[i]);
		}
	}
	else
	{
		printf("\nB-A equates to a null-set {}\n");
	}
}

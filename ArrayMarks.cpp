# include <stdio.h>
int main()
{
	int a[100],b[100],length = 6,end,i,j;
	printf("Enter the marks of the 6 subjects:");	
	for (i=1;i<=length;i++)
	{
		printf("Enter marks of %d:",i);
		scanf("%d",&a[i]);
	}
	
	printf("\nThe marks are:");
	for (i=0;a[i]!='\0';i++)
	{
		printf("\n%d ",a[i]);
    }
	return 0; 
}

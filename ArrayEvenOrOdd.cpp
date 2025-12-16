# include <stdio.h>
int main()
{
	int a[100],b[100],length,end,i,j;
	printf("Enter the length of the array");
	scanf("%d",&length);
	
	printf("Enter the array:");
	for (i=0;i<length;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nThe array is:");
	for (i=0;a[i]!='\0';i++)
	{
		if (a[i]/2 == 0) {	
		printf("\nEven Numbers: %d",a[i]);
    } 
    else if (a[i]/2!= 0)
	printf("\nOdd Numbers: %d",a[i]);
}
	return 0; 
}

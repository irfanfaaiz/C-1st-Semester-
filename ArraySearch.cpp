# include <stdio.h>
int main()
{
	int a[100],length,key,i,j;
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
		printf("%d ",a[i]);
    }
    
    printf("\nEnter the target element:");
    scanf("%d",&key);
    
    for (i=0;i<length;i++)
	{
    if (key == a[i])
    {
    	printf("%d",i);
	}

	}
	return 0; 
}

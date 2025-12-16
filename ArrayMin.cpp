# include <stdio.h>
int main()
{
	int a[100],length,min,i,j;
	printf("Enter the length of the array");
	scanf("%d",&length);
	
	printf("Enter the array:");
	for (i=0;i<length;i++)
	{
		scanf("%d",&a[i]);
	}
	
	
	for (i=0;a[i]!='\0';i++)
	{
		min = a[i];
		if (min > a[i+1])
		min = a[i+1];
}
  printf("The maximum number is %d",min);
	return 0; 
}

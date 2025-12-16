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
	min = a[0];
	
	for (i=0;a[i]!='\0';i++)
	{
		if (min < a[i+1])
		min = a[i+1];
}
  printf("The maximum number is %d",min);
	return 0; 
}

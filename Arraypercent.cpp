 # include <stdio.h>
int main()
{
	int a[100],b[100],length,sum = 0,i,j;
	float per;
	printf("Enter the marks of the n subjects \n Enter n:");	
	scanf("%d",&length);
	for (i=1;i<=length;i++)
	{
		printf("Enter marks of %d:",i);
		scanf("%d",&a[i]);
		sum = sum + a[i];
	}
	
	printf("\nThe marks are:");
	for (i=0;a[i]!='\0';i++)
	{
		printf("\n%d ",a[i]);
    }
    per = ((sum/length)*100);
    printf("\nthe sum is %d",sum);
    printf("\nthe per is %f",per);

	return 0; 
}

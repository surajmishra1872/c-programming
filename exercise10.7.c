/*
wap to arrange elements of array in assending order
Void arrangeArrya(int arr[])
*/
void arrangeArrya(int arr[])
{   
	int i,j,temp;
	for(i=0;i<=9;i++)
	{
		for(j=i+1;j<=9;j++)
		{
			if(arr[j]<arr[i])
			{
			temp=arr[j];
			arr[j]=arr[i];
			arr[i]=temp;	
			}
		}
	}
	printf("Array is ascending oeder is:\n");
	for(i=0;i<10;i++)
	{
		printf("%d\n",arr[i]);
	}
}
void main()
{
	int arr[10]={1,3,4,2,7,6,5,8,9,10};
	arrangeArrya(arr);
	
}

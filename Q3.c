// C Program to Insert an element
// at a specific position in an Array

#include <stdio.h>

void delete(int arr[],int n)
{
    int pos;
    printf("Enter the position:");
    scanf("%d", &pos);

    //if position is out of bound, stop
    if(pos<1 || pos>n)   return;
   
    //moving all number to one right side from given position till end number
    for (int i = pos - 1 ; i < n - 1 ; i++ ) 
    	arr[i] = arr[i+1];   
     
    n--;	//array size will decrease by one by insertion
    
    printf("Array after deletion: ");
    
    for (int i = 0; i < n; i++)
    {
       printf("%d ", arr[i]);
    } 

    printf("\n");      
    
    return;
}

void insert(int arr[],int n)
{
    	int val,pos;	//2 variables to get value and position

    	printf("Enter the position: ");
    	scanf("%d",&pos);

	//if input is out of bound, stop
    	if(pos<1 || pos>n+1)   return;
    	printf("Enter the value: ");
    	scanf("%d",&val);
    
    	n++;	//array size will increase by one by insertion

	//moving all number to one right side from given position till end number
	for (int i = n - 1; i >= pos; i--)
		arr[i] = arr[i - 1];

	//add number to given position
	arr[pos - 1] = val;

	printf("Array after insertion: ");
	
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	
	printf("\n");
	return;	
}
    

int main()
{
	int arr[10];
	int n = 10,a;

	//initialize array with ten values
	for (int i = 0; i < n; i++)
		arr[i] = i + 1;

    	printf("Original array: ");
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
	
	printf("Choose any from below\n1:Insert\n2:Delete\n");
	scanf("%d",&a);
	
	if(a==1)    insert(arr,n);	//inserting function
	else if(a==2)   delete(arr,n);	//deleting function

	return 0;
}

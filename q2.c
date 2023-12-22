/* Write a Program to swap two variables using Pointers.
For example,
Input:
Enter the value of x: 5
Enter the value of y: 3

Output:
Before swapping:
x: 5
y: 3

After swapping:
x: 3
y: 5*/
#include<stdio.h>
main(){
	
	int x,y;
	printf("Enter the value of X: ");//1
	scanf("%d",&x);
	printf("Enter the value of Y: ");//2
	scanf("%d",&y);
	
	printf("Before swapping:\n");
	printf("x=%d ",x);
	printf("y=%d\n",y);
	
	int *p,*q;
	p=&x;
	q=&y;
	
	*p=*p+*q;
	*q=*p-*q;
	*p=*p-*q;
	
	printf("After swapping:\n");
	printf("x=%d ",*p);
	printf("y=%d",*q);
	
		
}

//Write a Program to find the square of each element of a given 1D array using a Pointer.
/*Enter the array's size: 5

Enter array's elements:
a[0] = 2
a[1] = 4
a[2] = 1
a[3] = 3
a[4] = 7

Output:
Square of each element:
4, 16, 1, 9, 49
*/
#include<stdio.h>
main(){
	
	int n,i;
	printf("Enter array's size:");
	scanf("%d",&n);
	
	int a[n],ans[n];
	for(i=0;i<n;i++){
		printf("Enter a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	
	int *ptr;
	ptr=&a;
	
	for(i=0;i<n;i++){
		ans[i]= *(ptr+i) * *(ptr+i);
	}
	
	printf("Square of each element:\n");
	for(i=0;i<n;i++){
		printf("%d\n",ans[i]);
	}
}

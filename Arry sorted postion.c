
	#include <stdio.h>

	void main()
  {
      int arr1[100], i, n, p, x;

      printf("input the size of array : ");
      scanf("%d", &n);

   
      printf("enter elements of arry  ");
      for (i = 0; i < n; i++){
      scanf("%d", &arr1[i]);
    }

   
      printf("enter value to  add elemnt : ");
      scanf("%d", &x);
      printf("enter post  value to be insert :");
      scanf("%d", &p);

    	 printf("the arry before sorted :\n");
       for (i = 0; i < n; i++)
       printf("%d ", arr1[i]);

   
       for (i = n; i >= p; i--)
       arr1[i] = arr1[i - 1];

   	 arr1[p - 1] = x;

    	printf("\nafter insert  the element \n");
      for (i = 0; i <= n; i++)
      printf("%d ", arr1[i]);
      
	printf("\n\n");
}


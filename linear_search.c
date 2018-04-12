//include the stdio.h library
#include<stdio.h>
void main()
{
    int i,n,a[20],e;    //initalise the array and decalre the variables needed.
    printf("                               ***********linear search********              \n");
    printf("enter the size of array\n");  //mention the size of array.
    scanf("%d",&n);
    printf("enter the values of array\n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);     //getting the array values from user 
    }
    printf("enter the element to search\n");  //enter the element to be searched
    scanf("%d",&e);
    for(i=1;i<=n;i++)
    {
        if(a[i]==e)   //if condition to check whether element is present in the array or not
        {
            printf("%d element found at %d\n",e,i);
            break;                                  
        }
    }
printf("%d element not found in the array\n",e);
    
}
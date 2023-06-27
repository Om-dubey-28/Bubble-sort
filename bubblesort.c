#include<stdio.h>
void main ()
{


    int a[20],n,i,j,temp;
    printf("Enter the total no. of elements ");
    scanf("%d",&n);
   //input array
    for(i=0;i<n;i++)
    {
        printf("Enter element %d ",i+1);
        scanf("%d",&a[i]);
    }
    printf("display unsorted array\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t ",a[i]);

    }
    for (i=0; i<n-1;i++)
    {
        for(j=0; j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf(" \n sorted array\n");
    for( i=0; i<n;i++)
    {
        printf("%d\t", a[i]);

    }
}

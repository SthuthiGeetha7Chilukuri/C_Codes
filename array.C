//Print duplicates in an array

#include<stdio.h>
int main()
{
    int array[20], i, j, n;
    printf("Enter array size");
    scanf("%d",&n);
     printf("Enter array elements\n");
     
     for(i=0;i<n;i++)
     {
        scanf("%d",&array[i]);
     }
     printf("The duplicate elements in an array are: \n");
     
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(array[i]==array[j])
                {
                    printf("%d\t",array[j]);
                }
            }
        }

}
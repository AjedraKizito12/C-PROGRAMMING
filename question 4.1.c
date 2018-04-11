
#include<stdio.h>

int*addarray(int array1[],int array2[],int SIZE);
main()
{
    int array1[]={2,5,3,22,6};
    int array2[]={13,143,11,10,121};

    int*array3= addarrays(array1,array2,5);
    for(int i=0;<5;i++
    {
        printf("%d\n",array3[i]);

    }

}

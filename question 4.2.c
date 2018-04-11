
#include<stdio.h>

int*addarrays(int array1[],int array2[],int SIZE);
main()
{
  int*addarrays(int array1[],int array2[],int length)
  {
    int*destination_array=malloc(length*sizeof(int));
    for(i=0;<length;i++){
        destination_array[i]=array1[i]+array2[i];
      }
      return destination_array
  }
  }

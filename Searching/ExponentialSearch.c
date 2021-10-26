#include <stdlib.h>
#include <stdio.h>
#include "RecursiveBinarySearch.c"

//getting the minimum value
int min(int a,int b){
    if(a>b){
        return b;
    }else{
        return a;
    }
}
void exponentialSearch(int array,int size,int element){
    if(array[0]==element){
        printf("Element is in 0th index");
        exit(1)
    }else {
        while(i<size && array[i]<=element){
            i*=2;
        }
        int result= recursiveBinarySearch(array,i/2,min(i,size-1),element);
        if(result==-1){
            printf("No such element found in array");
        }else{
            printf("Element is in %d th index",result);
        }
    }
}
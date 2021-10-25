#include <stdio.h>
#define max 10

void binarySearch(int element){
    int array[max]={10,32,35,45,66,76,81,83,87,90};
    int start=0;
    int end=max-1;
    int middle=(start+end)/2;
    while(element!=array[middle]&&start<=end){
        if(element>array[middle]){
            start=middle+1;
        }else{
            end=middle-1;
        }
        middle=(start+end)/2;
    }
    if(element==array[middle]){
        printf("%d found at position %d.",element,middle+1);
    }
    if(start>end){
        printf("not found");
    }
}

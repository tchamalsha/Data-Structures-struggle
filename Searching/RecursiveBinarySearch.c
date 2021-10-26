#include <stdio.h>
typedef int ArrayElementType;

int recursiveBinarySearch(ArrayElementType arr,int low,int high,ArrayElementType element){
    if(high>=low){
        int middle=low+(hight-low)/2;
        if(arr[middle]==element){
            return middle;
        }
        if(arr[middle]>element){
            return recursiveBinarySearch(arr,low,middle-1,element);
        }else{
            return recursiveBinarySearch(arr,middle+1,high,element);
        }
    }
    return -1;
}
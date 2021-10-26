#include <stdlib.h>
#include <stdio.h>

int interpolationSearch(int array,int size,int element){
    int low=0,index;
    int high=size-1;
    while(array[low]<=element && array[high]>=element && low<=high){
        if(low==high){
            if(low==element)
                return low;
            return -1;
        }else{
            index=((element-array[low])*(high-low))/(array[high]-array[low]);
            if(array[index]==element){
                return index;
            }else if(array[index]>element){
                high=index-1;
            }else{
                low=index+1;
            }
        }
    }
    return -1;
}
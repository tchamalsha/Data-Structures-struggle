#include <stdio.h>

void linearSearch(int element){
    int array[5]= {2,4,10,7,9};
    int found=0;
    for(int i=0;i<5;i++){
        if(array[i]==element){
            printf("%dth element is in %d th position.",element,i+1);
            found=1;
            exit(1);
        }
    }
    if(found==0){
        printf("%d not found in the array",element);
    }
}

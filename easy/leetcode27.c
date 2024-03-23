#include <stdio.h>
#include <stdlib.h>

int removeElement(int* nums, int numsSize, int val) {
    int* result = (int*)malloc(sizeof(int)*(numsSize+1));
    int i,j = 0;
    for(i = 0; i< numsSize; i++){
        if(nums[i] != val){
            result[j] = nums[i];
            j++;
        }
    }
    for(i = 0; i< numsSize; i++){
        nums[i] = result[i];
    }
    free(result);
    return j;
}

int main(void){
    
    return 0;
}

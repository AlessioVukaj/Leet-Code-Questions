#include <stdlib.h>
#include <stdio.h>

int cmpfunc(const void *a, const void *b)
{
    return(*(int*)a - *(int*)b);
}

int largestPerimeter(int* nums, int numsSize){
    qsort(nums, numsSize, sizeof(int),cmpfunc);
    for(int i=numsSize-3;i>=0;i--){
        if(nums[i]+nums[i+1]>nums[i+2])
            return nums[i+2]+nums[i+1]+nums[i];
    }
return 0;
}
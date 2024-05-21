/*
1. Two Sum
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.
 

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]
 

Constraints:

2 <= nums.length <= 104
-109 <= nums[i] <= 109
-109 <= target <= 109
Only one valid answer exists.

Hint 1
A really brute force way would be to search for all possible pairs of numbers but that would be too slow. Again, it's best to try out brute force solutions for just for completeness. It is from these brute force solutions that you can come up with optimizations.

*/

#include<stdio.h>

void twosum(int nums[], int size, int target){
    int i,j;

    printf("\nInput : nums[%d] : [",size); for(i=0;i<size;i++) printf("%d ,",nums[i]); printf("\b\b]");
    printf(", Target : %d",target);

    for(i=0;i<size-1;i++){
        for(j=i+1;j<size;j++){
            if((nums[i]+nums[j])==target){
                printf("\nOutput : [ %d, %d]\n\n\n",i,j);
                break;
            }
        }
    }
}

void main(){
    int nums[104],target,size;

    printf("Enter how many number u want to Enter : ");
    scanf("%d",&size);

    if(size<2 || size>104){
        printf("Enter valid Input Between 2 to 104 !!!!");
    }

    for(int i=0;i<size;i++){
        printf("Element %d :",i);
        scanf("%d",&nums[i]);
    }

    for(int i=0;i<size;i++){
      if(nums[i]<-109 || nums[i]>109){
            break;
            printf("Enter a valid Number between -109 to 109 !!");
        }  
    }
     
    printf("Enter Target number : ");
    scanf("%d",&target);
    if(target<-109 || target>109){
        printf("Enter a valid Target number !!!");
    }

    twosum(nums,size,target);
}
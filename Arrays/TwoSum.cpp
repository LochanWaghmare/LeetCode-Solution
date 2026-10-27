/*

#include<stdio.h>
int main (){
    int i, j, target, value, found=0;
    printf("enter the number of elements");
    scanf("%d",& value);
    int num[value];
    printf("enter the target:");
    scanf("%d",& target); 
    printf("enter the elements of array");
    for(i = 0 ; i < value ; i++){
        scanf("%d", &num[i]);
    }
    for(i=0 ; i<value ; i++){
        for(j=i+1; j<value ; j++){
            if(num[i] + num[j] == target){
                printf("target found");
                printf(" The index is %d and %d", i,j);
                found=1;  
            }
        }
    }
    if (found==0){
        printf("no match");
       }
   return 0;
}*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};



int maxSubArray(int* nums, int numsSize){

    int LastMaxSubArray = nums[0];        
    int MaxSubArray = LastMaxSubArray;
    
    //[-2,1,-3,4,-1,2,1,-5,4]
                                   
    for(int i = 1; i < numsSize; i++){
        if(nums[i] > LastMaxSubArray + nums[i]){
            LastMaxSubArray = nums[i];
        }else{
            LastMaxSubArray += nums[i];
        }
        
        if(MaxSubArray < LastMaxSubArray){
            MaxSubArray = LastMaxSubArray;
        }        
    }
    return MaxSubArray;
    
}
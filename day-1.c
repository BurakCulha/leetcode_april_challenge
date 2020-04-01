int singleNumber(int* nums, int numsSize)
{
       
    int i = 1;
    int val = *nums;
    for(i=1; i<numsSize; i++)
    { 
        val = val ^ *(nums + i);          
    }
    printf("%d", val);
    
    return val;
    
}

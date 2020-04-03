

int maxSubArray(int* nums, int numsSize)
{

    int i = 0;
    int j = 0;
    int max_sum = INT_MIN;
    int temp_sum = 0;
    int start_index = 0, stop_index = 0;
    
    
    for( i=0 ; i<numsSize ; i++ )
    {
        
        temp_sum = 0;
        for( j=i ; j<numsSize ; j++ )
        {
            
            temp_sum += *(nums+j);
            if( temp_sum > max_sum )
            {
                
                start_index = i;
                stop_index = j;
                max_sum = temp_sum;
                
            }
            
        }
        
    }
    
    return max_sum;
    
}


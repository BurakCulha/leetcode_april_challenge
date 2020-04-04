void moveZeroes(int* nums, int numsSize)
{

    int tmp[numsSize];
    int counter = 0;
    int i = 0;
    int j = numsSize-1;
    
    while( counter<numsSize )
    {
        
        if( *(nums+counter)>0 )
        {
            tmp[i++] = *(nums+counter);
        }
        else
        {
            tmp[j--] = *(nums+counter);
        }
        
        counter++;
    }
    
    for( i=0 ; i<numsSize ; i++ )
    {
        *(nums + i) = tmp[i];
    }

}

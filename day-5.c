int maxProfit(int* prices, int pricesSize)
{
    
    int i = 0;
    int profit = 0;
    
    while( i<pricesSize-1 )
    {
        if ( *( prices+i ) < *( prices+ (i+1) )  )
        {
            profit += *( prices+ i+1 ) - *( prices+i );
        }
        
        i++;
    }
    
    return profit;
}

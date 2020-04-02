

bool isHappy(int n)
{

    int square_sum = 0;
    int last_digit = 0;
    while( square_sum != 1  ||  n != 0 )
    {
        if(n == 2 && square_sum == 0 )
        {
            return false;
        }
        
        if( n == 0 )
        {
            n = square_sum;
            square_sum = 0;
        }
        else
        {
            last_digit = n % 10;
            square_sum += last_digit*last_digit;
            n = n / 10;
        }      
        
    }
    
    return true;

}

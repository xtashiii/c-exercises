bool is_armstrong_number(int n)
{
    int length = 0;
    int n_copy = n;
    int total  = 0;

    do
    {
        length++;
        n_copy /= 10;
    }
    while (n_copy != 0);

    if (length == 1)
    {
        return true;
    }

    n_copy = n;
    
    
    for (int i = 0; i < length; i++)
    {
        int count     = 0;
        int digit     = n_copy % 10;
        int tmp_digit = digit;

        while (count != length - 1)
        {
            digit *= tmp_digit;
            count++;
        }
    
        n_copy /= 10;
        total += digit;
    }

    if (total == n)
    {
        return true;
    }

    return false;
}

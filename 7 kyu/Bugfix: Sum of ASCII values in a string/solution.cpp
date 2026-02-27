int sum_ascii(const char string[])
{
    int sum = 0;
    for (int i = 0; string[i] != '\0'; i++)
    {
        sum += (int)string[i];
    }
    return sum;
}

//The "reduce" function.
int gcd(int a, int b) 
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int reduce(int &num, int &denom) 
{
    if (num <= 0 || denom <= 0) 
	{
        return 0; //It is a invalid input
    }
    int divisor = gcd(num, denom);
    num /= divisor;
    denom /= divisor;
    return 1;
}

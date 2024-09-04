//Combined Reduce and sum from_to Function.
#include <iostream>
using namespace std;

// Function to calculate the sum of all integers between 'first' and 'last' inclusive
int sum_from_to(int first, int last) 
{
    int sum = 0;
    for (int i = first; i <= last; ++i) 
	{
        sum += i;
    }
    return sum;
}

int gcd(int a, int b) 
{
    while (b != 0) 
	{
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int reduce(int &num, int &denom)
 {
    if (num <= 0 || denom <= 0) 
	{
        return 0; // Invalid input
    }
    int divisor = gcd(num, denom);
    num /= divisor;
    denom /= divisor;
    return 1;
}

int main() 
{
    // Using sum_from_to function
    int first = 1, last = 5;
    int sumResult = sum_from_to(first, last);
    cout << "Sum from " << first << " to " << last << " is: " << sumResult << endl;

    // Using reduce function
    int numerator = 8, denominator = 12;
    int reductionResult = reduce(numerator, denominator);
    if (reductionResult)
	 {
        cout << "Reduced fraction: " << numerator << "/" << denominator << endl;
    } else 
	{
        cout << "Reduction failed!" << endl;
    }

    return 0;
}

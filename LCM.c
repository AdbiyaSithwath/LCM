#include <stdio.h>
int lcm(int a, int b);
int main()
{
    int n1=12, n2=30, LCM;
    if(n1 > n2)
        LCM = lcm(n2, n1);
    else
        LCM = lcm(n1, n2); 
    printf("LCM of 12 and 30 = %d", n1, n2, LCM);
    return 0;
}
int lcm(int a, int b)
{
    static int multiple = 0;
    multiple += b;
    if((multiple % a == 0) && (multiple % b == 0))
    {
        return multiple;
    }
    else 
    {
        return lcm(a, b);
    }
}

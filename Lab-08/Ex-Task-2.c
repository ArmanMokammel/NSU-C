#include <stdio.h>

int main()
{
    int n, i, f1 = 1, f2 = 1;
    unsigned long long qf = 1;

    printf("Enter n: ");
    scanf("%d",&n);

    /*
        As (2n!) is going to be very large number for bigger 'n'
        So, we need to apply some trick in order to calculate the function q(n)= (2n!) / (n!)
        Now as we know, n! = n*(n-1)*(n-2)*.........*3*2*1
        q(n) = [ 2n*(2n-1)*.....*(n+1)*(n!) ] / [ n! ]
        n! got cancelled we got, q(n)=(2n!)/(n!) = 2n*(2n-1)*.....*(n+1)
        So, now we need to calculate q(n)= 2n*(2n-1)*.....*(n+1)
    */
    
    // i > n due to (n+1) term at the end
    for(i = 2*n; i > n; i--)
    {
        qf *= i;
    }

    printf("The quadruple factorial is %llu", qf);

    return 0;
}

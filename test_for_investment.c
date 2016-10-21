#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    const double interestRate = 0.0025;
    double loan = 40000;
    double interest = 0;
    double pay = 500;
    int n = 0;
    double returnRate = 0.05/12;
    double rest = 315.381715;
    double totalReturn = 0;
    do {
        interest = loan * interestRate;
        loan = (loan + interest - pay);
        n++;
    } while (loan > 0);
    printf("%d\n%lf\n",n,loan);
    totalReturn = rest;
    n=0;
    do {
        totalReturn = totalReturn + totalReturn*returnRate +500;
        n++;
    } while (n<(65-22)*12-90);
    printf("%d\n%lf\n",n,totalReturn);
    return 0;
}

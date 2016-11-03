#include <cstdio>
#include <cmath>

using namespace std;

unsigned int factorial(unsigned int n) 
{
    if (n == 0)
       return 1;
    return n * factorial(n - 1);
}

int main()
{
    int m, n, t;
    
    scanf("%d %d %d", &m, &n, &t);
    
    switch(t) {
        case 1:
            if(factorial(n) <= m) {
                printf("AC");
            } else {
                printf("TLE");
            }
            break;
        case 2:
            if(pow(2, n) <= m) {
                printf("AC");
            } else {
                printf("TLE");
            }
            break;
        case 3:
            if(pow(n, 4) <= m) {
                printf("AC");
            } else {
                printf("TLE");
            }
            break;
        case 4:
            if(pow(n, 3) <= m) {
                printf("AC");
            } else {
                printf("TLE");
            }
            break;
        case 5:
            if(pow(n, 2) <= m) {
                printf("AC");
            } else {
                printf("TLE");
            }
            break;
        case 6:
            if(log2(n) * n <= m) {
                printf("AC");
            } else {
                printf("TLE");
            }
            break;
        case 7:
            if(n <= m) {
                printf("AC");
            } else {
                printf("TLE");
            }
            break;
    }
}
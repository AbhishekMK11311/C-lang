#include<stdio.h>
#include<math.h>
int main(){
    long long a, b, c;
    long long sum;
    long long number;
    printf("Enter the value of a :");
    scanf("%lld", &a);
    printf("Enter the value of b :");
    scanf("%lld", &b);
    printf("Enter the value of c :");
    scanf("%lld", &c);
    printf("select the case: ");
    scanf("%lld", &number);
    //sum = a + b + c;
    //printf("The sum is : %lld", sum);
    switch (number)
    {
    case 1: printf("The sum is : %lld", a + b + c);
        break;
    case 2: printf("The difference is : %lld", a - b - c);
        break;
    case 3: printf("The product is : %lld", a * b * c);
        break;
    case 4: printf("The division is : %lld", a / b / c);
        break;
    default: printf("Invalid input");
        break;
    }
    return 0;
}
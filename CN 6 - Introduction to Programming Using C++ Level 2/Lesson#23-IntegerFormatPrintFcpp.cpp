#include <iostream>
using namespace std; 



int main()
{    
    int Page = 1, TotalBages = 10;

    printf("The page number is : %d \n", Page);
    printf("You are in page %d of %d \n", Page, TotalBages);

    printf("The Page number = %05d\n", Page);
    printf("The Page number = %0*d\n", 3, Page);
    printf("The Page number = %0*d\n", 4, Page);
    printf("The Page number = %0*d\n", 5, Page);

    int Number1 = 20, Number2= 30;
    printf("The result of %d + %d = %d", Number1, Number2, Number1+Number2);

}
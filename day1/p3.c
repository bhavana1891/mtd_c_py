#include<stdio.h>
int main()
{
    int inputNum = 0;
    puts("Enter anumber to check if it is even");
    scanf("%d", &inputNum);
    if(inputNum % 2 == 0)
        printf("%d is even number",inputNum);
    else
        printf("%d is even not an number",inputNum);

    return 0;

}
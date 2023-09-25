#include <stdio.h>
int stack[100], i, j, choice = 0, n, top = -1;
int push();
int pop();
int show();
int main()
{
    printf("\n Enter the number of elements in the stack:");
    scanf("%d", &n);
    printf("*****stack operation using Array *****");
    printf("\n----------------------------------------\n");
    while (choice != 4)
    {
        printf("choose one from the below option ---\n");
        printf("\n 1.push \n 2.pop \n 3.show \n 4.exit");
        printf("\n Enter your choice");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            push();
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            show();
            break;
        }
        case 4:
        {
            printf("Exiting----");
            break;
        }
        default:
        {
            printf("please enter valid choice");
        }
        }
    }
    return 0;
}
int push()
{
    int val;
    if (top == n)
        printf("\n overflow");
    else
    {
        printf("Enter the value?");
        scanf("%d", &val);
        top = top + 1;
        stack[top] = val;
    }
}
int pop()
{
    if (top == -1)
        printf("underflow");
    else
        top = top - 1;
}
int show()
{
    for (i = top; i >= 0; i--)
    {
        printf("%d \n", stack[i]);
    }
    if (top == -1)
    {
        printf("stack is empty");
    }
}
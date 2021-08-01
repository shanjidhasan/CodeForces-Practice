#include<stdio.h>
#include<stdlib.h>
typedef struct list lst;
struct list
{
    int data;
    lst *prev;
};
lst* create(int data)
{
    lst *ptr;
    lst *newnode = (lst*)malloc(sizeof(lst));
    if(newnode != NULL)
    {
        newnode->data = data;
        newnode->prev = NULL;
        return newnode;
    }
}
void display(lst *start)
{
    if(start == NULL)
        return ;
    display(start->prev);
    printf("%d",start->data);
}
int main()
{
    int n,i,data;
    lst *num2 = NULL, *num1 = NULL,*ptr;
    printf("Enter the number of digits : ");
    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
        scanf("%d",&data);
        if(num1 == NULL)
        {
            num1 = create(data);
            ptr = num1;
        }
        else
        {
            ptr->prev = create(data);
            ptr = ptr->prev;
        }
    }
    printf("Enter the number of digits : ");
    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
        scanf("%d",&data);
        if(num2 == NULL)
        {
            num2 = create(data);
            ptr = num2;
        }
        else
        {
            ptr->prev = create(data);
            ptr = ptr->prev;
        }
    }
    printf("First Number : ");
    display(num1);
    printf("\nSecond Number : ");
    display(num2);
    lst *ptr1, *ptr2,*result = NULL;
    int sum,carry = 0;
    ptr1 = num1;
    ptr2 = num2;
    while(ptr1 != NULL || ptr2 != NULL || carry != 0)
    {
        if(ptr1!=NULL && ptr2 != NULL)
        {
            sum = carry + ptr1->data + ptr2->data;
            ptr1 = ptr1->prev;
            ptr2 = ptr2->prev;
        }
        else if(ptr1!=NULL && ptr2 == NULL)
        {
            sum = carry + ptr1->data;
            ptr1 = ptr1->prev;
        }
        else if(ptr1 == NULL && ptr2 != NULL)
        {
            sum = carry + ptr2->data;
            ptr2 = ptr2->prev;
        }
        carry = sum/10;
        sum = sum%10;
        if(result == NULL)
        {
            result = create(sum);
            ptr = result;
        }
        else
        {
            ptr->prev = create(sum);
            ptr = ptr->prev;
        }
    }
    printf("\nSum of ");
    display(num1);
    printf(" and ");
    display(num2);
    printf(" is : ");
    display(result);
    return 0;
}

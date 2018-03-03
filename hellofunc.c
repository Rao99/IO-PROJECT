
#include "hellomake.h"
/*
void myPrintHelloMake(void) {

  printf("Hello makefiles all!\n");

  return;
}
*/

struct node

{

    int data;

    struct node *link;

}*top = NULL;

 

#define MAX 5



 

// to insert elements in stack

void push()

{

    int val,count;

    struct node *temp_var;

    temp_var = (struct node*)malloc(sizeof(struct node));

 

    count = st_count();

    if (count <= MAX - 1)

    {

        printf("\nEnter value which you want to push into the stack :\n");

        scanf("%d",&val);

        temp_var->data = val;

        temp_var->link = top;

        top = temp_var;

    }

    else

        printf("WARNING: STACK FULL\n");

}

 

// to delete elements from stack

void pop()

{

    struct node *temp_var;

    if (top == NULL)

        printf("**Stack is empty**\n");

    else

    {

        temp_var = top;

        printf("Value popped out is %d \n",temp_var->data);

        top = top->link;

        free(temp_var);

    }

}

 

// to check if stack is empty

void empty()

{

    if (top == NULL)

        printf("STACK IS EMPTY\n");

    else

        printf("elements are present, stack is not empty \n");

}

 

// to check if stack is full

void stack_full()

{

    int count;

 

    count = st_count();

    if (count == MAX)

    {

        printf("stack is full\n");

    }

    else

        printf("stack is not full \n");

}

 

// to count the number of elements

void stack_count()

{

    int count = 0;

    struct node *temp_var;

 

    temp_var = top;

    while (temp_var != NULL)

    {

        printf(" %d\n",temp_var->data);

        temp_var = temp_var->link;

        count++;

    }

    printf("size of stack is %d \n",count);

}

 

int st_count()

{

    int count = 0;

    struct node *temp_var;

    temp_var = top;

    while (temp_var	!= NULL)

    {

        temp_var = temp_var->link;

        count++;

    }

    return count;

}

 

 

// to print top element of stack

void peep()

{

    if (top == NULL)

        printf("\n**Top is not available for an EMPTY stack**\n");

    else

        printf("\nTop of the stack is %d \n",top->data);

}

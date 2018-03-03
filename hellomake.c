#include "hellomake.h"
/*
int main() {
  // call a function in another file
  myPrintHelloMake();

  return(0);
}
*/
void main()

{

    int choice;

 

    while (1)

    {

        printf("1. push an element \n");

        printf("2. pop an element \n");

        printf("3. check if stack is empty \n");

        printf("4. check if stack is full \n");

        printf("5. count/display elements present in stack \n");

        printf("6. Peep- print top of the stack \n");

        printf("7. exit \n");

        printf("Enter your choice \n");

        scanf("%d",&choice);

        switch (choice)

        {

        case 1:    

            push();

            break;         

        case 2:    

            pop();

            break;         

        case 3:    

            empty();

            break;         

        case 4:    

            stack_full();

            break;         

        case 5:    

            stack_count();

            break;         
        

        case 6:    

            peep();

            break;

        case 7:    

            exit(0);

        default:

            printf("wrong choice\n");         

        }

    }

}



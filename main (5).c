// /**non-parameterized fn**/
#include <stdio.h>
// void display();//function decleration ,non-parameterized fn
// int main()
// {
//     display();
   
//     return 0;
// }
// void display()
// {
//     printf("Hello from display function\n");
// }


/* Parameterize function*/

// void display(int num);
// int main()
// { 
//     int num;
//     display(10);
//     display(20);
//     return 0;
// }
// void display(int num)//local variable
// {
//     printf("Hello from display function is: %d\n",num);
// }


/*Return value*/
int display(int num);
int main()
{
    int a;
    // a=display(100);
    // printf("value of num is :%d",a);
    printf("value of num is %d",display(100));
    
    return 0;
}
int display(int num)
{
    return num;
}

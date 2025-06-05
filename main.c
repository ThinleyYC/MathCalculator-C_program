#include <stdio.h>
#include <string.h>

int main()
{
    char name[30];
    printf("Hi there! Welcome to Math Calculator.\n");
    printf("\nPlease enter your name before we proceed: ");
    //scanf("%s",&name); 
    fgets(name, 30, stdin); 
    name[strcspn(name, "\n")] = '\0'; 
    printf("\nHello %s, welcome to Math Calculator.\n",name);
    
    double num1, num2;
    printf("\nTo begin, please enter two numbers.");
    printf("\n\nEnter first number: ");
    scanf("%lf",&num1);
    printf("\nEnter second number: ");
    scanf("%lf",&num2);
    printf("\nYou have entered %.2lf and %.2lf.",num1,num2);
    
    char operator;
    int valid_operator = 0;
    double result;
    
    do{
       printf("\n\nChoose an operation ['+','-','*','/']: \n");
       scanf("%s", &operator);
       
       switch(operator){
           case'+':
           valid_operator = 1;
           result=num1+num2;
           printf("The sum of %.2lf and %.2lf is %.2lf",num1,num2,result);
           break;
        
           case'-':
           valid_operator = 1;
           result=num1-num2;
           printf("The difference of %.2lf and %.2lf is %.2lf",num1,num2,result);
           break;
        
           case'*':
           valid_operator = 1;
           result=num1*num2;
           printf("The product of %.2lf and %.2lf is %.2lf",num1,num2,result);
           break;
        
           case'/':
           if(num2 == 0) 
           {
               printf("Error: division by zero!");
               
           } 
           else {
               valid_operator = 1;
               result=num1/num2;
               printf("The quotient of %.2lf and %.2lf is %.2lf",num1,num2,result);
               
           }
           break;
           
           default:
           printf("Invalid operator!!!");
       }
    }
    while (!valid_operator);
    
    
    printf("\n\nThank you for using Math Calculator.");
    printf("\nIf you enjoyed my service, please dont forget to give a high review!");
    return 0;
}






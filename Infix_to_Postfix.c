/* C Program to Convert Infix to Postfix Expression using Stack

Given an infix expression, it can be converted to both postfix and prefix notations.
Now, let us see how to convert an infix expression to postfix.

Infix notation ( a operator b ): For example, a + b is an infix notation.
Postfix notation ( a b operator ): a b + is the equivalent postfix notation of a + b.

*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int precedence(char a)
{
    switch(a)
    {
        case '^':
            return 5;
            break;
        case '/':
            return 4;
            break;
            
        case '*':
            return 3;
            break;
            
        case '+':
            return 2;
            break;
        case '-':
            return 1;
            break;
    }
    
    return 0;
}

int main()
    {
	    char arr[100];
        printf("\nEnter an infix expression: ");
	    scanf("%s",arr);
	    int stop=-1;
	    int ptop=0;
	    char *postfix = NULL;
	    char *stack = NULL;
	    postfix = (malloc)(sizeof(100));
	    stack = (malloc)(sizeof(100));

	    for(int j=0;j<strlen(arr);j++)
        {
	        switch(arr[j])
            {
	            case '(':
	                stack[++stop] = arr[j];
	                break;
	                
	            case ')':
	                while(stack[stop] != '(' && stop!=-1)
                    {
	                    postfix[ptop++] = stack[stop];
	                    stop--;
	                }

	                stop--;
	                break;
	            
	            case '+':
	            case '-':
	            case '/':
	            case '*':
	            case '^':
	                while(precedence(arr[j]) <= precedence(stack[stop]) && stop!=-1)
                    {
	                    postfix[ptop++] = stack[stop--];
	                }

	                stack[++stop] = arr[j];
	                break;
	                
	            default:
	                postfix[ptop++] = arr[j];
	                break;
	        }
	    }

	    while(stop!=-1)
        {
	        postfix[ptop++] = stack[stop];
	        stop--;
	    }
		postfix[ptop] = '\0';
        printf("Equivalent postfix expression: ");
	    printf("%s\n",postfix);
        return 0;
    }


#include<stdio.h>
#define SIZE 5

struct stack
{
    char data[SIZE];
    int top;
};

int isempty(struct stack *s)
{
    if(s->top == -1)
        return 1;
    return 0;
}

int isfull(struct stack *s)
{
    if(s->top == SIZE-1)
        return 1;
    return 0;
}

void push(struct stack *s, char ele)
{
    if(isfull(s))
        printf("Stack Overflow\n");
    else
    {
        s->top++;
        s->data[s->top] = ele;
    }
}

char pop(struct stack *s)
{
    if(isempty(s))
    {
        printf("Stack is empty\n");
        return '\0';
    }
    else
    {
        char ele = s->data[s->top];
        s->top--;
        return ele;
    }
}

void display(struct stack s)
{
    printf("Stack is:\n");
    for(int i = s.top; i >= 0; i--)
        printf("%c\n", s.data[i]);
}

int Balanced_parenthesis(char expr[], struct stack *s)
{
    int i = 0;
    char x;
    while(expr[i] != '\0')
    {
        switch(expr[i])
        {
            case '(':
            case '[':
            case '{':
                push(s, expr[i]);
                break;
            case ')':
                if(isempty(s))
                    return 0;
                x = pop(s);
                if(x != '(')
                    return 0;
                break;
            case ']':
                if(isempty(s))
                    return 0;
                x = pop(s);
                if(x != '[')
                    return 0;
                break;
            case '}':
                if(isempty(s))
                    return 0;
                x = pop(s);
                if(x != '{')
                    return 0;
                break;
        }
        i++;
    }
    return isempty(s);
}

int precedence(char op)
{
    switch (op)
    {
        case '(': return 0;
        case '+':
        case '-': return 1;
        case '*':
        case '/':
        case '%': return 2;
        case '^': return 3;
    }
    return -1;
}

void infix_postfix(char infix[], char postfix[], struct stack *s)
{
    int i = 0, j = 0;
    char x;

    while (infix[i] != '\0')
    {
        if (isalnum(infix[i]))
            postfix[j++] = infix[i];

        else if (infix[i] == '(')
            push(s, infix[i]);

        else if (infix[i] == '+' || infix[i] == '-' || infix[i] == '*' || infix[i] == '/' || infix[i] == '^' || infix[i] == '%')
        {
            while (!isempty(s) && precedence(s->data[s->top]) >= precedence(infix[i]))
            {
                x = pop(s);
                postfix[j++] = x;
            }
            push(s, infix[i]);
        }

        else if (infix[i] == ')')
        {
            while (!isempty(s) && s->data[s->top] != '(')
            {
                x = pop(s);
                postfix[j++] = x;
            }
            if (!isempty(s) && s->data[s->top] == '(')
                pop(s);
        }
        i++;
    }

    while (!isempty(s))
    {
        x = pop(s);
        postfix[j++] = x;
    }
    postfix[j] = '\0';

    printf("Postfix Expression: %s\n", postfix);
}

int evaluate_postfix(char postfix[], struct stack *s)
{
    int i = 0, op1, op2, res;

    while (postfix[i] != '\0')
    {
        if (isdigit(postfix[i]))
            push(s, postfix[i] - '0');

        else
        {
            op2 = pop(s);
            op1 = pop(s);
            switch (postfix[i])
            {
                case '+': res = op1 + op2;
                          break;
                case '-': res = op1 - op2;
                          break;
                case '*': res = op1 * op2;
                          break;
                case '/': res = op1 / op2;
                          break;
                case '%': res = op1 % op2;
                          break;
                case '^':
                {
                    res = 1;
                    for (int j = 0; j < op2; j++)
                        res *= op1;
                    break;
                }
                default:
                    printf("Invalid postfix expression\n");
                    return -1;
            }
            push(s, res);
        }
        i++;
    }
    return pop(s);
    printf("%d",res);
}


int main()
{
    struct stack s;
    s.top = -1;
    int ch;
    char n;
    char exp[15];
    char infix[SIZE], postfix[SIZE];


    while(1)
    {
        printf("1. Push\n2. Pop\n3. Display\n4. Balanced parentheses\n5. Infix to Postfix\n6. Evaluate Postfix\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                printf("Enter the element: ");
                scanf(" %c", &n);
                push(&s, n);
                break;
            case 2:
                pop(&s);
                break;
            case 3:
                display(s);
                break;
            case 4:
                printf("Enter the expression: ");
                scanf("%s", exp);
                if (Balanced_parenthesis(exp, &s))
                    printf("Expression is balanced.\n");
                else
                    printf("Expression is not balanced.\n");
                break;
            case 5:
                printf("Enter the infix expression: ");
                scanf("%s", infix);
                infix_postfix(infix, postfix, &s);
                break;
            case 6:
                printf("Enter the postfix expression: ");
                scanf("%s", postfix);
                int result = evaluate_postfix(postfix, &s);
                if (result != -1)
                    printf("Result: %d\n", result);
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

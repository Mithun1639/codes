#include<stdio.h>
int stack[50],top=-1;
void sum(){
    int res,op1,op2;
    op1=stack[top];
    top--;
    op2=stack[top];
    top--;
    res=op2+op1;
    top++;
    stack[top]=res;
}
void diff(){
    int res,op1,op2;
    op1=stack[top];
    top--;
    op2=stack[top];
    top--;
    res=op2-op1;
    top++;
    stack[top]=res;
}
void mult(){
    int res,op1,op2;
    op1=stack[top];
    top--;
    op2=stack[top];
    top--;
    res=op2*op1;
    top++;
    stack[top]=res;
}
void div(){
    int res,op1,op2;
    op1=stack[top];
    top--;
    op2=stack[top];
    top--;
    res=op2/op1;
    top++;
    stack[top]=res;
}
int main(){
    char st[30];
    printf("enter the postfix expression");
    scanf("%s",&st);
    for(int i=0;st[i]!='\0';i++){
        switch (st[i])
        {
        case '+':
            sum();
            break;
        case '-':
            diff();
            break;
        case '*':
            mult();
            break;
        case '/':
            div();
            break;
        default:
            top++;
            stack[top]=st[i]-48;
            break;
        }
    }
    printf("the expression is:%d",stack[top]);
}

#include<stdio.h>
#define CAPACITY 3
int stack[CAPACITY];
int top = -1;

void push(int x){
    if(top <CAPACITY - 1) {
  top = top +1;
  stack[top]=x;
  printf("succeesfully add item: %d\n",x);

    }else{
    printf("Exception ! No space\n");
    }
}
int pop(){
    if (top>=0){
        int val = stack[top];
        top = top-1;
        return val;
    }
    printf("Exception from pop! Empty Stack\n");

return -1;
}
int peek(){
    if ( top >= 0){
        return stack[top];
    }
 printf("Excception from peek");
return -1;
}
int main(){
printf("Implementing my stck in c.\n");
peek();
push(10);
push(20);
push(30);
printf("pop item: %d\n",pop);
push(40);
printf("top of Stack: %d\n",peek());
return 0;
}

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

struct Stack {
int lastIndex;
char* array;
};

struct Stack* prepareStack()
{
struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
stack->lastIndex = -1;
stack->array = (char*)malloc(100 * sizeof(char));
return stack;
}

int isEmpty(struct Stack* stack)
{
return stack->lastIndex == -1;
}

void push(struct Stack* stack, char item)
{
    stack->lastIndex++;
stack->array[stack->lastIndex] = item;
}

// Function to remove an item from stack. It decreases top by 1
char pop(struct Stack* stack)
{
char poppedItem = stack->array[stack->lastIndex];
stack->lastIndex--;
return poppedItem;
}

// Function to return the top from stack without removing it
int top(struct Stack* stack)
{
return stack->array[stack->lastIndex];
}

// Driver program to test above functions
int main()
{
    int n;
    scanf("%d\n", &n);

    struct Stack* stack = prepareStack();
    for (int i=0; i<n; i++){
        char c;
        scanf("%c",&c);
        if(!isEmpty(stack) && top(stack)==c){
            pop(stack);
        }
        else{
            push(stack,c);  
        }
    }
   
    if(isEmpty(stack)){
        printf("Empty String");
        return 0;
    }
   
    for(int i=0; i<=stack->lastIndex; i++){
        printf("%c",stack->array[i]);
    }
   
    return 0;
}



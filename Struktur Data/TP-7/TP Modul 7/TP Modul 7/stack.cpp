#include "stack.h"

void createStack_103032400084(stack &S) {
    S.top = 0;
}

bool isEmpty_103032400084(stack S) {
    return (S.top == 0);
}

bool isFull_103032400084(stack S) {
    return (S.top == MAXSTACK);
}

void push_103032400084(stack &S, infotype x) {
    if (isFull_103032400084(S) == false) {
        S.info[S.top] = x;
        S.top++;
    }
}

infotype pop_103032400084(stack &S) {
    infotype x;

    S.top--;
    x = S.info[S.top];

    return x;
}

int sumStack_103032400084(stack S) {
    int total = 0;

    while (!isEmpty_103032400084(S)) {
        total = total + pop_103032400084(S);
    }

    return total;
}

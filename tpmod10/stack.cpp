#include "stack.h"

void createStack_1301213451(stack &S){
    Top(S) = 0;
}

bool isEmpty_1301213451(stack &S){
    if (Top(S) == 0){
        return true;
    }else{
        return false;
    }
}

bool isFull_1301213451(stack &S){
    if (Top(S) == 15){
        return true;
    }else{
        return false;
    }
}

void push_1301213451(stack &S,infotype x){
    if (isFull_1301213451(S) == false){
        Top(S) ++;
        info(S)[Top(S)] = x;
    }else{
        cout << "Stack Penuh" << endl;
    }
}

infotype pop_1301213451(stack &S){
    infotype x;
    if (isEmpty_1301213451(S)){
        cout << "Stack Kosong" << endl;
    }else{
        x = info(S)[Top(S)];
        Top(S)--;
        return x;
    }
}

void printinfo_1301213451(stack S){
    int i;
    i = Top(S);
    for (;i >= 1;i--){
        cout <<info(S)[i]<<" ";
    }
}

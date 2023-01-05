#include "stack.h"

int main()
{
    stack S;
    infotype x;
    createStack_1301213451(S);
    for(int i = 0; i< 12; i++){
        cin >> x;
        push_1301213451(S,x);
    }
    printinfo_1301213451(S);
    for(int a = Top(S); a > 4 ; a--){
        pop_1301213451(S);
    }
    cout<< endl;
    printinfo_1301213451(S);
}

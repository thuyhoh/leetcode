#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>


char* addBinary(char* a, char* b) {
    if(a == NULL) return b;
    if(b == NULL) return a;
    if(a == NULL && b == NULL) return NULL;
    int lena = strlen(a);
    int lenb = strlen(b);
    int lenmax = lena > lenb ? (lena + 1): (lenb + 1);
    int lenmin = lena > lenb ? lenb: lena;
    char* result = (char*) malloc(sizeof(char)* lenmax);
    int i = 0, flag = 0;
    do{
        *(result+i) = (*(a+i) + *(b+i) - 48) +flag ;
        if(*(result + i) == '2'){
            flag = 1;
            *(result + i) = '0';
        }
        if(*(result + i) == '3'){
            flag = 1;
            *(result + i) = '1';
        }
        i++;
    }while(i != lenmin);
    
    return result;
}

int main(void){
    

    printf("%d",LONG_LONG_MIN);
    return 0;
}

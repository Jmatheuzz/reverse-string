#include <stdio.h>
#include <stdlib.h>

void reverse(char *str){
    if(*str!='\0'){
        reverse(str+1);
        printf("%c", *str);
    }
}

int main(){
    reverse((char*)"matheus");
}
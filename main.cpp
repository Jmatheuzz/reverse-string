#include <stdio.h>
#include <stdlib.h>

void reversoR(char *str){
    if(*str!='\0'){
        reversoR(str+1);
        printf("%c", *str);
    }
}

int main(){
    reversoR((char*)"matheus");
}
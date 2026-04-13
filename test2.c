#include <stdio.h>
#define MAX_SIZE 30
void reversal(char *a, int N); 

int main(){
    char ch; 
    char arr[MAX_SIZE]; 
    char *p = arr; 
    int c=0;
    printf("Enter a message: ");
    while((ch=getchar())!='\n'){
        *p++=ch; 
         

    }

    

    /*for (char *q=arr; 0<p-q; q++){
        printf("%c", *q);

    }*/
    char *q=arr;
    reversal(arr, p-q);

    return 0;
}

void reversal(char *a, int N){
    for(char *p = &a[N-1]; p>=a; p--){
        printf("%c", *p);
    }
}
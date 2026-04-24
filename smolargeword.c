#include <stdio.h>
#include <string.h>

#define wMAX 20

int main(){
    char sw[10], lw[10], w[100]; 
    printf("Enter word: ");
    while(strlen(fgets(w, wMAX, stdin))!=5){
        if (*sw=='\0' && *lw=='\0'){
            strcat(sw,w);
            strcat(lw,w);
        }
        else{
            if(strcmp(sw, w)<0 && strcmp(lw, w)<0){
                lw[0]='\0'; 
                strcat(lw, w); 
            }
            else if(strcmp(sw, w)>0){
                sw[0]='\0';
                strcat(sw, w);   
            }
        }
        printf("Enter word: ");
    }

    printf("\nSmallest word: %s\nLargest word: %s", sw, lw); 

    return 0; 
}
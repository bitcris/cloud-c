#include <stdio.h>

int main() {

printf("========[ VOTAÇÃO PARA ELEGER O(A) SUPERVISOR(A) DA TURMA ]========\n\n\nCANDIDATOS(AS)\n\n");

  printf("Gabrielle.....Nº 123\n");
  printf("Lara..........Nº 456\n");
  printf("Caio..........Nº 789\n");
  printf("Kalebe........Nº 167\n\n");
    


int votosGabrielle =0, votosLara=0, votosCaio=0, votosKalebe=+ 0, brancos=0, nulos=0;

int voto1;
printf("DIGITE O NÚMERO DO(A) CANDIDATO(A) PARA VOTAR\n");
scanf("%d", &voto1);
printf("VOTO SALVO!");
printf("\n\n");


if(voto1 == 123) {
    votosGabrielle =1; 
} 

if(voto1 == 456) {
   votosLara = +1;
}

if(voto1 == 789) {
    votosCaio = +1;
}

if(voto1 == 167) {
   votosKalebe = +1; 
}

if(voto1 == 0) {
    brancos = +1;
}

int voto2;
printf("DIGITE O NÚMERO DO(A) CANDIDATO(A) PARA VOTAR\n");
scanf("%d", &voto2);
printf("VOTO SALVO!");
printf("\n\n");


if(voto2 == 123) {
    votosGabrielle = votosGabrielle + 1; 
} 

if(voto2 == 456) {
   votosLara = votosLara + 1;
}

if(voto2 == 789) {
    votosCaio = votosCaio + 1;
}

if(voto2 == 167) {
   votosKalebe = votosKalebe + 1; 
}

if(voto2 == 0) {
    brancos = brancos + 1;
}

int voto3;
printf("DIGITE O NÚMERO DO(A) CANDIDATO(A) PARA VOTAR\n");
scanf("%d", &voto3);
printf("VOTO SALVO!");
printf("\n\n");


if(voto3 == 123) {
    votosGabrielle = votosGabrielle + 1; 
} 

if(voto3 == 456) {
   votosLara = votosLara + 1;
}

if(voto3 == 789) {
    votosCaio = votosCaio + 1;
}

if(voto3 == 167) {
   votosKalebe = votosKalebe + 1; 
}

if(voto3 == 0) {
    brancos = brancos + 1;
}

int voto4;
printf("DIGITE O NÚMERO DO(A) CANDIDATO(A) PARA VOTAR\n");
scanf("%d", &voto4);
printf("VOTO SALVO!");
printf("\n\n");


if(voto4 == 123) {
    votosGabrielle = votosGabrielle + 1; 
} 

if(voto4 == 456) {
   votosLara = votosLara + 1;
}

if(voto4 == 789) {
    votosCaio = votosCaio + 1;
}

if(voto4 == 167) {
   votosKalebe = votosKalebe + 1; 
}

if(voto4 == 0) {
    brancos = brancos + 1;
}

int voto5;
printf("DIGITE O NÚMERO DO(A) CANDIDATO(A) PARA VOTAR\n");
scanf("%d", &voto5);
printf("VOTO SALVO!");
printf("\n\n");


if(voto5 == 123) {
    votosGabrielle = votosGabrielle + 1; 
} 

if(voto5 == 456) {
   votosLara = votosLara + 1;
}

if(voto5 == 789) {
    votosCaio = votosCaio + 1;
}

if(voto5 == 167) {
   votosKalebe = votosKalebe + 1; 
}

if(voto5 == 0) {
    brancos = brancos + 1;
}

 

printf("\n\n==========================[  RESULTADO  ]============================\n\n");
printf("Votos para Gabrielle: %d\n", votosGabrielle);
printf("Votos para Lara: %d\n", votosLara);
printf("Votos para Caio: %d\n", votosCaio);
printf("Votos para Kalebe: %d\n", votosKalebe);
printf("Votos Brancos: %d\n", brancos);
printf("Votos nulos: %d\n\n", nulos);

//int myNum = 15;
//printf("%d", myNum);   
return 0;
}

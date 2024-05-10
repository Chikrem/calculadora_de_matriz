/* =====UNIVERSIDADE ESTADUAL DO CEARÁ=====
		====ALUNOS==============MATRICULAS=
		WILIAM CALMON DOS SANTOS - 1357330 
		HECTOR SOARES DE CARVALHO - 1357322		
        SAMUEL HOLANDA NEPOMUCENO - 1357445
        ===================================
*/
//Inclusão das Bibliotecas
#include <stdio.h> 
#define MAX 100

typedef struct{ //Struct referente aos vetores
	int d;
	float vet[MAX];
}vetor;

typedef struct { //Struct referente as matrizes
	float Mat[MAX][MAX];
	int l,c;
}matriz;

//Menus
void menuMatriz();
void menuVetor();
void menuPrincipal();

//Vetores
void lerVetor (vetor *V);
void somaVetor(vetor V, vetor V1);
void multVetor(vetor V);
void escVetor(vetor V, vetor V1);
void ImpVetor(vetor *V);

//Matrizes
void lerMatriz(matriz*M);
void somaMatriz (matriz M, matriz M1);
void multMatriz(matriz M, matriz M1);
void transMatriz(matriz*M);
void det_1x1(matriz*M);
void det_2x2(matriz*M);
void det_3x3(matriz*M);
void simetriaMatriz(matriz*M);
void ImpMatriz(matriz*M);
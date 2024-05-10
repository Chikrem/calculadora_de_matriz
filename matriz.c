/* =====UNIVERSIDADE ESTADUAL DO CEARÁ=====
		====ALUNOS==============MATRICULAS=
		WILIAM CALMON DOS SANTOS - 1357330 
		HECTOR SOARES DE CARVALHO - 1357322		
        SAMUEL HOLANDA NEPOMUCENO - 1357445
        ===================================
*/
#include "menu.h" // Inclui a biblioteca

void somaMatriz(matriz M, matriz M1){ //Função para somar as matrizes
    int i,j;
    float matriz[MAX][MAX];
	for(i=0;i<M.l;i++){
		for(j=0;j<M.c;j++){
		matriz[i][j]=M.Mat[i][j] + M1.Mat[i][j];
	}
}
	printf("\n");
	printf("Resultado: Matriz\n");
	for(i=0;i<M.l;i++){
		printf("|  ");
		for(j=0;j<M.c;j++){
		printf("%.1f  ", matriz[i][j]);
}
	printf("|\n");
	}

}

void lerMatriz(matriz*M){ //Função para ler as matrizes
	int i,j;
	printf("Digite o numero de linhas da matriz: \n");
	scanf("%i", &M->l);
	printf("Digite o numero de colunas da matriz: \n");
	scanf("%i", &M->c);
	printf("\n");
	for(i=0;i<M->l;i++){
		for(j=0;j<M->c;j++){
			printf("Digite o %d%c termo da linha %d%c \n", j+1,167,i+1,167);
			scanf("%f", &M->Mat[i][j]);
		}
	}
}

void multMatriz(matriz M, matriz M1){ //Função para multiplicar as matrizes
	int i,j,z;
	float matriz[MAX][MAX];

	for(i=0;i<M.l;i++){
		for(j=0;j<M.c;j++){
			matriz[i][j] = 0;
		}
	}
	for(i=0;i<M.l;i++){
		for(j=0;j<M.c;j++){
			for(z=0;z<M.l;z++){
                    matriz[i][j] += M.Mat[i][z] * M1.Mat[z][j];
			}
		}
	}
	for(i=0;i<M.l;i++){
            printf("| ");
		for(j=0;j<M.c;j++){
			printf("%.1f  ", matriz[i][j]);
		}
        printf("| \n");
	}
}

void transMatriz(matriz*M){ //Função para exibir a transposta da matriz
    int i,j;
    printf("\nTransposta:\n");

    for(i=0;i<M->l;i++){
            printf("\n| ");
        for(j=0;j<M->c;j++){
            printf("%.1f  ", M->Mat[j][i]);
        }
    printf("| \n");
    }
}

void det_1x1(matriz*M){ //Função para calcular o determinante de matrizes de ordem 1x1
	int i,j;
	float matriz[MAX][MAX];
	printf("\nO Determinante e: ");
	for(i=0;i<1;i++){
		for(j=0;j<1;j++){
			printf("%.1f \n\n", M->Mat[0][0]);
		}
	}
}

void det_2x2(matriz*M){ //Função para calcular o determinante de matrizes de ordem 2x2
    int i,j;
    float det;

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            det = (M->Mat[0][0] * M->Mat[1][1]) - (M->Mat[0][1] * M->Mat[1][0]);
        }
    }
    printf("\nO determinante e: %.1f\n\n", det);
}

void det_3x3(matriz*M){ //Função para calcular o determinante de matrizes de ordem 3x3
    float det;
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            det=((M->Mat[0][0]*M->Mat[1][1]*M->Mat[2][2])+(M->Mat[0][1]*M->Mat[1][2]*M->Mat[2][0])+(M->Mat[0][2]*M->Mat[1][0]*M->Mat[2][1]))-((M->Mat[2][0]*M->Mat[1][1]*M->Mat[0][2])+(M->Mat[2][1]*M->Mat[1][2]*M->Mat[0][0])+(M->Mat[2][2]*M->Mat[1][0]*M->Mat[0][1]));
        }
   }
    printf("\nO determinante e: %.1f\n\n", det);
}

void simetriaMatriz(matriz*M){ //Função para verificar a simetria da matriz
     int i,j;
    for(i=0;i<M->l;i++){
        for(j=0;j<M->c;j++){
            if(M->Mat[j][i] != M->Mat[i][j]){
                printf("\nA matriz nao e simetrica\n\n");
                return;
            }
        }
    }
    printf("\nA matriz e simetrica\n\n");
    }

void ImpMatriz(matriz *M){ // Função para imprimir as matrizes que poderão ser reutilizadas
	int i,j;
	printf("\n");
	for(i=0;i<M->l;i++){
		printf("|  ");
		for(j=0;j<M->c;j++){
			printf("%.1f  ", M->Mat[i][j]);
		}
		printf("|\n");
	}
	printf("\n");
}
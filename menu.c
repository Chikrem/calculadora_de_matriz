/* =====UNIVERSIDADE ESTADUAL DO CEARÁ=====
		====ALUNOS==============MATRICULAS=
		WILIAM CALMON DOS SANTOS - 1357330 
		HECTOR SOARES DE CARVALHO - 1357322		
        SAMUEL HOLANDA NEPOMUCENO - 1357445
        ===================================
*/
#include "menu.h" //Inclusão da bibliotecaeca

void menuMatriz(){ //Funçao que contem o menu das matrizes
    int a,b;
	int teste=0;
	matriz m1,m2;
	printf("\nMatriz 1:\n");
	lerMatriz(&m1);
	printf("\nMatriz 2:\n");
	lerMatriz(&m2);
	while(1){
		printf("\nSelecione uma das opcoes\n\n");
	 	printf("[1] Somar Matrizes\n\n");
	 	printf("[2] Produto entre Matrizes\n\n");
	 	printf("[3] Matriz Transposta\n\n");
	 	printf("[4] Calcular Determinantes\n\n");
	 	printf("[5] Verificar se a Matriz e Simetrica\n\n");
		printf("[6] Voltar\n\n");
	 	scanf("%d",&a);
	 	printf("\n");
	switch (a){
	 	case 1 :{
	 		if((m1.l == m2.l) && (m1.c == m2.c)){
			somaMatriz(m1,m2);
			}else{
				printf("\nNao eh possivel somar matrizes de dimensoes diferentes\n");
			}
			break;
		}
		case 2:{
			if(m1.c == m2.l){
			multMatriz(m1,m2);
			}else{
				printf("\nNao eh possivel multiplicar matrizes incompativeis\n");
			}
			break;
			}
		case 3:{
			int op;
			printf("Matriz 1\n");
			ImpMatriz(&m1);
			printf("Matriz 2\n");
			ImpMatriz(&m2);
			printf("Voce deseja ver a transposta da Matriz 1 ou 2?\n");
			scanf("%d", &op);
			printf("\n");
			if(op == 1){
				transMatriz(&m1);
			}else{
				if(op == 2){
					transMatriz(&m2);
				}else{
					printf("\nNao existe essa matriz!\n");
				}
			}
			break;
        }
		case 4:{
			int op;
			printf("Matriz 1\n");
			ImpMatriz(&m1);
			printf("Matriz 2\n");
			ImpMatriz(&m2);
			printf("Voce deseja calcular o determinante da Matriz 1 ou 2?\n");
			scanf("%d", &op);
			printf("\n");
			if(op == 1){
				if((m1.l == 1) && (m1.c == 1)){
				det_1x1(&m1);
			}else{
				if((m1.l == 2) && (m1.c == 2)){
					det_2x2(&m1);
				}else{
					if((m1.l == 3) && (m1.c == 3)){
						det_3x3(&m1);
					}else{
						printf("\nA Matriz nao eh 1x1 ou 2x2 ou 3x3\n");
					}
				}
			}
			}else{
				if(op == 2){
					if((m2.l == 1) && (m2.c == 1)){
					det_1x1(&m2);
					}else{
						if((m2.l == 2) && (m2.c == 2)){
							det_2x2(&m2);
						}else{
							if((m2.l == 3) && (m2.c == 3)){
								det_3x3(&m2);
							}else{
								printf("\nA Matriz nao eh 1x1 ou 2x2 ou 3x3\n");
							}
						}
					}
				}else{
					printf("\nNao existe essa matriz!\n");
				}
			}
            break;
		}
        case 5:{
            int op;
			printf("Matriz 1\n");
			ImpMatriz(&m1);
			printf("Matriz 2\n");
			ImpMatriz(&m2);
			printf("Voce deseja verificar a simetria da Matriz 1 ou 2?\n");
			scanf("%d", &op);
			printf("\n");
			if(op == 1){
				simetriaMatriz(&m1);
			}else{
				if(op == 2){
					simetriaMatriz(&m2);
				}else{
					printf("Nao existe essa matriz!\n");
				}
			}
            break;
		case 6:
			return;
		}
    }
    }
}

void menuVetor(){ //Função que contem o menu dos Vetores
	int a,b;
	vetor v1,v2;
	printf("\nVetor 1:\n");
	lerVetor(&v1);
	printf("\nVetor 2:\n");
	lerVetor(&v2);
	while (1){
        printf("\nSelecione uma das opcoes: \n\n");
	 	printf("[1] Somar Vetores\n");
	 	printf("[2] Produto Escalar de Vetores\n");
	 	printf("[3] Produto de um Vetor por um Escalar\n");
		printf("[4] Voltar\n\n");
	 	scanf("%i",&a);
	switch (a){
	 	case 1 :{
	 		if(v1.d == v2.d){
			somaVetor(v1,v2);
			}else{
				printf("\nNao eh possivel somar vetores de dimensoes diferentes\n");
			}
			break;
		}
		case 2:{
			if(v1.d == v2.d){
			escVetor(v1,v2);
			}else{
					printf("\nNao eh possivel fazer o produto escalar vetores de dimensoes diferentes\n");
			}
			break;
			}
		case 3:{
			int op;
			printf("\nVetor 1: ");
			ImpVetor(&v1);
			printf("\nVetor 2: ");
			ImpVetor(&v2);
			printf("\nVoce deseja multiplicar o Vetor 1 ou 2?\n");
			scanf("%d", &op);
			printf("\n");
			if(op == 1){
				multVetor(v1);
			}else{
				if(op == 2){
					multVetor(v2);
				}else{
					printf("Nao existe esse vetor!\n");
				}
			}
			break;
		}
		case 4:
			return;
		}
	}
}

void menuPrincipal(){ //Função que contem o menu principal do programa
    int p;
    while(1){
    printf("Selecione entre:\n\n"
		   "[1] Operacoes com Vetores\n"
		   "[2] Operacoes com Matrizes\n"
		   "[3] Encerrar Programa\n\n");
    scanf("%i",&p);
    switch(p){
        case 1:{
            menuVetor();
            break;
        }
        case 2:{
            menuMatriz();
            break;
        }
        case 3:{
			return;
            break;
        }
    }
}
}

int main(){ 
	menuPrincipal();
	return 0;
}
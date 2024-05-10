/* =====UNIVERSIDADE ESTADUAL DO CEARÁ=====
		====ALUNOS==============MATRICULAS=
		WILIAM CALMON DOS SANTOS - 1357330 
		HECTOR SOARES DE CARVALHO - 1357322		
        SAMUEL HOLANDA NEPOMUCENO - 1357445
        ===================================
*/
#include "menu.h" //Inclusão da biblioteca

void lerVetor(vetor *V){ //Função para ler os vetores
    int i;
    printf("Digite a dimensao do vetor:\n");
    scanf("%i", &V->d);
    for(i=0;i<V->d;i++){
		printf("Digite a componente %d do vetor\n", i+1);
        scanf("%f", &V->vet[i]);
    }
    printf("\n");
}

void somaVetor(vetor V, vetor V1){ //Função para realizar a soma entre os vetores
    int i, j;
    float VR[MAX];
    for(i=0;i<V.d;i++){
        VR[i] = V.vet[i] + V1.vet[i];
    }
	printf("\nO resultado eh igual a: ");
    for(i=0;i<V.d;i++){
        printf("%.1f ", VR[i]);
    }
    printf("\n\n");

}
void multVetor(vetor V){ //Função para realizar a multiplicação de um dos vetores por escalar
    int i;
	float escalar;
    float VR[MAX];

    printf("Digite o escalar:\n");
    scanf("%f", &escalar);
    printf("\n");

    for(i=0;i<V.d;i++){
        VR[i]=V.vet[i] * escalar;
    }

    for(i=0;i<V.d;i++){
        printf("%.1f ", VR[i]);
    }
	printf("\n");
}

void escVetor(vetor V, vetor V1){ //Função para realizar o produto escalar entre os 2 vetores
    int i;
    float aux = 0;
    float VR[MAX];

    for(i=0;i<V.d;i++){
        VR[i]=V.vet[i]*V1.vet[i];
        aux+=VR[i];
    }

    printf("\nO produto escalar entre os vetores eh %.1f ", aux);
    printf("\n");
}

void ImpVetor(vetor *V){ //Função para imprimir os vetores que poderão ser reutilizados
	int i;
	printf("\n");
	for(i=0;i<V->d;i++){
			printf("%.1f  ", V->vet[i]);
		}
		printf("\n");
}

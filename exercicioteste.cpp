#include <stdio.h>
int main (){
	char estado = 's';
	char codigo = 's';
	char cidade [50] = "espirito santo";
	int populacao = 12345;
	int pontos = 6789;
	float area =101112;
	float pib = 101314;
	
	printf("Digite o estado: \n");
	scanf("%s", &estado);
	
	printf("Digite o codigo: \n");
	scanf("%s", &codigo);
	
	printf("Digite a cidade: \n");
	scanf("%s", &cidade);
	
	printf("Digite a populacao: \n");
	scanf("%d", &populacao);
	
	printf("Digite os pontos: \n");
	scanf("%d", &pontos);
	
	printf("Digite a area: \n");
	scanf("%f", &area);
	
	printf("Digite o pib: \n");
	scanf("%f", &pib);
	
	return 0;	
}

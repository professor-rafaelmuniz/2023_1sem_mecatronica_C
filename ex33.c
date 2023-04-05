#include <stdio.h>

int main(){
	
	int valor, caixa = 1000;
	
	printf("Digite o valor desejado: ");
	scanf("%i", &valor);
	
	if (valor <= caixa){
		if (valor % 10 == 0){
			int notas50 = 0, resto50, notas10;
			notas50 = valor / 50;
			resto50 = valor % 50;
			if (resto50 % 10 == 0){
				//int notas10;
				notas10 = resto50 / 10;
				printf("Notas de 50: %i\nNotas de 10: %i", notas50, notas10);
				caixa = caixa - valor;
			} 
		}else{
			printf("Nao e possivel sacar o dinheiro: A");
		}
	}else{
			printf("Nao e possivel sacar o dinheiro: B");
	}
	
	
	
	
	
}

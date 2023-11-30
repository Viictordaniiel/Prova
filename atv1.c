#include <stdio.h>


int calcularoperacaçao(int num1, int num2){
	if(num1 < num2){
		return num1 + num2;
		
	}else if (num1 == num2){
		retunr num1 - num2;
		
	}else{
	
	return num1 * num2;
	 
	}
}

int main(){
	int resultado = calcularresultado(5,8);
	printf("Resultado: %d\n", resultado);
	restun 0;
}


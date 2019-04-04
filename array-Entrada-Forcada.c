#include <stdio.h>
#include <stdlib.h>

int main(){
	int $vet[10], $i = 0, $recipiente = 0;

	for($i = 0; $i < 10; $i++){
		printf("Digite um numero para a posicao [%d] => ", $i);
		scanf("%d", &$recipiente);

		if ($recipiente != 0){
			$vet[$i] = $recipiente;
		}
		else if($recipiente == 0){
			while($recipiente == 0){
				printf("Digite um numero diferente de zero\n: ");
				scanf("%d", &$recipiente);
			}
			$vet[$i] = $recipiente;
		}
	}
	for($i = 0; $i < 10; $i++){
		printf("%d  => %d\n", $i, $vet[$i]);
	}
	system("pause");
	return(0);
}

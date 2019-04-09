#include <stdio.h>
#include <stdlib.h>

/* função principal 'main' */
int main() {
	/* cria e limpa os espaços de memória */
	float $nota1=0, $nota2=0, $nota3=0, $media=0;

	printf("Digite 3 notas para receber uma media:\n");
	/* obtenção das 3 notas */
	printf("1 => ");
	scanf("%f", &$nota1);
	printf("2 => ");
	scanf("%f", &$nota2);
	printf("3 => ");
	scanf("%f", &$nota3);
	/* o calculo da média */
	$media = ($nota1+$nota2+$nota3)/3;

	printf("\nSua media: %.2f.\n\n", $media);

	system("pause");
	return(0);
}
/* Contador de palavras
 *
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 */

#include <stdio.h>

int main() {

  char c;
  int n; // contador de letras
  int p; // contador de palavras

  n = 0;
  p = 0;
  c = 1;

  while (c != '\n') {
    scanf("%c", &c);
    if((c <= 'z' && c>= 'a') || (c <= 'Z' && c>= 'A')) n++;
    else if(n>0){
      p++;
      n = 0;
    }
  }

  printf("%d\n", p);
  return 0;
}

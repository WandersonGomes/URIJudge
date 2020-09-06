//PROBLEM 1577
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1577
/*
Obs.:
Pesquise sobre primos de fermat e metodo de Gauss
*/
#include <stdio.h>

#define MAX 208

//POLIGONOS QUE PODEM SER ESCRITO COMR REGUA E COMPASSO
long long int poligonos[MAX] = {1, 2, 3, 4, 5, 6, 8, 10, 12, 15, 16, 17, 20, 24, 30, 32, 34, 40, 48, 51, 60, 64, 68, 80, 85, 96, 102, 120, 128, 136, 160, 170, 192, 204, 240, 255, 256, 257, 272, 320, 340, 384, 408, 480, 510, 512, 514, 544, 640, 680, 768, 771, 816, 960, 1020, 1024, 1028, 1088, 1280, 1285, 1360, 1536, 1542, 1632, 1920, 2040, 2048, 2056, 2176, 2560, 2570, 2720, 3072, 3084, 3264, 3840, 3855, 4080, 4096, 4112, 4352, 4369, 5120, 5140, 5440, 6144, 6168, 6528, 7680, 7710, 8160, 8192, 8224, 8704, 8738, 10240, 10280, 10880, 12288, 12336, 13056, 13107, 15360, 15420, 16320, 16384, 16448, 17408, 17476, 20480, 20560, 21760, 21845, 24576, 24672, 26112, 26214, 30720, 30840, 32640, 32768, 32896, 34816, 34952, 40960, 41120, 43520, 43690, 49152, 49344, 52224, 52428, 61440, 61680, 65280, 65535, 65536, 65537, 65792, 69632, 69904, 81920, 82240, 87040, 87380, 98304, 98688, 104448, 104856, 122880, 123360, 130560, 131070, 131072, 131074, 131584, 139264, 139808, 163840, 164480, 174080, 174760, 196608, 196611, 197376, 208896, 209712, 245760, 246720, 261120, 262140, 262144, 262148, 263168, 278528, 279616, 327680, 327685, 328960, 348160, 349520, 393216, 393222, 394752, 417792, 419424, 491520, 493440, 522240, 524280, 524288, 524296, 526336, 557056, 559232, 655360, 655370, 657920, 696320, 699040, 786432, 786444, 789504, 835584, 838848, 983040, 983055, 986880};

//FUNCAO QUE VERIFICA SE EH POSSIVEL A CONSTRUCAO
int pode(long long int numero, int inicio, int fim) {
   int meio = (inicio+fim)/2;
   if (inicio <= fim) {
      if (poligonos[meio] == numero) {
         return 1;
      } else if (poligonos[meio] > numero) {
         return pode(numero, inicio, meio-1);
      } else {
         return pode(numero, meio+1, fim);
      }
   }
   return 0;
}

//PROGRAMA PRINCIPAL
int main() {
   long long int numero_testes = 0, numero_lados = 0, i = 0;
   
   scanf("%lld", &numero_testes);

   for (i = 0; i < numero_testes; i++) {
      scanf("%lld", &numero_lados);

      if (pode(numero_lados, 0, MAX-1)) {
         printf("Yes\n");
      } else {
         printf("No\n");
      }
   }

   return 0;
}
/***************************************
* 22Fa - Lab03 *
* Author: Liu, Chenxi *
* Email: w1nfred@my.yorku.ca *
* EECS username: w1nfred *
* Yorku Student #: 218665075
****************************************/

#include <stdio.h>

#define AlphaVal 100
extern void printBinary(int n);

int main() {

  int r, g,b;
  unsigned int rgb_pack;
  int r_unpack, g_unpack, b_unpack;
  int alpha = AlphaVal;

  printf("enter R value (0~255): ");
  scanf("%d",&r);
  printf("enter G value (0~255): ");
  scanf("%d",&g);
  printf("enter B value (0~255): ");
  scanf("%d",&b);

  while(! (r<0 || g<0 || b <0) )
  {		
     printf("A: %d\t", alpha);  printBinary(alpha); printf("\n");
     printf("R: %d\t", r);  printBinary(r); printf("\n");
     printf("G: %d\t", g);  printBinary(g); printf("\n"); 
     printf("B: %d\t", b);  printBinary(b); printf("\n"); 

    /* now do packing */
    r = (r & 0x000000FF) << 16; //255=2^8-1, 16777216=2^24;
    g = (g & 0x000000FF) << 8;
    b =  b & 0x000000FF;
    alpha = (alpha & 0x000000FF) << 24;

    rgb_pack = (r|g|b|alpha);


     //printf("\nPacked: value %d\t", rgb_pack); printBinary(rgb_pack);printf("\n");
     printf("\nPacked:\t"); printBinary(rgb_pack);printf(" (%d)\n", rgb_pack);

     printf("\nUnpacking  ......\n");
     r=g=b=-1;

    /* now do unpacking */
    r_unpack = (rgb_pack >> 16 & 0x000000FF);
    g_unpack = (rgb_pack >> 8 & 0x000000FF);
    b_unpack = (rgb_pack & 0x000000FF);


     printf("R: "); printBinary(r_unpack); printf(" (%d, %#o, %#X)\n", r_unpack, r_unpack, r_unpack);
     printf("G: "); printBinary(g_unpack); printf(" (%d, %#o, %#X)\n", g_unpack, g_unpack, g_unpack);
     printf("B: "); printBinary(b_unpack); printf(" (%d, %#o, %#X)\n", b_unpack, b_unpack, b_unpack);
     printf("------------------------------------\n");

     printf("enter R value (0~255): ");
     scanf("%d",&r);
     printf("enter G value (0~255): ");
     scanf("%d",&g);
     printf("enter B value (0~255): ");
     scanf("%d",&b);
     alpha = AlphaVal;
  }

}


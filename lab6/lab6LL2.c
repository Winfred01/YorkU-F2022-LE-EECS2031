
#include <stdio.h>
#include <stdlib.h>

void insertBegining(int);
int leng();
int get(int);

struct node { 
   int data;
   struct node * next;
};

struct node * head; 

main()
{
   head = NULL;

   insertBegining(100);
   insertBegining(200);
   insertBegining(300);
   insertBegining(400);   
   insertBegining(500);

   int i; 
   struct node * cur;
   for(cur= head; cur != NULL; cur= cur->next)
     printf("%d ", cur->data);
   printf("\n");

   printf("len: %d\n", leng() );
   printf("get(0): %d\n", get(0));
   printf("get(1): %d\n", get(1));
   printf("get(3): %d\n", get(3));

}   

/* insert at the begining of the list*/
void insertBegining(int dat){
   struct node *newNode;
   newNode = malloc(sizeof(struct node));

   newNode ->data = dat;
   newNode ->next = head;
   
   head = newNode;
}

/*  'length' (# of nodes) of the list */
int leng(){ 
   int num = 0;
   struct node * cur;
   for(cur= head; cur != NULL; cur= cur->next)
     num++;
   return num;
}

/* get value at index 'index' */
int get(int index){
   if(index > leng()-1) return;
   int i = 0; int num = 0;
   struct node * cur;

   for(cur= head; i<=index; cur= cur->next){
     num = cur->data;
     i++;
   }
   
   return num;
}

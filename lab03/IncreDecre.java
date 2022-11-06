public class IncreDecre{ 
 public static void main(String[] args)
{
 int i=1;
 i++; 
 System.out.printf("i is %d\n", i);

 i=1;
 ++i;
 System.out.printf("i is %d\n-----------\n", i);

 i=1;
 System.out.printf("i is %d\n", i++);
 System.out.printf("i is %d\n------\n", i);
 i=1;
 System.out.printf("i is %d\n", ++i);
 System.out.printf("i is %d\n-----------\n",i);

 i=1;
 int y = i++;
 System.out.printf("i is %d, y is %d\n", i, y);

 i=1;
 y = ++i;
 System.out.printf("i is %d, y is %d\n-----------\n", i, y);

 int arr[] = new int[10];
 int k=0; int v=100;
 while (k<10)
   arr[k++] = v--;

 int index=0;
 for(index=0; index<10; index++)
    System.out.printf("arr[%d]: %d\n", index,arr[index]);
 }

}

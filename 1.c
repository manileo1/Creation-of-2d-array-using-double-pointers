#define num  4

int main()
{
   int **p;

   p = malloc(sizeof(int*)*num);

   if (!p)
   {
      printf ("Allocation failed.\n");
      exit(0);
   }

      int i;

   for (i=0; i<num; i++)
   {
      *(p+i) = malloc(sizeof(int)*4);

      if (!*(p+i))
      {
         printf ("Allocation failed.\n");
         exit(0);
      }
   }


   return 0;
}

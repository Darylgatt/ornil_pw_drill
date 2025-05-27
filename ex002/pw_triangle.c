#include <unistd.h>

void pw_triangle(void){

     
     int i = 1;
     int j;

     while(i<=3)
     {
            j = 1;
           while(j<=i)
           {

            write(1, "a", 1);
            j++;
           }
           write(1, "\n", 1);
           
           i++;
     }

}

    
#include <stdio.h>
void printer(int *p, int *q);


//created a struct
typedef struct
{
  float x,y,z;

} COORD;

COORD* assign_val() //returns a pointer of type COORD
{
  COORD a ;
  a.x =1.3;
  a.y =2.7;
  a.z = 3.4;// populate a of struct type COORD
            //returns address of a, so whatever is done in the function remains valid
  return &a;
}


int main()
{
  int t=100;
  int *p;
  int *q=&t;
  p=&t;
  //*p say as goto address stored in p
  //*p is the value stored at the memory address stored in the block p
  //t   |10|   at address 12345
  //p   |12345| at address 12353
  //*p  dereferences the address stored at p and fetches the value at that address.
  //that is why while running this code, only difference in o/p is values of &p &q are different.
  // because they are different pointer vars at different memory locations
  printf("&t = %u\t, *p = %d\t, &p = %u\t, p = %u\t\n",&t, *p, &p, p);

  printf("&t = %u\t, *q = %d\t, &q = %u\t, q = %u\t\n",&t, *q, &q, q);

  //////////////////arithmatic////////////////////////////


  int n[3] = {12,22,43};
  int *int_p = n; // for array , u can use name of array as reference to the start of the block of memory, where, array resides
  printf("++*int_p=%u\n", ++*int_p);//prints 13, * has preced over +, so forst derefer value at int_p, ie 12, the ++12 = 13

  printf("*++int_p=%u\n", *++int_p);//prints 22, *(++int_p) = *(&(n+1)) = 22, now int_p points to int_p+1, ie 4 bytes agter int_p,
                                    //now, int_p = &n[1]

  printf("*(int_p+1)=%u\n", *(int_p+1));//prints 43,

  printf("*(int_p+1)=%u\n", *(int_p+2));//prints garbage, since out of array print.


  //////////////////////pass by reference////////////////////////////
  int a=1, b=10;
  printer(&a, &b);
  printf("a=%d,b=%d\n",a,b);
  /////////////////return struct//////////////////////////////////
  //check out the struct and the function assign_val() at the top.
  //
  COORD *point; // declares a pointer of type COORD
  point = assign_val(); // assign_val returns a 'pointer' to COORD XXX not a COORD object, so assigned to a pointer

  printf("x=%f,y=%f,z=%f\n", (point)->x, point->y, point->z); // xyz are accessed in this fashion

  ///////////////////////////////////////////////////////alternate techniue
  COORD pnt;
  pnt = *assign_val();
  printf("x=%f,y=%f,z=%f\n", pnt.x, pnt.y, pnt.z);
  // so use '->' for accesing struct vars with a object pointer, 
  // so use '.' for accesing struct vars with a normal object,
  return 0;
} 

void printer(int * p , int *q){

  (*p)++;
  (*q)++;
}

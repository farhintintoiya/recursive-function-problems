#include <stdio.h>
#include <math.h>

void natural(int );
void natural(int n){
   if(n == 1){
    printf("%d", n);
   } else {
     for(int i = 1; i <= n; i++){
        printf("%d ", i);
     }
   }
}
int main(){

   int x;
   printf("Enter the number : ");
   scanf("%d", &x);

   natural(x);

return 0;
}

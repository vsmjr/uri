#include <stdio.h>
#include <iostream>


int main() {
 
  int a, b;
  scanf("%d", &a);
  //std::cout << "porra " << std::endl;
  while(a!=0){
    int m=0, j=0, i;
    //puts("Asdasd");
    for(i = 1; i <= a; i++){
      scanf("%d", &b);
      //puts("eoq");
      if(b==1){ j++;
      }
      else{ m++;
      }
    }
    printf("Mary won %d times and John won %d times\n", m, j);
    scanf("%d", &a);
    
  }

  return 0;
}

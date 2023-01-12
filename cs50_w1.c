#include <stdio.h>
#include <stdlib.h>
void piramit_ciz(int satir){


 int i,j,k,y;
  for(i=0;i<satir;i++){
    for(j=0;j<satir-i;j++){
        printf(" ");
    }
    for(j=0;j<2i-1;j++){
        printf("");
    }
    printf("\n");
  }
  for(k=5;k>=1;k--){
    for(y=1;y<=5-k;y++){
        printf(" ");
    }
    for(y=1;y<=2k-1;y++){
        printf("");
    }
    printf("\n");


  }
}




int main()

{
    int satir,x,o;
    scanf("%d",&satir);
    for(x=0;x<3;x++){
    piramit_ciz(satir);
    }


    return 0;
}

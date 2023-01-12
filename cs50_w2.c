#include <stdio.h>
#include <stdlib.h>
//qwertyuopasdfghjklizxcvbnmQWERTYUOPASDFGHJKLIZXCVBNM
/* ilk olarak alfabe tan mla sonra s ralamas  farkl  olan bir alfabe sifre arrayine ata.kullan c dan kelime iste ve o kelimenin uzunlu unu bul
ve ilk for d ng s n  o uzunluk kadar  al  t 
alfabede 53 karakter oldu u i in for d ng s n  53 kere  al  t r.bu for d ng s  i inde ikisinin de erlerini 0 dan ba lat ve karakter degerleri
e it olanlar  yeni kelimeye aktar.  rnek b harfi alfabede 2. sifre de d harfi 2. bu iki harfini yerlerini de i tir yeni kelimede
*/


int main()
{
    char alf[53]={"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"} ;
    char kelime[15],yenikelime[15],sifre[52];
    int i,k,length;
    printf("sifeli alfabeyi gir");
    scanf("%s",&sifre[53]);
    printf("kelime gir");
    scanf("%s",&kelime);
    length = strlen(kelime);
    for(i=0; i<length; i++){
        for(k=0; k<52; k++){
            if(kelime[i]==alf[k]){
                yenikelime[i]=sifre[k];


            }
        }
    }
    printf("sifreli kelime:%s",yenikelime);


    return 0;

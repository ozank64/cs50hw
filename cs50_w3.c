	#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i;
    int ozan = 0, alp = 0, ahmet = 0,tur_sayisi;
    char winner[6];
    printf("kaç oy var 1 ile 9 arası bir sayi seciniz");
    scanf("%d",&tur_sayisi);


    for (i = 0; i < tur_sayisi; i++)
    {
        char first[6];
        char second[6];
        char third[6];

        printf("Rank 1: ");
        scanf("%s", first);

        printf("Rank 2: ");
        scanf("%s", second);

        printf("Rank 3: ");
        scanf("%s", third);

        if (strcmp(first, "OZAN") == 0)
        {
            ozan += 3;
        }
        if (strcmp(first, "ALP") == 0)
        {
            alp += 3;
        }
        if (strcmp(first, "AHMET") == 0)
        {
            ahmet += 3;
        }
        if (strcmp(second, "ALP") == 0)
        {
            alp += 2;
        }
        if (strcmp(second, "AHMET") == 0)
        {
            ahmet += 2;
        }
        if (strcmp(second, "OZAN") == 0)
        {
            ozan += 2;
        }
        if (strcmp(third, "AHMET") == 0)
        {
            ahmet += 1;
        }
        if (strcmp(third, "OZAN") == 0)
        {
            ozan += 1;
        }
        if (strcmp(third, "ALP") == 0)
        {
            alp += 1;
        }
    }
    if (ozan > alp && ozan > ahmet)
    {
        strcpy(winner, "OZAN");
    }
    if (alp > ozan && alp > ahmet)
    {
        strcpy(winner, "ALP");
    }
    if (ahmet > alp && ahmet > ozan)
    {
        strcpy(winner, "AHMET");
    }

    if (ozan == alp && ozan > ahmet)
    {
        strcpy(winner, "BERABERE");
    }
    if (ozan == ahmet && ozan > ahmet)
    {
        strcpy(winner, "BERABERE");
    }
    if (ahmet == alp && ozan < ahmet)
    {
        strcpy(winner, "BERABERE");
    }
    printf("%s\n", winner);
    return 0;
}













2. bu 




#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void ozanahmetcompare()
{
    int i;
    int ozanahmet,ahmetozan;
    int ozan = 0, alp = 0, ahmet = 0,tur_sayisi;
    char winner[6];
    if(ozan > ahmet)
    {
        ozanahmet =  ozanahmet+1;

    }
    if(ahmet > ozan)
    {
        ahmetozan = ahmetozan +1;


    }
}
    void ozanalpcompare()
    {
        int i;
        int ozanahmet,ahmetozan,ozanalp,alpozan,ahmetalp,alpahmet;
        int ozan = 0, alp = 0, ahmet = 0,tur_sayisi;
        char winner[6];
        if(ozan > alp)
        {
            ozanalp =  ozanalp+1;

        }
        if(alp > ozan)
        {
            alpozan = alpozan +1;


        }
    }
        void ahmetalpcompare()
        {
            int i;
            int ozanahmet,ahmetozan,ozanalp,alpozan,ahmetalp,alpahmet;
            int ozan = 0, alp = 0, ahmet = 0,tur_sayisi;
            char winner[6];
            if(ahmet > alp)
            {
                ahmetalp =  ahmetalp+1;

            }
            if(alp > ahmet)
            {
                alpahmet = alpahmet +1;


            }




        }

        int main()
        {
            int i;
            int ozanahmet =0,ahmetozan = 0,ozanalp = 0,alpozan = 0,alpahmet = 0,ahmetalp =0;
            int ozan = 0, alp = 0, ahmet = 0,tur_sayisi;
            char winner[6];
            printf("kaç oy var 1 ile 9 arası bir sayi seciniz");
            scanf("%d",&tur_sayisi);


            for (i = 0; i < tur_sayisi; i++)
            {
                char first[6];
                char second[6];
                char third[6];

                printf("Rank 1: ");
                scanf("%s", first);

                printf("Rank 2: ");
                scanf("%s", second);

                printf("Rank 3: ");
                scanf("%s", third);

                if (strcmp(first, "OZAN") == 0)
                {
                    ozan = 3;
                }
                if (strcmp(first, "ALP") == 0)
                {
                    alp = 3;
                }
                if (strcmp(first, "AHMET") == 0)
                {
                    ahmet = 3;
                }
                if (strcmp(second, "ALP") == 0)
                {
                    alp = 2;
                }
                if (strcmp(second, "AHMET") == 0)
                {
                    ahmet = 2;
                }
                if (strcmp(second, "OZAN") == 0)
                {
                    ozan = 2;
                }
                if (strcmp(third, "AHMET") == 0)
                {
                    ahmet = 1;
                }
                if (strcmp(third, "OZAN") == 0)
                {
                    ozan = 1;
                }
                if (strcmp(third, "ALP") == 0)
                {
                    alp = 1;
                }
                ozanahmetcompare();
                ozanalpcompare();
                ahmetalpcompare();









            }
            if (ozanahmet > ahmetozan && ozanalp > alpozan)
            {
                strcpy(winner, "OZAN");
            }
            if (alpozan > ozanalp && alpahmet > ahmetalp)
            {
                strcpy(winner, "ALP");
            }
            if (ahmetalp > alpahmet && ahmetozan > ozanahmet)
            {
                strcpy(winner, "AHMET");
            }

            printf("%s\n", winner);
            return 0;
        }
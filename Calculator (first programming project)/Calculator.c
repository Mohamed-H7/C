#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,choice,num,us,result,kok,rt,log;

    printf("-----Welcome-----\n");
    printf("Hesap makinesi 1.7v");
    devam:
    printf("\nBasit (1) ve gelismis (2) iki modu var.");
    printf("\nModu seciniz 1 veya 2: ");
    scanf("%d",&choice);

    switch (choice)
    {
    //Basit modun kodu buradan başlar//
        case 1:
            printf("\n(Basit Modu)");
            printf("\n- arti + (1)");
            printf("\n- eksi - (2)");
            printf("\n- carpma * (3)");
            printf("\n- bolme / (4)");
            printf("\nislemi seciniz : ");
            scanf("%d",&choice);

    switch (choice)
        {
        case 1:
            printf("\nbirinci numarayi girin: ");
            scanf("%d",&a);
            printf("ikinci numarayi girin: ");
            scanf("%d",&b);
            printf("\n------------Sonuc------------");
            printf("\n%d + %d = %d \n",a,b,a+b);
            printf("-----------------------------\n");

        break;

        case 2:
            printf("\nbirinci numarayi girin: ");
            scanf("%d",&a);
            printf("ikinci numarayi girin: ");
            scanf("%d",&b);
            printf("\n------------Sonuc------------");
            printf("\n%d - %d = %d \n",a,b,a-b);
            printf("-----------------------------\n");

        break;

        case 3:
            printf("\nbirinci numarayi girin: ");
            scanf("%d",&a);
            printf("ikinci numarayi girin: ");
            scanf("%d",&b);
            printf("\n------------Sonuc------------");
            printf("\n%d * %d = %d \n",a,b,a*b);
            printf("-----------------------------\n");

        break;

        case 4:
            printf("\nbirinci numarayi girin: ");
            scanf("%d",&a);
            printf("ikinci numarayi girin: ");
            scanf("%d",&b);
            printf("\n------------Sonuc------------");
            printf("\n%d / %d = %d \n",a,b,a/b);
            printf("-----------------------------\n");

        break;

        }
        break;

        //Gelismis modun kodu buradan başlar//

        case 2:
            printf("\n(Gelismis Modu)");
            printf("\n- Basit modu (1)");
            printf("\n- Karekok modu (2)");
            printf("\n- Us alma modu (3)");
            printf("\n- Logritma(10) modu (4)");
            printf("\nislemi seciniz : ");
            scanf("%d",&choice);

    switch (choice)
        {
        case 1:
            printf("\n(Basit Modu)");
            printf("\n- arti + (1)");
            printf("\n- eksi - (2)");
            printf("\n- carpma * (3)");
            printf("\n- bolme / (4)");
            printf("\nislemi seciniz : ");
            scanf("%d",&choice);

    switch (choice)
            {
        case 1:
            printf("\nbirinci numarayi girin: ");
            scanf("%d",&a);
            printf("ikinci numarayi girin: ");
            scanf("%d",&b);
            printf("\n------------Sonuc------------");
            printf("\n%d + %d = %d \n",a,b,a+b);
            printf("-----------------------------\n");

        break;

        case 2:
            printf("\nbirinci numarayi girin: ");
            scanf("%d",&a);
            printf("ikinci numarayi girin: ");
            scanf("%d",&b);
            printf("\n------------Sonuc------------");
            printf("\n%d - %d = %d \n",a,b,a-b);
            printf("-----------------------------\n");

        break;

        case 3:
            printf("\nbirinci numarayi girin: ");
            scanf("%d",&a);
            printf("ikinci numarayi girin: ");
            scanf("%d",&b);
            printf("\n------------Sonuc------------");
            printf("\n%d * %d = %d \n",a,b,a*b);
            printf("-----------------------------\n");

        break;

        case 4:
            printf("\nbirinci numarayi girin: ");
            scanf("%d",&a);
            printf("ikinci numarayi girin: ");
            scanf("%d",&b);
            printf("\n------------Sonuc------------");
            printf("\n%d / %d = %d \n",a,b,a/b);
            printf("-----------------------------\n");

        break;
            }
        break;

        case 2:
            printf("\nnumarayi girin: ");
            scanf("%d",&kok);

            rt = sqrt (kok);
            printf("\n------------Sonuc------------");
            printf("\nkarekoku %d = %d\n",kok,rt);
            printf("-----------------------------\n");

        break;

        case 3:
            printf("\nnumarayi girin: ");
            scanf("%d",&num);
            printf("us girin: ");
            scanf("%d",&us);
                if(us < 0)
                    {
                        printf("\nnegatif us olmaz\n");
                        exit(EXIT_FAILURE);
                    }
                result = 1;
                for(int i = 0 ; i < us ; ++i)
                    {
                        result = result * num ;
                    }
            printf("\n------------Sonuc------------");
            printf("\n%d^(%d) = %d \n", num , us , result);
            printf("-----------------------------\n");

        break;

        case 4:
            printf("\nnumarayi girin: ");
            scanf("%d",&log);

            double x,ret;
            x = ("%d",log);
            ret = log10(x);
            printf("\n------------Sonuc------------");
            printf("\nlog10(%lf) = %lf\n", x, ret);
            printf("-----------------------------\n");

        break;

        }
        break;

        }

            printf("\ndevam etmek istiyor musunuz?");
            printf("\nEvet (1)");
            printf("\nHayir (2)");
            printf("\nseciniz : ");
            scanf("%d",&choice);
    switch (choice)
        {
        case 1:
        goto devam;
        break;

        case 2:

        break;
        }

    ///////////Bitti/////////// M
    printf("\n------------------------------");
    printf("\nHesap makinesini kullandiginiz icin tesekkurler");
    printf("\nThanks for using the calculator");
    printf("\n------------------------------\n");

    return 0;
}

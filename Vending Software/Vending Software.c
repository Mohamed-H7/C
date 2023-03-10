#include <stdio.h>
#include <stdlib.h> 

int main()
{
    int sec;
    int bardak = 0,fincan = 0,bardak_p = 0,sise = 0;
    int ogrenci,age;
    printf("-----Otomat makinesine hos geldiniz-----\n");
    printf(">> Mevcut urunler:-\n");
    printf("- Su (1 lira)\n");
    printf("- Cay (2 lira)\n");
    printf("- Kahve (5 lira)\n");
    printf("- Portakal suyu (7 lira)\n");
    printf("----------------------------------------\n");
    printf("Notlar:-\n");
    printf("- Ogrencilere %%10 indirim var\n");
    printf("- 65 yas ustu icin bir bardak ucretsiz cay\n");
    printf("----------------------------------------\n");

    //Sorular bölümü// 
    printf("- Su almak ister misiniz?\n");
    printf("Evet [1]\n");
    printf("Hayir [0]\n");
    printf("> ");
    scanf("%d",&sec);
    switch (sec)
        {
        case 1:
            printf("Kac sise su istiyorsunuz?\n");
            printf("> ");
            scanf("%d",&sise);
            break;
        case 0:
            break;}
    printf("\n");
    printf("- Cay almak ister misiniz?\n");
    printf("Evet [1]\n");
    printf("Hayir [0]\n");
    printf("> ");
    scanf("%d",&sec);
    switch (sec)
        {
        case 1:
            printf("Kac bardak cay istersiniz?\n");
            printf("> ");
            scanf("%d",&bardak);
            break;
        case 0:
            break;}

    printf("\n");
    printf("- Kahve almak ister misiniz?\n");
    printf("Evet [1]\n");
    printf("Hayir [0]\n");
    printf("> ");
    scanf("%d",&sec);
    switch (sec)
        {
        case 1:
            printf("Kac fincan kahve istersiniz?\n");
            printf("> ");
            scanf("%d",&fincan);
            break;
        case 0:
            break;}

    printf("\n");
    printf("- portakal suyu almak ister misiniz?\n");
    printf("Evet [1]\n");
    printf("Hayir [0]\n");
    printf("> ");
    scanf("%d",&sec);
    switch (sec)
        {
        case 1:
            printf("Kac bardak portakal suyu istersiniz?\n");
            printf("> ");
            scanf("%d",&bardak_p);
            break;
        case 0:
            break;}
    //################//
    //Sorular 2 bölümü//
    printf("----------------------------------------\n");
    printf("- ogrenci misiniz?\n");
    printf("Evet [1]\n");
    printf("Hayir [2]\n");
    printf("> ");
    scanf("%d",&ogrenci);
    printf("- Kac yasindasin?\n");
    printf("> ");
    scanf("%d",&age);
    printf("----------------------------------------\n");
    //################//
    //fiyat hesaplama//
    int toplam;
    float indirim,toplam2;
    toplam = sise * 1 + bardak * 2 + fincan * 5 + bardak_p * 7;
    if (ogrenci == 1)
        {
        indirim = toplam * 0.1;
        toplam2 = toplam - indirim;
        }
    //##############//
    if (age >= 65)
    {
        printf("(Satin alinan urunler)\n");
        printf("- %d kutu su\n",sise);
        printf("- %d bardak cay + Ucretsiz bir fincan cay\n",bardak);
        printf("- %d fincan kahve\n",fincan);
        printf("- %d su bardagi portakal suyu\n",bardak_p);
        printf("---------------\n");
    }
    else
    {
        printf("(Satin alinan urunler)\n");
        printf("- %d kutu su\n",sise);
        printf("- %d bardak cay\n",bardak);
        printf("- %d fincan kahve\n",fincan);
        printf("- %d su bardagi portakal suyu\n",bardak_p);
        printf("---------------\n");
    }
    printf("(Fiyat bilgisi)\n");
    printf("- indirimsiz fiyat: %dTL\n",toplam);
    printf("- indirim tutari: %.1fTL\n",indirim);

    if (ogrenci == 1)
    {
        printf("- Odenmesi gereken fiyat: %.1fTL\n",toplam2);
    }
    else
    {
        printf("- Odenmesi gereken fiyat: %dTL\n",toplam);
    }


    printf("----------------------------------------\n");
    return 0;
}

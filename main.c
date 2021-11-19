#include<stdio.h>

int main()
{

    //deklarasi integer
    int angka_1, angka_2, hasil, jari, i, n, j, pilih;
    float hasil_luas, phi = 3.14;
    //deklarasi char atau huruf
    char ulang, bentuk, febri;


            printf("================================\n");
            printf("|                              |\n");
            printf("|                              |\n");
            printf("|       FEBRI FIRMANSYAH       |\n");
            printf("|           X TKJ 1            |\n");
            printf("|                              |\n");
            printf("|                              |\n");
            printf("================================\n");
            printf("\n");
            //perulangan program
            do{
            //menu program
            printf("================================\n");
            printf("|                              |\n");
            printf("|         MENU PROGRAM         |\n");
            printf("|                              |\n");
            printf("================================\n");
            printf("1. Perkalian \n");
            printf("2. Luas Lingkaran\n");
            printf("3. Segitiga siku-siku\n");
            printf("4. Exit\n");
            //memililih program
            printf("Enter your choice [1,2,3,4]:  ");
            scanf(" %d",&pilih);


            //pilihan menu program
            switch(pilih)
            {
            //pilihan pertama perkalian
                case 1:
                //memilih nilai pertama
                    printf("Masukan nilai pertama: ");
                    scanf("%i",&angka_1);
                //memilih nilai kedua
                    printf("Masukan nilai kedua: ");
                    scanf("%i",&angka_2);
                //operasi perkalian
                    hasil = angka_1 * angka_2;
                //hasil
                    printf("Hasil dari %i x %i = %i\n", angka_1, angka_2, hasil);
                //perulangan melanjutkan atau tidak
                    printf("jika lanjut tekan sembangan, jika stop tekan [t]: ");
                    scanf(" %c", &ulang);
                    break;

            //pilihan kedua
                case 2:
                //menginput nilai r
                    printf("Masukan jari-jari lingkaran: ");
                    scanf("%i", &jari);
                //menghitung luas lingkaran
                    hasil_luas = phi * jari * jari;
                //hasil
                    printf("hasil dari luas lingkarang jika %.2f * %i * %i = %.2f \n", phi, jari, jari, hasil_luas);
                //perulangan melanjutkan atau tidak
                    printf("jika lanjut tekan sembangan, jika stop tekan [t]: ");
                    scanf(" %c", &ulang);
                    break;

                //pilihan ketiga
                case 3:
                printf("Masukan bentuk yang tersedia [  !-@-#-$-^-&-*-|  ]: ");
                scanf(" %c", &bentuk);

                if(bentuk == '*'){
                //menginput tinggi dari segitiga siku-siku
                    printf("Masukan tinggi segitiga: ");
                    scanf("%i", &n);
                //perulangan untuk baris pertama
                    for(i=1; i<=n; i++){
                //perulangan agar setiap baris bertambang
                        for(j=1; j<=i; j++){
                            printf("*");
                        }
                        printf("\n");
                    }
                } else if(bentuk == '#'){

                //menginput tinggi dari segitiga siku-siku
                    printf("Masukan tinggi segitiga: ");
                    scanf("%i", &n);
                //perulangan untuk baris pertama
                    for(i=1; i<=n; i++){
                //perulangan agar setiap baris bertambang
                        for(j=1; j<=i; j++){
                            printf("#");
                        }
                        printf("\n");
                    }

                }else if(bentuk == '$'){

                //menginput tinggi dari segitiga siku-siku
                    printf("Masukan tinggi segitiga: ");
                    scanf("%i", &n);
                //perulangan untuk baris pertama
                    for(i=1; i<=n; i++){
                //perulangan agar setiap baris bertambang
                        for(j=1; j<=i; j++){
                            printf("$");
                        }
                        printf("\n");
                    }

                }else if(bentuk == '!'){

                //program dibuat oleh febri firmansyah x tkj 1
                //menginput tinggi dari segitiga siku-siku
                    printf("Masukan tinggi segitiga: ");
                    scanf("%i", &n);
                //perulangan untuk baris pertama
                    for(i=1; i<=n; i++){
                //perulangan agar setiap baris bertambang
                        for(j=1; j<=i; j++){
                            printf("!");
                        }
                        printf("\n");

                        }
                    }else if(bentuk == '^'){

                //menginput tinggi dari segitiga siku-siku
                    printf("Masukan tinggi segitiga: ");
                    scanf("%i", &n);
                //perulangan untuk baris pertama
                    for(i=1; i<=n; i++){
                //perulangan agar setiap baris bertambang
                        for(j=1; j<=i; j++){
                            printf("^");
                        }
                        printf("\n");

                        }
                    }else if(bentuk == '@'){


                //program dibuat oleh febri firmansyah x tkj 1
                //menginput tinggi dari segitiga siku-siku
                    printf("Masukan tinggi segitiga: ");
                    scanf("%i", &n);
                //perulangan untuk baris pertama
                    for(i=1; i<=n; i++){
                //perulangan agar setiap baris bertambang
                        for(j=1; j<=i; j++){
                            printf("@");
                        }
                        printf("\n");

                        }
                    }else if(bentuk == '&'){


                //program dibuat oleh febri firmansyah x tkj 1
                //menginput tinggi dari segitiga siku-siku
                    printf("Masukan tinggi segitiga: ");
                    scanf("%i", &n);
                //perulangan untuk baris pertama
                    for(i=1; i<=n; i++){
                //perulangan agar setiap baris bertambang
                        for(j=1; j<=i; j++){
                            printf("&");
                        }
                        printf("\n");

                        }
                    }else if(bentuk == '|'){

                //menginput tinggi dari segitiga siku-siku
                    printf("Masukan tinggi segitiga: ");
                    scanf("%i", &n);
                //perulangan untuk baris pertama
                    for(i=1; i<=n; i++){
                //perulangan agar setiap baris bertambang
                        for(j=1; j<=i; j++){
                            printf("|");
                        }
                        printf("\n");

                        }
                    }else{
                printf("\Sorry bentuk yang kamu inginkan belum tersedia!!! \n");

                }
                //perulangan melanjutkan atau tidak
                    printf("jika lanjut tekan sembangan, jika stop tekan [t]: ");
                    scanf(" %c", &ulang);
                    break;

                case 4:
                printf("Thanks for trying my program, sorry because program still has many bugs!!!\n");
                //program dibuat oleh febri firmansyah x tkj 1
                printf("PART FOR PROGDAS FEBRI FIRMANSYAH X TEKNIK KOMPUTER JARINGAN 1, SMKN 1 CIREBON\n");
                exit(0);
                break;

                    default:
                    printf("Sorry menu tersebut belum tersedia!!!\n");

                }
            }
            //letak dari perulangan stop
                while(ulang != 't');
                printf("Thanks for trying my program, sorry because program still has many bugs!!!\n");
                //program dibuat oleh febri firmansyah x tkj 1
                printf("PART FOR PROGDAS FEBRI FIRMANSYAH X TEKNIK KOMPUTER JARINGAN 1, SMKN 1 CIREBON\n");
    return 0;
}

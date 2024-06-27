main(int argc, char **argv)
{
   png_uint_32 VAR1 = VAR2;
   format_list VAR3;
 const char *VAR4 = NULL;
 int VAR5 = 0;
 int VAR6 = 0;
 int VAR7 = 0;
 int VAR8 = 0;
 int VAR9;

   FUN1();
#if 0
   FUN2();
#endif
   FUN3(&VAR3);

 for (VAR9=1; VAR9<argc; ++VAR9)
 {
 const char *VAR10 = argv[VAR9];

 if (strcmp(VAR10, "") == 0)
         VAR5 = 1;
 else if (strcmp(VAR10, "") == 0)
 {
         memset(VAR11, 0, sizeof VAR11);
         memset(VAR12, 0, sizeof VAR12);
 }
 else if (strcmp(VAR10, "") == 0)
#        ifdef VAR13
            VAR1 |= VAR14;
#        else
 return 77; 
#        endif
 else if (strcmp(VAR10, "") == 0)
         VAR1 &= ~VAR14;
 else if (strcmp(VAR10, "") == 0)
#        ifdef VAR13
            VAR1 |= VAR15;
#        else
 return 77; 
#        endif
 else if (strcmp(VAR10, "") == 0)
         VAR1 &= ~VAR15;
 else if (strcmp(VAR10, "") == 0)
         VAR1 |= VAR16;
 else if (strcmp(VAR10, "") == 0)
         VAR1 &= ~VAR16;
 else if (strcmp(VAR10, "") == 0)
         VAR1 |= VAR17;
 else if (strcmp(VAR10, "") == 0)
         VAR1 &= ~VAR17;
 else if (strcmp(VAR10, "") == 0)
         VAR1 |= VAR18;
 else if (strcmp(VAR10, "") == 0)
         VAR1 |= VAR2;
 else if (strcmp(VAR10, "") == 0)
         VAR1 &= ~VAR2;
 else if (strcmp(VAR10, "") == 0)
         VAR1 |= VAR19;
 else if (strcmp(VAR10, "") == 0)
         VAR6 = 1;
 else if (strcmp(VAR10, "") == 0)
         VAR1 &= ~VAR18;
 else if (strcmp(VAR10, "") == 0)
         VAR1 |= VAR20;
 else if (strcmp(VAR10, "") == 0)
         VAR1 |= VAR21;
 else if (strcmp(VAR10, "") == 0)
         VAR1 &= ~VAR21;
 else if (strcmp(VAR10, "") == 0)
 {
 if (VAR9+1 < argc)
 {
 if (strlen(argv[++VAR9]) >= sizeof VAR22)
 {
               FUN4(VAR23);
               fprintf(VAR24, "",
                  argv[0], argv[VAR9]);
               FUN5(99);

             }
 
             

            strcpy(VAR22, argv[VAR9]);


          }
 
          else
 {
            FUN4(VAR23);
            fprintf(VAR24, "",
               argv[0], VAR10);
            FUN5(99);
 }
 }
 else if (strcmp(VAR10, "") == 0)
 {
 if (VAR9+1 < argc)
            VAR4 = argv[++VAR9];

 else
 {
            FUN4(VAR23);
            fprintf(VAR24, "",
               argv[0], VAR10);
            FUN5(99);
 }
 }
 else if (VAR10[0] == '')
 {
         png_uint_32 VAR25 = FUN6(VAR10+1);

 if (VAR25 > VAR26)
            FUN5(99);

         FUN7(&VAR3, VAR25);
 }
 else if (VAR10[0] == '' && VAR10[1] != 0 && (VAR10[1] != '' || VAR10[2] != 0))
 {
         FUN4(VAR23);
         fprintf(VAR24, "", argv[0], VAR10);
         FUN5(99);
 }
 else
 {
 if (FUN8(&VAR3))
            FUN9(&VAR3, VAR6);

 if (VAR10[0] == '')
 {
 const int VAR27 = (VAR10[1] == '' ? 0 : '');
 unsigned int VAR28 = 0;

 
 static char VAR29[4096];

 do
 {
 int VAR30 = getchar();

 
 if (VAR30 == VAR31 || VAR30 == VAR27 || VAR30 == 0)
 {
                  VAR29[VAR28] = 0;

 if (VAR28 > 0 && !FUN10(VAR29, &VAR3, VAR1,
                     VAR7, VAR5))
                     VAR8 = 1;

 if (VAR30 == VAR31)
 break;

                  VAR28 = 0;
 --VAR28; 
 }

 else
                  VAR29[VAR28] = (char)VAR30;
 } while (++VAR28 < sizeof VAR29);

 if (VAR28)
 {
               VAR29[32] = 0;
               VAR29[4095] = 0;
               fprintf(VAR24, "", VAR29,
                  VAR29+(4096-32));
               FUN5(99);
 }
 }

 else if (!FUN10(VAR10, &VAR3, VAR1, VAR7, VAR5))
            VAR8 = 1;
 }
 }

 if (VAR1 & VAR19)

    {
       unsigned int VAR32;
 


































       printf("");
       printf("");
       for (VAR32=0; VAR32<16; ++VAR32)
 {
 unsigned int VAR33;
         printf("", VAR34[VAR32]);
 for (VAR33=0; VAR33<16; ++VAR33)
 {
 unsigned int VAR35;
            printf("");
 for (VAR35=0; VAR35<4; ++VAR35)
 {
               printf("", VAR11[VAR32][VAR33][VAR35]);
 if (VAR35 < 3) FUN11('');
 }
            printf("");
 if (VAR33 < 15)
 {
               FUN11('');
 if (VAR33 % 4 == 3) printf("");
 }
 }
         printf("");

 if (VAR32 < 15)
            FUN11('');
 else
            FUN11('');
 }
      printf("");

      printf("");
      printf("");
 for (VAR32=0; VAR32<16; ++VAR32)
 {
 unsigned int VAR33;
         printf("", VAR34[VAR32]);
 for (VAR33=0; VAR33<4; ++VAR33)
 {
 unsigned int VAR35;
            printf("");
 for (VAR35=0; VAR35<4; ++VAR35)
 {
               printf("", VAR12[VAR32][VAR33][VAR35]);
 if (VAR35 < 3) FUN11('');
 }
            printf("");
 if (VAR33 < 3)
               FUN11('');
 }
         printf("");

 if (VAR32 < 15)
            FUN11('');
 else
            FUN11('');
 }
      printf("");

      printf("");
      printf("");
 for (VAR32=0; VAR32<8; ++VAR32)
 {
 unsigned int VAR33;
         printf("", VAR34[VAR32]);
 for (VAR33=0; VAR33<8; ++VAR33)
 {
 unsigned int VAR35;
            printf("");
 for (VAR35=0; VAR35<4; ++VAR35)
 {
               printf("", VAR36[VAR32][VAR33][VAR35]);
 if (VAR35 < 3) FUN11('');
 }
            printf("");
 if (VAR33 < 7)
 {
               FUN11('');
 if (VAR33 % 4 == 3) printf("");
 }
 }
         printf("");

 if (VAR32 < 7)
            FUN11('');
 else

             FUN11('');
       }
       printf("");


    }
 
    if (VAR8 == 0 && VAR4 != NULL)
 {
 VAR37 *VAR38 = fopen(VAR4, "");

 if (VAR38 != NULL)
 {
 int VAR39 = 0;
         fprintf(VAR38, "");
         FUN4(VAR38);
         VAR39 = FUN12(VAR38);

 if (fclose(VAR38) || VAR39)
 {
            FUN4(VAR23);
            fprintf(VAR24, "", VAR4);
            FUN5(99);
 }
 }

 else
 {
         FUN4(VAR23);
         fprintf(VAR24, "", VAR4);
         FUN5(99);
 }
 }

 return VAR8;
}
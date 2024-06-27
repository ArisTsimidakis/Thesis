int main(int argc, char **argv)
{
#ifdef VAR1
 char VAR2[80];
#endif
 char *VAR3, *VAR4 = NULL;
 int VAR5, VAR6, VAR7;
 int VAR8 = 0;
 int VAR9 = VAR10;
 int VAR11 = VAR10;
#ifdef VAR12
 int VAR13 = VAR10;
 long VAR14 = -1; 
#endif
 double VAR15; 
 double VAR16 = 2.2; 
 double VAR17; 
 XEvent VAR18;
 KeySym VAR19;


 

    VAR20 = (char *)NULL;
    VAR21 = (char *)NULL;
    memset(&VAR22, 0, sizeof(VAR23));


 

#if FUN1(VAR24)
 
    VAR15 = 1.0 / 2.2;
 
#VAR25 FUN1(VAR1)
    VAR15 = 1.0 / 1.7;
 
    VAR26 = fopen("", "");
 if (VAR26) {
 double VAR27;

        fgets(VAR2, 80, VAR26);
        fclose(VAR26);
        VAR27 = FUN2(VAR2);
 if (VAR27 > 0.0)
            VAR15 = 1.0 / VAR27;
 }
#VAR25 FUN1(VAR28)
    VAR15 = 1.8 / 2.61;
 
#else
    VAR15 = 1.0; 
#endif

 
    VAR17 = VAR15 * VAR16;


 

 if ((VAR3 = getenv("")) != NULL)
        VAR22.VAR29 = FUN2(VAR3);
 else
        VAR22.VAR29 = VAR17;


 

 while (*++argv && !VAR8) {
 if (!FUN3(*argv, "", 2)) {
 if (!*++argv)
 ++VAR8;
 else
                VAR20 = *argv;
 } else if (!FUN3(*argv, "", 2)) {
 if (!*++argv)
 ++VAR8;
 else {
                VAR22.VAR29 = FUN2(*argv);
 if (VAR22.VAR29 <= 0.0)
 ++VAR8;
 }
 } else if (!FUN3(*argv, "", 4)) {
 if (!*++argv)
 ++VAR8;
 else {
                VAR4 = *argv;
 if (strlen(VAR4) != 7 || VAR4[0] != '')
 ++VAR8;
 else {
                    VAR11 = VAR30;
                    VAR31 = VAR10;
 }
 }
 } else if (!FUN3(*argv, "", 4)) {
 if (!*++argv)
 ++VAR8;
 else {
                VAR32 = FUN4(*argv);
 if (VAR32 >= 0 && VAR32 < VAR33) {
                    VAR31 = VAR30;
                    VAR11 = VAR10;
 } else
 ++VAR8;
 }
 } else if (!FUN3(*argv, "", 2)) {
 if (!*++argv)
 ++VAR8;
 else {
                VAR34 = (VAR35)FUN5(*argv);
                VAR36 = VAR30;
 }
 } else if (!FUN3(*argv, "", 2)) {
            VAR37 = VAR30;
 } else if (!FUN3(*argv, "", 2)) {
            VAR9 = VAR30;
#ifdef VAR12
 } else if (!FUN3(*argv, "", 2)) {
            VAR13 = VAR30;
 if (!argv[1] || !FUN6(argv[1]))
                VAR14 = 2;
 else {
 ++argv;
                VAR14 = FUN5(*argv);
 if (VAR14 < 0)
                    VAR14 = 2;
 else if (VAR14 > 100000) 
                    VAR14 = 100000;
 }
#endif
 } else {
 if (**argv != '') {
                VAR21 = *argv;
 if (argv[1]) 
 ++VAR8;
 } else
 ++VAR8; 
 }
 }

 if (!VAR21)
 ++VAR8;


 

 if (VAR8) {

         fprintf(VAR38, "", VAR39, VAR40, VAR41);
         FUN7();
         fprintf(VAR38, ""

          ""












 #ifdef VAR12

          ""

#else

          ""


 #endif




           ""
           ""
           ""

          ""






           ""
           ""
           ""
           ""
           ""

          ""




 #ifdef VAR12


           ""
           ""

          ""


 #endif


           ""
           ""
           ""
           ""
           ""
           ""

          ""

          "", VAR39,

          (int)strlen(VAR39), "", VAR17, VAR33-1);


         FUN8(1);
     }
 


     if (!(VAR26 = fopen(VAR21, ""))) {
         fprintf(VAR38, VAR39 "", VAR21);
         ++VAR8;
 } else {
        VAR42 = fread(VAR43, 1, VAR44, VAR26);
 if (VAR42 < 8 || !FUN9(VAR43, 8)) {
            fprintf(VAR38, VAR39
 "",
              VAR21);
 ++VAR8;
 } else if ((VAR5 = FUN10(&VAR22)) != 0) {
 switch (VAR5) {
 case 2:
                    fprintf(VAR38, VAR39
 "", VAR21);
 break;
 case 4:
                    fprintf(VAR38, VAR39 "");
 break;
 default:
                    fprintf(VAR38, VAR39
 "");
 break;
 }
 ++VAR8;
 } else {
 FUN11((VAR38, ""))
            VAR45 = FUN12(VAR20);
 if (!VAR45) {
                FUN13(&VAR22);
                fprintf(VAR38, VAR39 "",
                  VAR20? VAR20 : "");
 ++VAR8;
 }
 }
 if (VAR8)
            fclose(VAR26);
 }


 if (VAR8) {
        fprintf(VAR38, VAR39 "");
        FUN8(2);
 }


 

    VAR6 = strlen(VAR41);
    VAR7 = strlen(VAR21);
 if (VAR6 + VAR7 + 3 > 1023)
        sprintf(VAR46, "", VAR41, VAR21+(VAR6+VAR7+6-1023));
 else
        sprintf(VAR46, "", VAR41, VAR21);


 

 if (VAR11) {
 unsigned VAR47, VAR48, VAR49; 

        sscanf(VAR4+1, "", &VAR47, &VAR48, &VAR49);
        VAR22.VAR50   = (VAR51)VAR47;
        VAR22.VAR52 = (VAR51)VAR48;
        VAR22.VAR53  = (VAR51)VAR49;
 } else
        VAR22.VAR54 = VAR30;

    VAR22.VAR55 = VAR56;
    VAR22.VAR57 = VAR58;
    VAR22.VAR59 = VAR60;
    VAR22.VAR61 = VAR62;


 

 for (;;) {
 FUN11((VAR38, ""))
 if (FUN14(&VAR22, VAR43, VAR42))
 ++VAR8;
 FUN11((VAR38, ""))

 if (VAR8 || VAR42 != VAR44 || VAR22.VAR55 == VAR63) {
 if (VAR22.VAR55 == VAR63) {
 FUN11((VAR38, ""))
 } else if (FUN15(VAR26)) {
                fprintf(VAR38, VAR39
 "");
                FUN8(3);
 } else if (FUN16(VAR26)) {
                fprintf(VAR38, VAR39 ""
 "");
                FUN8(3);
 } else  {
 
 }
 break;
 }

 if (VAR9)
            sleep(1);

        VAR42 = fread(VAR43, 1, VAR44, VAR26);
 }


 

    fclose(VAR26);
 FUN11((VAR38, ""))
    FUN13(&VAR22);

 if (VAR8) {
        fprintf(VAR38, VAR39 "");
        FUN8(3);
 }


#ifdef VAR12

 if (VAR13 && VAR31) {
 FUN11((VAR38, ""))
 for (;;) {
 int VAR64, VAR65;
 struct timeval VAR66, VAR67;

 
 if (FUN17(&VAR67, NULL) == 0) {
                VAR67.VAR68 += VAR14;
                VAR65 = VAR10;
 } else
                VAR65 = VAR30;

 
 
 if (FUN18(VAR45, VAR69 | VAR70, &VAR18))
 if (FUN19(VAR18,VAR19))
 break;

 
 if (++VAR32 >= VAR33)
                VAR32 = 0;
            FUN20();

 
 if (VAR65 || FUN17(&VAR66, NULL) != 0) {
 for (VAR64 = VAR14;  VAR64 > 0; --VAR64) {
                    sleep(1);
 
 if (FUN18(VAR45, VAR69 | VAR70,
 &VAR18) && FUN19(VAR18,VAR19))
 break;
 }
 } else {
 
 if (VAR66.VAR68 < VAR67.VAR68 ||
 (VAR66.VAR68 == VAR67.VAR68 && VAR66.VAR71 < VAR67.VAR71))
 {
 int VAR72 = VAR10;
 long VAR73 = VAR67.VAR68 - VAR66.VAR68;
 long VAR74;

 
 while (VAR73-- > 1) {
 int VAR75 = 0;

 for (VAR64 = VAR73;  VAR64 > 0 && !VAR72; --VAR64) {
                            sleep(1);
 
 if (FUN18(VAR45, VAR69 |
 VAR70, &VAR18) && FUN19(VAR18,VAR19))
                                VAR72 = VAR30;
 if (++VAR75 > 1000)
 break; 
 }
 if (VAR72)
 break;

 
 if (FUN17(&VAR66, NULL) == 0) {
 if (VAR66.VAR68 >= VAR67.VAR68)
 break;
                            VAR73 = VAR67.VAR68 - VAR66.VAR68;
 } else
 ++VAR73; 
 }
 if (VAR72)
 break; 

 
 if (FUN17(&VAR66, NULL) == 0) {
                        VAR74 = 1000000L*(VAR67.VAR68 - VAR66.VAR68) +
                          VAR67.VAR71 - VAR66.VAR71;
 if (VAR74 > 0)
                            FUN21((VAR35)VAR74);
 }
 }
 }

 
            FUN22 (0, 0, VAR22.VAR76, VAR22.VAR77);
 }

 } else 

#endif 

 

 if (VAR22.VAR55 >= VAR78) {
 FUN11((VAR38, ""))
 do {
 FUN23(VAR45, &VAR18);
 if (VAR18.VAR79 == VAR80) {
 VAR81 *VAR82 = (VAR81 *)&VAR18;
                FUN22 (VAR82->VAR83, VAR82->VAR84, VAR82->VAR76, VAR82->VAR77);
 }
 } while (!FUN19(VAR18,VAR19));
 } else {
        fprintf(VAR38, VAR39 ""
 "");
        FUN8(4);
 }


 


     FUN11((VAR38, ""))
     FUN24();
 




     return 0;
 }
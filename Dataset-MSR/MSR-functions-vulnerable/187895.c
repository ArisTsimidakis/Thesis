int main(int argc, char **argv)
{

    VAR1 *VAR2;
    VAR1 *VAR3;
    u32 VAR4;
    u32 VAR5;
    H264SwDecInst VAR6;
    H264SwDecRet VAR7;
    H264SwDecInput VAR8;
    H264SwDecOutput VAR9;
    H264SwDecPicture VAR10;
    H264SwDecInfo VAR11;
    u32 VAR12;

 VAR13 *VAR14;
 VAR13 *VAR15;

 
 if (argc < 2)
 {
        printf( "", argv[0]);
 return -1;
 }

 
    VAR15 = fopen("", "");
 if (VAR15 == NULL)
 {
        printf("");
 return -1;
 }

 
    VAR14 = fopen(argv[argc-1], "");
 if (VAR14 == NULL)
 {
        printf("");
 return -1;
 }

 
    FUN1(VAR14, 0L, VAR16);
    VAR4 = (VAR17)FUN2(VAR14);

     FUN3(VAR14);
 
     

    VAR3 = VAR2 = (VAR1 *)FUN4(sizeof(VAR1)*VAR4);


     if (VAR3 == NULL)
     {
         printf("");
 return -1;
 }

 
    fread(VAR3, sizeof(VAR1), VAR4, VAR14);
    fclose(VAR14);

 
    VAR7 = FUN5(&VAR6, 0);
 if (VAR7 != VAR18)
 {
        printf("");
 return -1;
 }

 
    VAR8.VAR19 = VAR2;
    VAR8.VAR20 = VAR4;
    VAR8.VAR21 = 0;

    VAR12 = 0;

 

 
 do
 {
 
        VAR7 = FUN6(VAR6, &VAR8, &VAR9);

 switch(VAR7)
 {

 case VAR22:

 
                VAR7 = FUN7(VAR6, &VAR11);
 if (VAR7 != VAR18)
 return -1;

 
                VAR5 = VAR11.VAR23 * VAR11.VAR24;
 
                VAR5 = (3 * VAR5)/2;
 

                printf("",
                    VAR11.VAR23, VAR11.VAR24);

 
                VAR8.VAR20 -=
 (VAR17)(VAR9.VAR25 - VAR8.VAR19);
                VAR8.VAR19 = VAR9.VAR25;
 break;

 case VAR26:
 case VAR27:

 
                VAR8.VAR20 -=
 (VAR17)(VAR9.VAR25 - VAR8.VAR19);
                VAR8.VAR19 = VAR9.VAR25;

 
 while (FUN8(VAR6, &VAR10, 0) ==
                    VAR27) { VAR12++;

                    printf("", VAR12,
                        VAR10.VAR28 ? "" : "",
                        VAR10.VAR29);
                    FUN9(VAR30);

 

 
 FUN10(VAR15, (VAR1*)VAR10.VAR31,
                        VAR5);
 }

 break;

 case VAR32:
 
                printf("");
 goto VAR33;

 default:
                printf("");
 return -1;
 }
 
 } while (VAR8.VAR20 > 0);

VAR33:

 
 while (FUN8(VAR6, &VAR10, 1) ==
        VAR27) {

        VAR12++;

        printf("", VAR12,
            VAR10.VAR28 ? "" : "",
            VAR10.VAR29);
        FUN9(VAR30);

 

 
 FUN10(VAR15, (VAR1*)VAR10.VAR31, VAR5);
 }

 


 
    FUN11(VAR6);

 
    fclose(VAR15);

 
    free(VAR2);

 return 0;

}
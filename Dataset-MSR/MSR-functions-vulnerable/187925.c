static int FUN1(VAR1* VAR2, VAR3* VAR4)
{

     char VAR5[VAR6+1];
     size_t VAR7;
     unsigned int VAR8;

    unsigned int VAR9;


     unsigned int VAR10;
     unsigned int VAR11;
 
 if (fgets(VAR5, sizeof(VAR5), VAR2) == NULL) {
        FUN2("");
 return -1;
 }
 for (VAR11 = 0; VAR11 < sizeof(VAR5); ++VAR11) {
 if (VAR5[VAR11] == '') {
            VAR5[VAR11] = 0;
 break;
 }
 }

 if (fscanf(VAR2, "", &VAR7, &VAR8, &VAR10) != 3) {

         FUN2("");
         return -1;
     }



    VAR9 = ((VAR7-1) / VAR8) + 1;
















 
     VAR4->VAR10 = VAR10;

    VAR4->VAR12 = malloc(VAR10 * sizeof(VAR13));

    memset(VAR4->VAR12, 0, VAR10 * sizeof(VAR13));










 
     
     unsigned char* VAR14;
     VAR14 = FUN3(NULL, VAR9 * VAR8, VAR15, VAR16 | VAR17, -1, 0);
     if (VAR14 == VAR18) {
         FUN2("", strerror(VAR19));


         return -1;
     }
 

    VAR4->VAR12[VAR10-1].VAR20 = VAR14;

    VAR4->VAR12[VAR10-1].VAR21 = VAR9 * VAR8;


     int VAR22 = open(VAR5, VAR23);
     if (VAR22 < 0) {
         FUN2("", VAR5, strerror(VAR19));




         return -1;
     }
 
     unsigned char* VAR24 = VAR14;




     for (VAR11 = 0; VAR11 < VAR10; ++VAR11) {

        int VAR25, VAR26;

        if (fscanf(VAR2, "", &VAR25, &VAR26) != 2) {




             FUN2("", VAR11);

            return -1;
















         }
 

        void* VAR20 = FUN3(VAR24, (VAR26-VAR25)*VAR8, VAR27, VAR16 | VAR28, VAR22, ((VAR29)VAR25)*VAR8);


         if (VAR20 == VAR18) {
             FUN2("", VAR11, strerror(VAR19));

            return -1;




         }
         VAR4->VAR12[VAR11].VAR20 = VAR20;

        VAR4->VAR12[VAR11].VAR21 = (VAR26-VAR25)*VAR8;


 

        VAR24 += VAR4->VAR12[VAR11].VAR21;
























     }
 


     VAR4->VAR20 = VAR14;
     VAR4->VAR21 = VAR7;
 
    FUN4("", VAR10);

 return 0;
}
static char *FUN1(VAR1 *VAR2)
 {

    long VAR3;


     

    char *VAR4;



    VAR4 = calloc(1, 1024);

    

    VAR3 = FUN2(VAR2);




     FUN3(VAR2, 0, VAR5);
     FUN4(fread(VAR4, 1, 1023, VAR2), 1023, "");
     FUN3(VAR2, VAR3, VAR5);

    
     return VAR4;
 }
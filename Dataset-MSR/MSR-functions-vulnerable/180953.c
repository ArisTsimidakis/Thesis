static int FUN1(VAR1 *VAR2, unsigned int *VAR3,
                          unsigned int *VAR4, unsigned int *VAR5, int *VAR6)
{
    int VAR7;
    unsigned char VAR8[VAR9];
    unsigned char VAR10,  VAR11;
    unsigned char VAR12, VAR13;
    unsigned short  VAR14, VAR15;
    unsigned short  VAR16, VAR17;

    if (!VAR3 || !VAR4 || !VAR5 || !VAR6) {
        return 0;
    }

    if (fread(VAR8, VAR9, 1, VAR2) != 1) {
        fprintf(VAR18,
                "");
        return 0 ;
    }
     VAR10 = VAR8[0];
     
     VAR11 = VAR8[2];

    

    VAR14 = FUN2(&VAR8[5]);




     VAR15 = VAR8[7];
 
 
 #if 0

    VAR19 = FUN2(&VAR8[8]);

    VAR20 = FUN2(&VAR8[10]);




 #endif

    VAR16 = FUN2(&VAR8[12]);

    VAR17 = FUN2(&VAR8[14]);




     VAR12 = VAR8[16];
     VAR13  = VAR8[17];
 
    *VAR3 = (unsigned int)VAR12;
    *VAR4  = (unsigned int)VAR16;
    *VAR5 = (unsigned int)VAR17;

    
    if (VAR10) {
        unsigned char *VAR21 = (unsigned char *) malloc(VAR10);
        if (VAR21 == 0) {
            fprintf(VAR18, "");
            return 0;
        }
        if (!fread(VAR21, VAR10, 1, VAR2)) {
            fprintf(VAR18,
                    "");
            free(VAR21);
            return 0 ;
        }
        free(VAR21);
    }

    
    if (VAR11 > 8) {
        fprintf(VAR18, "");
        return 0 ;
    }

    *VAR6 = !(VAR13 & 32);

    
    VAR7 = VAR14 * (VAR15 / 8);

    if (VAR7 > 0) {
        fprintf(VAR18, "");
        FUN3(VAR2, VAR7, VAR22);
    }
    return 1;
}
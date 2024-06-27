int FUN1(VAR1 *VAR2)
{
    unsigned int VAR3;
    EVP_MD_CTX VAR4;
    unsigned char *VAR5;
    unsigned char VAR6 = '';
    const VAR7 *VAR8;
    int VAR9;

    VAR8 = FUN2();

# ifdef VAR10
    VAR6 = VAR11[''];        
# endif
    EVP_MD_CTX_init(&VAR4);
    VAR5 = VAR2->VAR12->VAR13;

    if (VAR2->VAR14->VAR15 < 0 ||
        VAR2->VAR14->VAR15 > (int)sizeof(VAR2->VAR14->VAR16)) {
        FUN3(VAR17, VAR18);
        return 0;
    }
    VAR9 = FUN4(VAR8);
    if (VAR9 < 0)
        return 0;
    for (VAR3 = 0; VAR3 < VAR2->VAR12->VAR19; VAR3 += VAR9) {
        if (((VAR5 - VAR2->VAR12->VAR13) + VAR9) >
            (int)sizeof(VAR2->VAR12->VAR13)) {
            
            FUN3(VAR17, VAR18);
            return 0;
        }

        EVP_DigestInit_ex(&VAR4, VAR8, NULL);
 
         FUN5(VAR2->VAR14->VAR15 >= 0
                        && VAR2->VAR14->VAR15

                       < (int)sizeof(VAR2->VAR14->VAR16));


         EVP_DigestUpdate(&VAR4, VAR2->VAR14->VAR16,
                          VAR2->VAR14->VAR15);
         EVP_DigestUpdate(&VAR4, &VAR6, 1);
        VAR6++;
        EVP_DigestUpdate(&VAR4, VAR2->VAR12->VAR20, VAR2->VAR12->VAR21);
        EVP_DigestUpdate(&VAR4, VAR2->VAR12->VAR22, VAR2->VAR12->VAR23);
        FUN6(&VAR4, VAR5, NULL);
        VAR5 += VAR9;
    }

    FUN7(&VAR4);
    return 1;
}
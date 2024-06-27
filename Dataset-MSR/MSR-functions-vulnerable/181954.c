FUN1(VALUE VAR1, VALUE VAR2)
{
    VAR3 *VAR4;
    int VAR5;

    FUN2(VAR2);
    FUN3(VAR1, VAR4);

    VAR5 = FUN4(VAR4);
    if (FUN5(VAR2) != VAR5)
	FUN6(VAR6, "", VAR5);

     if (FUN7(VAR4, NULL, NULL, (unsigned char *)FUN8(VAR2), NULL, -1) != 1)
 	FUN6(VAR7, NULL);
 




     return VAR2;
 }
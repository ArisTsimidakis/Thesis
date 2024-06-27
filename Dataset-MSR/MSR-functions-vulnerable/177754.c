FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
 {
        VAR7 *VAR8;
 






        if ((VAR8 = FUN2(VAR2, VAR9, VAR6)) != NULL)
                return VAR8;
	VAR8->VAR10 = 0;

	
	FUN3(VAR2, VAR6, VAR8, FUN4(VAR8));

	VAR8->VAR11 = FUN5(VAR2, VAR6);

	return VAR8;
}
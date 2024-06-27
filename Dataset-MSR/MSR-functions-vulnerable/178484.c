FUN1(VAR1)
{
	VAR2 *VAR3;
        char *VAR4, **VAR5;
        int VAR6, *VAR7;
 

       if (FUN2(FUN3() VAR8, "", &VAR3, &VAR4, &VAR6) == VAR9) {


                return;
        }
	FUN4(VAR7, int *, &VAR3, -1, "", VAR10);

	if ((VAR5 = FUN5(VAR4)) == NULL) {
		FUN6(NULL VAR8, VAR11, "", VAR4);
		VAR12;
	}

	FUN7(*VAR7);
	if (FUN8(*VAR7, VAR5)) {
		FUN9(VAR5);
		FUN6(NULL VAR8, VAR11, "");
		VAR12;
	}

	FUN10(VAR5, le_ps_enc VAR8);

	VAR13;
}
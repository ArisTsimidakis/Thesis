static void FUN1(VAR1 *VAR2, const char *VAR3)
{
 	int VAR4;
 	VAR5 *VAR6;
 

	VAR2->VAR7 = VAR2->VAR8->VAR7;
 	
 	VAR2->VAR9 = FUN2(VAR2->VAR8, VAR2->VAR8->VAR7);
 	if (!FUN3(VAR2)) {
		VAR2->VAR10 = true;
		return;
	}
	FUN4(VAR2, "");
	VAR2->VAR10 = false;
	VAR2->VAR11 = true;
	if (!FUN5(&VAR2->VAR12)) {
		FUN6(VAR2->VAR13);
		FUN7(VAR2, true, "");
		return;
	}
	VAR2->VAR13->VAR14 = 0;

	VAR4 = 0;
	VAR6 = FUN8(512);
	if (VAR6) {
		FUN9(VAR6, VAR15, 1, VAR3);
		VAR4 = FUN10(VAR6, VAR2->VAR13);
		FUN11(VAR6);
		
	}
	if (!VAR4)
		FUN12(VAR2->VAR13, false, "");
}
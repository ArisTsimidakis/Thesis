static void FUN1(VAR1 *VAR2, const char *VAR3, int VAR4, const char *VAR5, ...)
{
	va_list VAR6;
	VAR7 *VAR8 = NULL;

	if (VAR2) {
		VAR8 = FUN2(VAR2);
		if (VAR4 == VAR9) {
			memset(VAR8->VAR10, 0, sizeof(VAR8->VAR10));
		} else {
			FUN3(VAR6, VAR5);
			vsnprintf(VAR8->VAR10, sizeof(VAR8->VAR10) - 1, VAR5, VAR6);
			FUN4(VAR6);
		}
		VAR8->VAR11 = VAR4;
	}

	if (VAR4 == VAR9) {
		return;
        }
 
        if (VAR2 && (VAR8->VAR12 & VAR4)) {

               FUN5(VAR13, VAR4, VAR8->VAR10);


        } else {
                FUN3(VAR6, VAR5);
                FUN6(VAR3, "", VAR14, VAR5, VAR6);
		FUN4(VAR6);
	}
}
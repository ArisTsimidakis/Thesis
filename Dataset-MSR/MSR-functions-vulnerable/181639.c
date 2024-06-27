FUN1(VAR1)
{
	tsize_t VAR2  = FUN2(VAR3);
	tdata_t VAR4 = FUN3(VAR2);

	(void) VAR5; (void) VAR6;
	if (VAR4) {
 		tstrip_t VAR7, VAR8 = FUN4(VAR3);
 		uint32 VAR9 = 0;
 		FUN5(VAR4, 0, VAR2);

		for (VAR7 = 0; VAR7 < VAR8; VAR7++) {


 			tsize_t VAR10 = (VAR9 + VAR11 > VAR12) ?
 			    FUN6(VAR3, VAR12 - VAR9) : VAR2;
 			if (FUN7(VAR3, VAR7, VAR4, VAR10) < 0
			    && !VAR13) {
				FUN8(FUN9(VAR3),
				    "",
				    (unsigned long) VAR7);
				goto VAR14;
			}
			if (FUN10(VAR15, VAR7, VAR4, VAR10) < 0) {
				FUN8(FUN9(VAR15),
				    "",
				    (unsigned long) VAR7);
				goto VAR14;
			}
			VAR9 += VAR11;
		}
		FUN11(VAR4);
		return 1;
	} else {
		FUN8(FUN9(VAR3),
		    ""
		    "", (unsigned long) VAR2);
		return 0;
	}

VAR14:
	FUN11(VAR4);
	return 0;
}
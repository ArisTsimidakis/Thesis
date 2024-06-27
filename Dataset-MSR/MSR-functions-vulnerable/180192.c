static int FUN1(void VAR1 *VAR2)
 {
 	struct sclp_ctl_sccb VAR3;
 	struct VAR4 *VAR5;


 	int VAR6;
 
 	if (FUN2(&VAR3, VAR2, sizeof(VAR3)))
		return -VAR7;
	if (!FUN3(VAR3.VAR8))
		return -VAR9;
 	VAR5 = (void *) FUN4(VAR10 | VAR11);
 	if (!VAR5)
 		return -VAR12;

	if (FUN2(VAR5, FUN5(VAR3.VAR5), sizeof(*VAR5))) {








 		VAR6 = -VAR7;
 		goto VAR13;
 	}

	if (VAR5->VAR14 > VAR15 || VAR5->VAR14 < 8)

		return -VAR16;

	if (FUN2(VAR5, FUN5(VAR3.VAR5), VAR5->VAR14)) {

		VAR6 = -VAR7;




 		goto VAR13;
 	}
 	VAR6 = FUN6(VAR3.VAR8, VAR5);
	if (VAR6)
		goto VAR13;
	if (FUN7(FUN5(VAR3.VAR5), VAR5, VAR5->VAR14))
		VAR6 = -VAR7;
VAR13:
	FUN8((unsigned long) VAR5);
	return VAR6;
}
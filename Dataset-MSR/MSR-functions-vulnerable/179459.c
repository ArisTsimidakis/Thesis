static int FUN1(struct socket *VAR1, int VAR2, int VAR3,
			       char VAR4 *VAR5, unsigned int VAR6)
{
	struct VAR1 *VAR7 = VAR1->VAR7;
	struct VAR8 *VAR9;
	struct VAR10 *VAR11;
	struct VAR12 *VAR13;
	int VAR14;
 	int VAR15;
 
 	if (VAR2 != VAR16)

		return VAR17.FUN2(VAR7, VAR2, VAR3, VAR5, VAR6);


 
 	if (VAR6 < sizeof(int))
 		return -VAR18;

	if (FUN3(VAR14, (int VAR4 *)VAR5))
		return -VAR19;

	VAR15 = -VAR20;
	if (VAR7->VAR21 == NULL)
		goto VAR22;

	
	VAR15 = -VAR23;
	VAR9 = FUN4(VAR7);
	if (VAR9 == NULL)
		goto VAR22;

	
	VAR13 = FUN5(VAR9);
	if ((VAR9->VAR24 == 0) &&
	    (VAR9->VAR25 == 0)) {
		VAR15 = -VAR23;
		VAR11 = FUN6(VAR13->VAR26);
		if (VAR11 == NULL)
			goto VAR27;

		VAR15 = FUN7(VAR7, VAR11, VAR3, VAR14);
		FUN8(VAR13->VAR26);
	} else
		VAR15 = FUN9(VAR7, VAR9, VAR3, VAR14);

	VAR15 = 0;

VAR27:
	FUN8(VAR7);
VAR22:
	return VAR15;
}
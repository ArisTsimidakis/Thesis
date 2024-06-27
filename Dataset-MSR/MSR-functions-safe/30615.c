static int FUN1(struct socket *VAR1, struct VAR2 *VAR3,
			     int VAR4, int VAR5)
{
	struct VAR6 *VAR7 = (struct VAR6 *) VAR3;
	struct VAR1 *VAR8 = VAR1->VAR8;
	struct VAR9 *VAR10 = FUN2(VAR8);
	int VAR11;

	if (VAR3->VAR12 != VAR13 || VAR4 < sizeof(struct VAR6))
		return -VAR14;

	if (VAR8->VAR15 != VAR16 && VAR8->VAR15 != VAR17)
		return -VAR18;

	if (VAR8->VAR15 == VAR16 &&
	    VAR10->VAR19 == VAR20)
		return -VAR18; 

	if (VAR8->VAR21 != VAR22 && VAR8->VAR21 != VAR23)
		return -VAR14;

	if (VAR8->VAR15 == VAR16) {
		VAR11 = FUN3(VAR8);
		if (FUN4(VAR11))
			return VAR11;
	}

	FUN5(VAR8);

	
	memcpy(VAR10->VAR24, VAR7->VAR25, 8);
	memcpy(VAR10->VAR26, VAR7->VAR27, 8);

	if (VAR10->VAR19 == VAR20)
		VAR11 = FUN6(VAR1->VAR8, VAR28);
	else
		VAR11 = FUN7(VAR1, VAR3);
	if (VAR11)
		goto VAR29;

	if (VAR8->VAR15 != VAR30)
		VAR11 = FUN8(VAR8, FUN9(VAR8, VAR30,
							    VAR31),
				     FUN10(VAR8, VAR5 & VAR32));

	if (VAR8->VAR15 == VAR31 || VAR8->VAR15 == VAR33)
		VAR11 = -VAR34;

	if (VAR11 && VAR10->VAR19 == VAR35)
		FUN11(VAR8, 0);

VAR29:
	FUN12(VAR8);
	return VAR11;
}
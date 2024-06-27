int FUN1(struct VAR1 *VAR2, struct socket *VAR3,
				struct VAR4 *VAR5, size_t VAR6, int VAR7)
{
	int VAR8 = VAR7 & VAR9;
	struct VAR3 *VAR10 = VAR3->VAR10;
	struct VAR11 *VAR12;
	size_t VAR13;
	int VAR14;

	FUN2("", VAR3, VAR10, VAR6);

 	if (VAR7 & (VAR15))
 		return -VAR16;
 




 	VAR12 = FUN3(VAR10, VAR7, VAR8, &VAR14);
 	if (!VAR12) {
 		if (VAR10->VAR17 & VAR18)
 			return 0;
 		return VAR14;
 	}
 

	VAR5->VAR19 = 0;


 	VAR13 = VAR12->VAR6;
 	if (VAR6 < VAR13) {
 		VAR5->VAR20 |= VAR21;
		VAR13 = VAR6;
	}

	FUN4(VAR12);
	VAR14 = FUN5(VAR12, 0, VAR5->VAR22, VAR13);
	if (VAR14 == 0)
		FUN6(VAR5, VAR10, VAR12);

	FUN7(VAR10, VAR12);

	return VAR14 ? : VAR13;
}
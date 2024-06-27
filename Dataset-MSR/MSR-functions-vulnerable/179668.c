static int FUN1(struct VAR1 *VAR2, struct socket *VAR3,
			       struct VAR4 *VAR5, size_t VAR6, int VAR7)

{
	struct VAR3 *VAR8 = VAR3->VAR8;
	struct VAR9 *VAR10;
	int VAR11;
	int VAR12;

	VAR11 = -VAR13;
 	if (VAR5->VAR14&VAR15)
 		goto VAR16;
 

	VAR5->VAR17 = 0;


 	VAR10 = FUN2(VAR8, VAR7, 0 , &VAR11);
 	if (!VAR10)
 		goto VAR16;
	VAR12 = VAR10->VAR6;
	if (VAR6 < VAR12) {
		VAR5->VAR14 |= VAR18;
		VAR12 = VAR6;
	}

	VAR11 = FUN3(VAR10, 0, VAR5->VAR19, VAR12);
	if (VAR11)
		goto VAR20;

	VAR11 = (VAR7 & VAR18) ? VAR10->VAR6 : VAR12;
VAR20:
	FUN4(VAR8, VAR10);
	FUN5(VAR8);
	return VAR11;

VAR16:
	return VAR11;
}
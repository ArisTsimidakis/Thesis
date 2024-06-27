static int FUN1(struct VAR1* VAR2, HANDLE VAR3, int VAR4,

							  int VAR5, int VAR6, int VAR7, void *VAR8, struct VAR9 *VAR10,

							  VAR11 *VAR12, VAR13* VAR14)

{

	int VAR15 = (VAR6 >> 8) & 0xFF;

	int VAR16 = VAR6 & 0xFF;



	if ( (FUN2(VAR4) != VAR17)

	  && (FUN2(VAR4) != VAR18) )

		return VAR19;



	if (FUN3(VAR4) && VAR5 == VAR20)

		return FUN4(VAR2, VAR3, VAR16, VAR8, VAR10, VAR12, VAR14, VAR15);



	if (FUN5(VAR4) && VAR5 == VAR21)

		return FUN6(VAR2, VAR3, VAR16, VAR8, VAR10, VAR12, VAR14, VAR15);



	return VAR19;

}
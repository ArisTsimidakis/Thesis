double FUN1(size_t VAR1, VAR2 *VAR3, double VAR4, uint32_t VAR5, double *VAR6, double *VAR7)

{

	VAR8 *VAR9 = (VAR8 *)VAR1;

	if (VAR9 == NULL) return 0.0;






 

	uint32_t VAR10, VAR11;

	uint32_t VAR12, VAR13;

	GPMF_stream VAR14;






 

	if (VAR3 == NULL || VAR9->VAR15 == 0 || VAR9->VAR16 == 0 || VAR9->VAR17 == 0 || VAR9->VAR18 == 0 || VAR6 == NULL || VAR7 == NULL) return 0.0;


 

	VAR10 = FUN2(VAR3);

	VAR12 = FUN3(VAR3);

	if (VAR4 == 0.0)

		VAR4 = FUN4(VAR1, VAR10, VAR19);


 

	if (VAR4 == 0.0)

	{

		*VAR6 = *VAR7 = 0.0;

		return 0.0;








 	}
 

	FUN5(VAR3, &VAR14);

	if (VAR20 == FUN6(&VAR14, VAR21, VAR22))

	{

		VAR13 = FUN7(*(VAR23 *)FUN8(&VAR14));

		VAR11 = VAR13 - VAR12;








 

		*VAR6 = ((double)VAR11 / (double)VAR4);

		*VAR7 = ((double)VAR13 / (double)VAR4);

	}

	else

	{

		

		*VAR6 = ((double)VAR5 * (double)VAR9->VAR17 / (double)VAR9->VAR18);

		*VAR7 = ((double)(VAR5 + 1) * (double)VAR9->VAR17 / (double)VAR9->VAR18);

	}
 	return VAR4;
 }
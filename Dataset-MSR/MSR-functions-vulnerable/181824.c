FUN1(struct VAR1 *VAR2, struct VAR3 *VAR3)

{

	struct VAR4 *VAR5 = VAR3->VAR5;

	struct VAR1 *VAR6;

	int VAR7;



	if ((VAR6 = FUN2()) == NULL)

		return VAR8;

	if (VAR5->VAR9) {

		if ((VAR7 = FUN3(VAR6, &VAR5->VAR10,

		    sizeof(VAR5->VAR10))) != 0)

			goto VAR11;

	} else if ((VAR7 = FUN3(VAR6, NULL, 0)) != 0)

		goto VAR11;

	if (VAR5->VAR12) {

		if ((VAR7 = FUN3(VAR6, &VAR5->VAR13,

		    sizeof(VAR5->VAR13))) != 0)

			goto VAR11;

	} else if ((VAR7 = FUN3(VAR6, NULL, 0)) != 0)

		goto VAR11;

	VAR7 = FUN4(VAR2, VAR6);

 VAR11:

	FUN5(VAR6);

	return VAR7;

}
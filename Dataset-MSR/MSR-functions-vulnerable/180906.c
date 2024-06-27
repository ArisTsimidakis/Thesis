static int FUN1(struct VAR1 *VAR2, const VAR3 *VAR4,

			unsigned int VAR5)

{

	VAR3 *VAR6 = NULL;

	VAR3 *VAR7 = (VAR3 *)VAR4;

	int VAR8;



	if (VAR5) {

		VAR6 = FUN2(VAR5, VAR9);

		if (!VAR6)

			return -VAR10;



		memcpy(VAR6, VAR4, VAR5);

		VAR7 = VAR6;

	}



	VAR8 = FUN3(VAR2)->FUN4(VAR2, VAR7, VAR5);



	FUN5(VAR6);

	return VAR8;

}
static int FUN1(struct VAR1 *VAR2, u64 VAR3)

{

	struct VAR4 *VAR5;

	struct VAR6 *VAR7;

	struct VAR1 *VAR8;

	int VAR9, VAR10;



	VAR9 = -VAR11;

	VAR7 = VAR2->VAR7;

	FUN2(!VAR7);

	FUN2(!VAR7->VAR12);

	VAR5 = VAR7->VAR12->VAR5;

	FUN2(!VAR5);

	FUN3(&VAR5->VAR13);

	for (VAR10 = 0; VAR10 < VAR7->VAR14; ++VAR10) {

		VAR8 = VAR7->VAR15[VAR10];

		if (VAR8->VAR16.VAR17 == VAR2->VAR16.VAR17 &&

		    VAR8->VAR16.VAR3 == VAR3 &&

		    FUN4(VAR8) != VAR18) {

			VAR9 = 0;

			

			break;

		}

	}

	FUN5(&VAR5->VAR13);

	return VAR9;

}
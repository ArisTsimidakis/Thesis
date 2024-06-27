static int FUN1(unsigned long VAR1, unsigned long VAR2,

				struct VAR3 *VAR4, unsigned char *VAR5)

{

	unsigned long VAR6 = (VAR2 - VAR1) >> VAR7;

	int VAR8;



	if (VAR4->VAR9) {

		pgoff_t VAR10;



		VAR10 = FUN2(VAR4, VAR1);

		for (VAR8 = 0; VAR8 < VAR6; VAR8++, VAR10++)

			VAR5[VAR8] = FUN3(VAR4->VAR9->VAR11, VAR10);

	} else {

		for (VAR8 = 0; VAR8 < VAR6; VAR8++)

			VAR5[VAR8] = 0;

	}

	return VAR6;

}
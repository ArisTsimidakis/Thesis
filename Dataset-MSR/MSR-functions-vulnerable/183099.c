static int FUN1(struct VAR1 *VAR2, unsigned long VAR3)

{

	while (!VAR2->VAR4)

		VAR2++;



	while (VAR3 > 0) {

		unsigned long VAR5;



		VAR5 = FUN2(unsigned long, VAR3, VAR2->VAR4);

		if (FUN3(VAR2->VAR6, VAR5))

			break;



		VAR3 -= VAR5;

		VAR2++;

	}



	return VAR3;

}
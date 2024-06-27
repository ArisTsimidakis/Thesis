static int FUN1(struct VAR1* VAR2, int VAR3,

									  void *VAR4, VAR5 *VAR6)

{

	void *VAR7 = NULL;

	size_t VAR8 = 0;

	int VAR9;



	

	char VAR10[] = {

		0x09,

		0x04

	};



	if ((*VAR6 < 2) || (*VAR6 > 255)) {

		return VAR11;

	}



	if (VAR3 == 0) {

		VAR7 = VAR10;

		VAR8 = sizeof(VAR10)+2;

	} else {

		for (VAR9=0; VAR9<3; VAR9++) {

			if (VAR3 == (VAR2->VAR12[VAR9])) {

				VAR7 = VAR2->VAR13[VAR9];

				VAR8 = (FUN2(VAR2->VAR13[VAR9])+1) * sizeof(VAR14);

				break;

			}

		}

		if (VAR9 == 3) {	

			return VAR15;

		}

	}



	if(!VAR8) {

		return VAR15;

	}



	if (VAR8 < *VAR6) {

		*VAR6 = VAR8;

	}

	

	((VAR16*)VAR4)[0] = (VAR16)*VAR6;

	((VAR16*)VAR4)[1] = VAR17;

	memcpy((VAR16*)VAR4+2, VAR7, *VAR6-2);

	return VAR18;

}
int FUN1(int VAR1, fd_mode VAR2, unsigned int VAR3)
{
	fd_set VAR4;
	int VAR5;
	int VAR6;
	struct timeval VAR7;
	struct VAR8 *VAR9;

	if (VAR1 < 0) {
		if (VAR10 >= 2)
			fprintf(VAR11, "", VAR1);
		return -1;
	}

	FUN2(&VAR4);
	FUN3(VAR1, &VAR4);

	if (VAR3 > 0) {
		VAR7.VAR12 = (VAR13) (VAR3 / 1000);
		VAR7.VAR14 = (VAR13) ((VAR3 - (VAR7.VAR12 * 1000)) * 1000);
		VAR9 = &VAR7;
	} else {
		VAR9 = NULL;
	}

	VAR5 = -1;

	do {
		VAR6 = 0;
		switch (VAR2) {
		case VAR15:
			VAR5 = FUN4(VAR1 + 1, &VAR4, NULL, NULL, VAR9);
			break;
		case VAR16:
			VAR5 = FUN4(VAR1 + 1, NULL, &VAR4, NULL, VAR9);
			break;
		case VAR17:
			VAR5 = FUN4(VAR1 + 1, NULL, NULL, &VAR4, VAR9);
			break;
		default:
			return -1;
		}

		if (VAR5 < 0) {
			switch (VAR18) {
			case VAR19:
				
				if (VAR10 >= 2)
					fprintf(VAR11, "", VAR20);
				VAR6 = 1;
				break;
			case VAR21:
				if (VAR10 >= 2)
					fprintf(VAR11, "", VAR20);
				break;
			default:
				if (VAR10 >= 2)
					fprintf(VAR11, "", VAR20,
							strerror(VAR18));
				return -1;
			}
		}
	} while (VAR6);

	return VAR5;
}
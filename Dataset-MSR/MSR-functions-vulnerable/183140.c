int FUN1(uint16_t VAR1)
{
	int VAR2 = -1;
	int VAR3 = 1;
#ifdef VAR4
	WSADATA VAR5;
	if (!VAR6) {
		if (FUN2(FUN3(2,2), &VAR5) != VAR7) {
			fprintf(VAR8, "");
			FUN4(-1);
		}
		VAR6 = 1;
	}
#endif
	struct sockaddr_in VAR9;

	if (0 > (VAR2 = socket(VAR10, VAR11, VAR12))) {
		FUN5("");
		return -1;
	}

	if (FUN6(VAR2, VAR13, VAR14, (void*)&VAR3, sizeof(int)) == -1) {
		FUN5("");
		FUN7(VAR2);
		return -1;
	}

#ifdef VAR15
	if (FUN6(VAR2, VAR13, VAR15, (void*)&VAR3, sizeof(int)) == -1) {
		FUN5("");
		FUN7(VAR2);
		return -1;
	}
#endif
 
 	memset((void *) &VAR9, 0, sizeof(VAR9));
 	VAR9.VAR16 = VAR17;

	VAR9.VAR18.VAR19 = FUN8(VAR20);


 	VAR9.VAR21 = FUN9(VAR1);
 
 	if (0 > FUN10(VAR2, (struct VAR22 *) &VAR9, sizeof(VAR9))) {
		FUN5("");
		FUN7(VAR2);
		return -1;
	}

	if (FUN11(VAR2, 1) == -1) {
		FUN5("");
		FUN7(VAR2);
		return -1;
	}

	return VAR2;
}
static int FUN1(struct VAR1 *VAR1)
{
	int VAR2;
	
	int VAR3;
	int VAR4;
	int VAR5;

	VAR2 = socket(VAR6, VAR7, VAR8);
	if (VAR2 == -1) {
		FUN2(VAR1, "");
		return -VAR9;
	}

	VAR5 = 1;
	VAR3 = FUN3(VAR2, VAR10, VAR11,
			 &VAR5, sizeof(VAR5));
	if (VAR3 == -1) {
		FUN2(VAR1, "");
		VAR4 = -VAR9;
		goto VAR12;
	}

	VAR5 = 255;
	VAR3 = FUN3(VAR2, VAR10, VAR13,
			 &VAR5, sizeof(VAR5));
	if (VAR3 == -1) {
		FUN2(VAR1, "");
		VAR4 = -VAR9;
 		goto VAR12;
 	}
 


















 	VAR1->VAR2 = VAR2;
 	return 0;
 VAR12:
	close(VAR2);
	return VAR4;
}
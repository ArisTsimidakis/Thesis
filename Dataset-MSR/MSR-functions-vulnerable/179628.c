static VAR1 FUN1(struct VAR2 *VAR3, struct VAR4 *VAR4,
			   const unsigned char *VAR5, size_t VAR6)
{
	const unsigned char *VAR7 = VAR5;
	FUN2(VAR8, VAR9);
	int VAR10;
	ssize_t VAR11 = 0;

	
	if (FUN3(VAR3) && VAR4->VAR12->write != VAR13) {
		VAR11 = FUN4(VAR3);
		if (VAR11)
			return VAR11;
	}

	FUN5(&VAR3->VAR14);

	
	FUN6(VAR3);

	FUN7(&VAR3->VAR15, &VAR8);
	while (1) {
		FUN8(VAR16);
		if (FUN9(VAR9)) {
			VAR11 = -VAR17;
			break;
		}
		if (FUN10(VAR4) || (VAR3->VAR18 && !VAR3->VAR18->VAR19)) {
			VAR11 = -VAR20;
			break;
		}
		if (FUN11(VAR3)) {
			while (VAR6 > 0) {
				ssize_t VAR21 = FUN12(VAR3, VAR7, VAR6);
				if (VAR21 < 0) {
					if (VAR21 == -VAR22)
						break;
					VAR11 = VAR21;
					goto VAR23;
				}
				VAR7 += VAR21;
				VAR6 -= VAR21;
				if (VAR6 == 0)
					break;
				VAR10 = *VAR7;
				if (FUN13(VAR10, VAR3) < 0)
					break;
				VAR7++; VAR6--;
			}
 			if (VAR3->VAR24->VAR25)
 				VAR3->VAR24->FUN14(VAR3);
 		} else {




 			while (VAR6 > 0) {


 				VAR10 = VAR3->VAR24->write(VAR3, VAR7, VAR6);


 				if (VAR10 < 0) {
 					VAR11 = VAR10;
 					goto VAR23;
				}
				if (!VAR10)
					break;
				VAR7 += VAR10;
				VAR6 -= VAR10;
			}
		}
		if (!VAR6)
			break;
		if (VAR4->VAR26 & VAR27) {
			VAR11 = -VAR22;
			break;
		}
		FUN15(&VAR3->VAR14);

		FUN16();

		FUN5(&VAR3->VAR14);
	}
VAR23:
	FUN17(VAR28);
	FUN18(&VAR3->VAR15, &VAR8);
	if (VAR7 - VAR5 != VAR6 && VAR3->VAR29)
		FUN19(VAR30, &VAR3->VAR31);
	FUN15(&VAR3->VAR14);
	return (VAR7 - VAR5) ? VAR7 - VAR5 : VAR11;
}
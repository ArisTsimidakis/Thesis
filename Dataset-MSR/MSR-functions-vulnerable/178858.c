static int FUN1(struct VAR1 *VAR2, int VAR3)


 {
 	int VAR4 = 0;

	switch (VAR3 & (VAR5|VAR6|VAR7)) {








 		case VAR5:
 			VAR4 |= FUN2(VAR8, &VAR2->VAR9) != 0;
 			break;
		case VAR6:
			VAR4 |= FUN2(VAR10, &VAR2->VAR9) != 0;
			break;
 		case VAR5|VAR6:
 			VAR4 |= FUN2(VAR11, &VAR2->VAR9) != 0;
 	}


 	return VAR4;
 }
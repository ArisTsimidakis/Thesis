static void FUN1(struct VAR1 *VAR2, VAR3 *VAR4, int VAR5)


 {
 	if (FUN2(VAR6, &VAR2->VAR7) == 0)
 		memcpy(VAR2->VAR4.VAR8, VAR4->VAR8, sizeof(VAR2->VAR4.VAR8));
 	memcpy(VAR2->VAR9.VAR8, VAR4->VAR8, sizeof(VAR2->VAR9.VAR8));

	switch (VAR5) {


 		case VAR10:
 			FUN3(VAR11, &VAR2->VAR7);
 			break;
		case VAR12:
			FUN3(VAR13, &VAR2->VAR7);
			break;
		case VAR10|VAR12:
			FUN3(VAR14, &VAR2->VAR7);
 	}
 }
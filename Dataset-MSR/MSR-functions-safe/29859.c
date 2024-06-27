static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
	switch (VAR2->VAR5->VAR6) {
	case VAR7:
		if (!FUN2(VAR4->VAR8, VAR2->VAR8))
			return 0;
		break;
	default:
		
		if (VAR2->VAR9 == NULL) {
			if (!VAR4->VAR10)
				return 0;
			break;
		}

		
		if (FUN3(VAR2->VAR9,
			    VAR4->VAR11 ? VAR4->VAR11 : "",
			    VAR12))
			return 0;
		if (strlen(VAR4->VAR11) != 0 &&
		    VAR2->VAR13 != NULL &&
		    FUN3(VAR2->VAR13,
			    VAR4->VAR13 ? VAR4->VAR13 : "",
			    VAR14))
			return 0;
	}
	return 1;
}
static void FUN1(struct VAR1 *VAR1, struct VAR2 *VAR2,
				  struct VAR3 *VAR4, struct VAR5 *VAR5,
				  uint8_t VAR6)
{
	unsigned int VAR7 = 0;
	unsigned int VAR8 = 0;
	struct VAR9 *VAR10;
	struct VAR9 *VAR11;
	const char *VAR12;

	if (!VAR5 || (VAR6 == VAR13
		      && (!VAR5->VAR14
			  || VAR5->VAR14 == VAR15)))
		return;

	switch (VAR6) {
	case VAR13:
		VAR12 = "";
		VAR10 = VAR5->VAR16;
		if (VAR10 == NULL) 
			return;
		
		VAR7 = 2 + 2; 
 		VAR8 = 1 + 1;   
 		break;
 

#if VAR17


 	case VAR18:
 		VAR12 = "";
 		VAR10 = VAR5->VAR19;
		if (VAR10 == NULL) 
			return;
		VAR7 = 0;   
		VAR8 = 2 + 2; 
		break;
#endif

	default:
		assert(0);
	}

	
	for (VAR11 = VAR10; VAR11; VAR11 = VAR11->VAR20) {
		VAR7 += (VAR8 + VAR11->VAR21);
	}

	if (VAR7 > 0xffff) {
		FUN2("",
			  VAR12, VAR7);
		return;
	}

	if (VAR7 > 0xff) {
		
		FUN3(VAR4,
			    VAR22 | VAR23
				    | VAR24);
		FUN3(VAR4, VAR6);
		FUN4(VAR4, VAR7 & 0xffff);
	} else {
		
		FUN3(VAR4, VAR22 | VAR23);
		FUN3(VAR4, VAR6);
		FUN3(VAR4, VAR7 & 0xff);
	}

	if (VAR6 == VAR13) {
		
		FUN4(VAR4, VAR5->VAR14);
		FUN4(VAR4, VAR7 - 4);
	}

	
	for (VAR11 = VAR10; VAR11; VAR11 = VAR11->VAR20) {
		if (VAR6 == VAR13) {
			FUN3(VAR4, VAR11->VAR25);
			FUN3(VAR4, VAR11->VAR21);
#if VAR17
		} else {
			FUN4(VAR4, VAR11->VAR25);
			FUN4(VAR4, VAR11->VAR21);
#endif
		}
		FUN5(VAR4, VAR11->VAR26, VAR11->VAR21);
	}
}
FUN1(VAR1 *VAR2, u_char VAR3,
		const struct VAR4 *VAR5,
		u_int item_len VAR6, const VAR7 *VAR8,
		uint32_t phase VAR6, uint32_t doi VAR6,
		uint32_t proto VAR6, int depth VAR6)
{
	struct ikev2_auth VAR9;
	const char *VAR10[]={ "", "",
				"", "" };
 	const VAR7 *VAR11 = (const VAR7*)VAR5 + sizeof(VAR9);
 	unsigned int VAR12;
 

	FUN2(*VAR5);


 	FUN3(&VAR9, VAR5, sizeof(VAR9));
 	FUN4(VAR2, FUN5(VAR3), VAR9.VAR13.VAR14);
 	VAR12 = FUN6(VAR9.VAR13.VAR12);

	
	FUN7((VAR2,"", VAR12-4,
		  FUN8(VAR9.VAR15, VAR10)));
	if (VAR12 > 4) {
		if (VAR2->VAR16 > 1) {
			FUN7((VAR2, ""));
			if (!FUN9(VAR2, (const VAR17 *)VAR11, VAR12 - sizeof(VAR9)))
				goto VAR18;
			FUN7((VAR2, ""));
		} else if (VAR2->VAR16) {
			if (!FUN10(VAR2, VAR11, VAR8))
				goto VAR18;
		}
	}

	return (const VAR7 *)VAR5 + VAR12;
VAR18:
	FUN7((VAR2,"", FUN5(VAR3)));
	return NULL;
}
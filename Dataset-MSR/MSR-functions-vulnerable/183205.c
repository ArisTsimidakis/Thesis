FUN1(VAR1 *VAR2,
             register const VAR3 *VAR4, register u_int VAR5,
             register u_int VAR6)
{
	register const union VAR7 *VAR8;
	register int VAR9;
	int VAR10, VAR11, VAR12;
	u_int VAR13, VAR14;
	const VAR3 *VAR15;

	if (VAR5 < sizeof(struct VAR16)) {
		FUN2((VAR2, "", VAR17));
		return;
	}

	FUN3(*VAR4, sizeof(short));
	VAR14 = FUN4(VAR4);
	if (VAR14 < sizeof(struct VAR16)) {
		FUN2((VAR2, "", VAR17));
		return;
	}
	if (VAR14 > VAR5) {
		FUN2((VAR2, "", VAR17));
		return;
	}
	VAR5 = VAR14;

	VAR8 = (const union VAR7 *)&(VAR4[sizeof(short)]);
	FUN5(VAR8->VAR18.VAR19);
	VAR9 = FUN6(VAR8->VAR18.VAR19);

	if (VAR9 & VAR20) {
	    
	    u_int VAR21 = VAR9 & VAR22;
	    if (VAR2->VAR23)
		FUN2((VAR2, "", VAR21));
	    if (VAR5 < VAR21 + 2) {
		FUN2((VAR2, "", VAR17));
		return;
	    }
	    FUN3(VAR4[sizeof(short)], VAR21);
	    VAR4 += VAR21;
 	    VAR5 -= VAR21;
 	    VAR6 -= VAR21;
 	    VAR8 = (const union VAR7 *)&(VAR4[sizeof(short)]);


 	    VAR9 = FUN6(VAR8->VAR18.VAR19);
 	}
 
	if (VAR9 & VAR24) {
		FUN2((VAR2, ""));
		FUN7(VAR4, FUN8(VAR5, VAR6));
		return;
	}

	
	if (VAR9 & VAR25) {
		if (!FUN9(VAR2, VAR8, VAR5, VAR6))
			goto VAR26;
		return;
	}

	switch (VAR9 & VAR27) {
	case VAR28:
	    if (VAR5 < sizeof(struct VAR29)) {
		FUN2((VAR2, "", VAR17));
		return;
	    }
	    FUN5(VAR8->VAR30);
	    VAR10 =
		FUN4(VAR8->VAR30.VAR31.VAR32.VAR33);
	    VAR11 =
		FUN4(VAR8->VAR30.VAR34.VAR32.VAR33);
	    VAR12 = FUN6(VAR8->VAR30.VAR35);
	    VAR15 = &(VAR4[sizeof(short) + sizeof(struct VAR29)]);
	    VAR13 = VAR5 - sizeof(struct VAR29);
	    break;
	case VAR36:
	    FUN5(VAR8->VAR18);
	    VAR10 = FUN4(VAR8->VAR18.VAR37);
	    VAR11 = FUN4(VAR8->VAR18.VAR38);
	    VAR12 = (FUN6(VAR8->VAR18.VAR39) & VAR40)+1;
	    VAR15 = &(VAR4[sizeof(short) + sizeof(struct VAR16)]);
	    VAR13 = VAR5 - sizeof(struct VAR16);
	    break;
	default:
	    FUN2((VAR2, ""));
	    FUN7((const VAR3 *)VAR4, FUN8(VAR5, VAR6));
	    return;
	}

	FUN2((VAR2, "",
			FUN10(VAR2, VAR11), FUN10(VAR2, VAR10), VAR14));
	if (VAR2->VAR23) {
	    if (VAR9 & VAR41)
		FUN2((VAR2, ""));
	    if (VAR9 & VAR42)
		FUN2((VAR2, ""));
	    if (VAR9 & VAR43)
		FUN2((VAR2, ""));
	    FUN2((VAR2, "", VAR12));
	}

	if (!FUN11(VAR2, VAR15, VAR13))
		goto VAR26;
	return;

VAR26:
	FUN2((VAR2, "", VAR17));
	return;
}
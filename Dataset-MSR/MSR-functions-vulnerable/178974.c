asmlinkage void VAR1 FUN1(struct VAR2 *VAR3,
					unsigned long VAR4,
					unsigned long VAR5)
{
	unsigned long VAR6;
	struct VAR7 *VAR8;
	struct VAR9 *VAR10;
	struct VAR11 * VAR12;
	int VAR13;
	int VAR14;
	siginfo_t VAR15;

	VAR8 = VAR16;
	VAR10 = VAR8->VAR10;
	VAR13 = VAR17;
	VAR6 = FUN2();

	
	if (FUN3(FUN4(VAR5))) {
		if (FUN5(VAR5) >= 0)
			return;
		if (FUN6(VAR3, VAR6))
			return;

		goto VAR18;
	}

	if (FUN3(FUN6(VAR3, VAR6)))
		return;

	
 	if ((VAR3->VAR19 & VAR20) != VAR20)
 		FUN7();
 

	FUN8(VAR21, 1, 0, VAR3, VAR5);


 
 	
	if (FUN9() || !VAR10)
		goto VAR22;

	FUN10(&VAR10->VAR23);

	VAR12 = FUN11(VAR10, VAR5);
	if (!VAR12)
		goto VAR24;
	if (VAR12->VAR25 <= VAR5)
		goto VAR26;
	if (!(VAR12->VAR27 & VAR28))
		goto VAR24;
	if (FUN12(VAR12, VAR5))
		goto VAR24;

	
VAR26:
	VAR13 = VAR29;
	if (VAR4) {
		if (!(VAR12->VAR27 & VAR30))
			goto VAR24;
	} else {
		if (!(VAR12->VAR27 & (VAR31 | VAR32 | VAR30)))
			goto VAR24;
	}

	
	VAR14 = FUN13(VAR10, VAR12, VAR5, VAR4 ? VAR33 : 0);
	if (FUN3(VAR14 & VAR34)) {
		if (VAR14 & VAR35)
			goto VAR36;
		else if (VAR14 & VAR37)
			goto VAR38;
		FUN14();
 	}
 	if (VAR14 & VAR39) {
 		VAR8->VAR40++;

		FUN8(VAR41, 1, 0,


 				     VAR3, VAR5);
 	} else {
 		VAR8->VAR42++;

		FUN8(VAR43, 1, 0,


 				     VAR3, VAR5);
 	}
 
	FUN15(&VAR10->VAR23);
	return;

	
VAR24:
	FUN15(&VAR10->VAR23);

VAR18:
	if (FUN16(VAR3)) {
		VAR15.VAR44 = VAR45;
		VAR15.VAR46 = 0;
		VAR15.VAR13 = VAR13;
		VAR15.VAR47 = (void *) VAR5;
		FUN17(VAR45, &VAR15, VAR8);
		return;
	}

VAR22:
	
	if (FUN18(VAR3))
		return;

	if (FUN19(VAR3, VAR5))
		return;


	FUN20(1);

	if (FUN21()) {
		unsigned long VAR48;

		if (VAR5 < VAR49)
			FUN22(VAR50 ""
					  "");
		else
			FUN22(VAR50 ""
					  "");
		FUN22("", VAR5);
		FUN22(VAR50 "", VAR3->VAR51);
		VAR48 = (unsigned long)FUN23();
		if (VAR48) {
			VAR48 = ((FUN24(VAR48) *)VAR48)[VAR5 >> VAR52];
			FUN22(VAR50 "", VAR48);
			if (VAR48 & VAR53) {
				VAR48 &= VAR54;
				VAR5 &= 0x003ff000;
				VAR48 = ((FUN24(VAR48) *)
						FUN25(VAR48))[VAR5 >>
							    VAR55];
				FUN22(VAR50 "", VAR48);
			}
		}
	}

	FUN26("", VAR3, VAR4);
	FUN20(0);
	FUN27(VAR56);


VAR36:
	FUN15(&VAR10->VAR23);
	if (!FUN16(VAR3))
		goto VAR22;
	FUN28();
	return;

VAR38:
	FUN15(&VAR10->VAR23);

	
	VAR15.VAR44 = VAR57;
	VAR15.VAR46 = 0;
	VAR15.VAR13 = VAR58;
	VAR15.VAR47 = (void *)VAR5;
	FUN17(VAR57, &VAR15, VAR8);

	
	if (!FUN16(VAR3))
		goto VAR22;
}
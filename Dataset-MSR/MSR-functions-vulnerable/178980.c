void FUN1(struct VAR1 *VAR2, unsigned long VAR3, unsigned long VAR4)
{
	unsigned long VAR5 = VAR2->VAR6;
	unsigned long VAR7 = VAR2->VAR7;
	u32 VAR8;
	u64 VAR9;
	u8 VAR10;
	int VAR11;
	struct VAR12 *VAR13 = VAR14;
 
 	if (VAR7 & VAR15)
 		FUN2("", VAR2);

	FUN3(VAR16, 1, 0, VAR2, VAR3);


 	if (FUN4(VAR17))
 		VAR5 = (VAR18)VAR5;
 	if (FUN5(VAR8, (u32 VAR19 *) VAR5) != -VAR20) {
		int VAR21 = FUN6(VAR8, VAR2);
		u32 VAR22, VAR23;
		int VAR24;

		if ((VAR21 > VAR25) ||
		    (VAR21 < VAR26))
			goto VAR27;
		VAR22 = VAR23 = 0;
		VAR24 = FUN5(VAR22, (u32 VAR19 *)VAR3);
		if (!VAR24)
			VAR24 = FUN5(VAR23, (u32 VAR19 *)(VAR3 + 4));
		if (VAR24) {
			if (!(VAR21 & 0x2))
				goto VAR27;
			VAR22 = VAR23 = 0;
		}
		FUN7();
		VAR10 = ((VAR8 >> 25) & 0x1e) | ((VAR8 >> 20) & 0x20);
		VAR9 = (((VAR28)VAR22) << 32) | VAR23;
		if (VAR21 & 0x8) 
			VAR9 = FUN8(&VAR9);
		VAR11 = (VAR10 < 32) ? VAR29 : VAR30;
		if (!(FUN9()->VAR31[0] & VAR32)) {
			FUN9()->VAR31[0] = VAR32;
			FUN9()->VAR33[0] = 0;
		}
		if (!(FUN9()->VAR31[0] & VAR11)) {
			if (VAR10 < 32)
				memset(VAR13->VAR2, 0, 32*sizeof(VAR18));
			else
				memset(VAR13->VAR2+32, 0, 32*sizeof(VAR18));
		}
		*(VAR28 *)(VAR13->VAR2 + VAR10) = VAR9;
		FUN9()->VAR31[0] |= VAR11;
	} else {
VAR27:
		if (VAR34 == VAR35)
			FUN10(VAR2, VAR3, VAR4);
		else
			FUN11(VAR2, VAR4, VAR3);
		return;
	}
	FUN12(VAR2);
}
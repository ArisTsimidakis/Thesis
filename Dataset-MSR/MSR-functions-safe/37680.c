static int FUN1(struct VAR1 *VAR2, unsigned long VAR3)
{
	unsigned long VAR4 = VAR3 | (FUN2(VAR2)->VAR5.VAR6 ?
		    VAR7 : VAR8);

	if (VAR3 & VAR9) {
		
		if (!FUN3(VAR2))
			return 1;
	}
	if (FUN2(VAR2)->VAR10.VAR11 &&
	    ((VAR3 & VAR12) != VAR12))
		return 1;

	VAR2->VAR13.VAR3 = VAR3;
	if (VAR14) {
		if (!FUN4(VAR2)) {
			VAR4 &= ~VAR15;
			VAR4 |= VAR16;
			
			VAR4 &= ~VAR17;
		} else if (!(VAR3 & VAR15)) {
			VAR4 &= ~VAR15;
		}
	}

	FUN5(VAR18, VAR3);
	FUN5(VAR19, VAR4);
	return 0;
}
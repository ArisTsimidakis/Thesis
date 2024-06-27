VAR1 FUN1(VAR2 *VAR3)
{
	VAR4 *VAR5 = (VAR4*)VAR3;

	if (VAR5->VAR6 || VAR5->VAR7) {
		VAR5->VAR8 |= 1;
	}
	if (VAR5->VAR9) {
		VAR5->VAR10 = 1;
	}

	if (VAR5->VAR8 & 1) VAR5->VAR11 += 8;
	VAR5->VAR11 += 4;
	
	switch (VAR5->VAR6) {
	case VAR12:
	case VAR13:
	case VAR14:
	case VAR15:
		if (VAR5->VAR9) FUN2(VAR5->VAR9);
		if (VAR5->VAR16) FUN2(VAR5->VAR16);
		VAR5->VAR9 = NULL;
		VAR5->VAR16 = NULL;
		VAR5->VAR17 = 1;
		break;
	}

	VAR5->VAR11 += ((VAR5->VAR10==1) ? 8 : 4) * VAR5->VAR17;
	return VAR18;
}
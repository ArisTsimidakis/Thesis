static int FUN1(struct VAR1 *this,
			   gpa_t VAR2, int VAR3, void *VAR4)
{
	struct VAR5 *VAR6 = FUN2(this);
	struct VAR7 *VAR8 = &VAR6->VAR8;
	struct VAR9 *VAR9 = VAR6->VAR9;
	int VAR10, VAR11;
	struct VAR12 *VAR13;
	if (!FUN3(VAR2))
 		return -VAR14;
 
 	VAR2 &= VAR15;






 	VAR13 = &VAR8->VAR16[VAR2];
 
 	FUN4(&VAR8->VAR17);

	if (VAR13->VAR18) {
		VAR13->VAR18 = 0;
		VAR10 = VAR13->VAR19;
	} else if (VAR13->VAR20) {
		switch (VAR13->VAR20) {
		default:
		case VAR21:
			VAR10 = VAR13->VAR22 & 0xff;
			VAR13->VAR20 = 0;
			break;
		case VAR23:
			VAR10 = VAR13->VAR22 >> 8;
			VAR13->VAR20 = 0;
			break;
		case VAR24:
			VAR10 = VAR13->VAR22 & 0xff;
			VAR13->VAR20 = VAR23;
			break;
		}
	} else {
		switch (VAR13->VAR25) {
		default:
		case VAR21:
			VAR11 = FUN5(VAR9, VAR2);
			VAR10 = VAR11 & 0xff;
			break;
		case VAR23:
			VAR11 = FUN5(VAR9, VAR2);
			VAR10 = (VAR11 >> 8) & 0xff;
			break;
		case VAR24:
			VAR11 = FUN5(VAR9, VAR2);
			VAR10 = VAR11 & 0xff;
			VAR13->VAR25 = VAR26;
			break;
		case VAR26:
			VAR11 = FUN5(VAR9, VAR2);
			VAR10 = (VAR11 >> 8) & 0xff;
			VAR13->VAR25 = VAR24;
			break;
		}
	}

	if (VAR3 > sizeof(VAR10))
		VAR3 = sizeof(VAR10);
	memcpy(VAR4, (char *)&VAR10, VAR3);

	FUN6(&VAR8->VAR17);
	return 0;
}
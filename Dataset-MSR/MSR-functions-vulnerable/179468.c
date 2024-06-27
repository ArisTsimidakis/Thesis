static int FUN1(struct VAR1 *VAR2,
			    struct VAR3 *VAR4, int VAR5)
{
	struct VAR6 *VAR7 = VAR2->VAR7;
	struct snd_kcontrol VAR8, *VAR9;
	unsigned int VAR10;
	long VAR11;
	struct VAR12 *VAR13;
	int VAR14, VAR15;

	if (!VAR5 && VAR7->VAR16 >= VAR17)
		return -VAR18;
	if (VAR4->VAR19 < 1)
		return -VAR20;
	VAR10 = VAR4->VAR10 == 0 ? VAR21 :
		(VAR4->VAR10 & (VAR21|
				 VAR22|
				 VAR23));
	VAR4->VAR24.VAR25 = 0;
	memset(&VAR8, 0, sizeof(VAR8));
	FUN2(&VAR7->VAR26);
	VAR9 = FUN3(VAR7, &VAR4->VAR24);
	VAR15 = 0;
	if (VAR9) {
		if (VAR5)
			VAR15 = FUN4(VAR7, VAR9);
		else
			VAR15 = -VAR27;
	} else {
		if (VAR5)
			VAR15 = -VAR28;
	}
	FUN5(&VAR7->VAR26);
	if (VAR15 < 0)
		return VAR15;
	memcpy(&VAR8.VAR24, &VAR4->VAR24, sizeof(VAR4->VAR24));
	VAR8.VAR19 = VAR4->VAR29 ? VAR4->VAR29 : 1;
	VAR10 |= VAR30;
	if (VAR4->VAR31 == VAR32)
		VAR8.VAR4 = VAR33;
	else
		VAR8.VAR4 = VAR34;
	if (VAR10 & VAR35)
		VAR8.VAR36 = VAR37;
	if (VAR10 & VAR38)
		VAR8.VAR39 = VAR40;
	if (VAR10 & VAR23) {
		VAR8.VAR41.VAR42 = VAR43;
		VAR10 |= VAR44;
	}
	switch (VAR4->VAR31) {
	case VAR45:
	case VAR46:
		VAR11 = sizeof(long);
		if (VAR4->VAR19 > 128)
			return -VAR20;
		break;
	case VAR47:
		VAR11 = sizeof(long long);
		if (VAR4->VAR19 > 64)
			return -VAR20;
		break;
	case VAR32:
		VAR11 = sizeof(unsigned int);
		if (VAR4->VAR19 > 128 || VAR4->VAR48.VAR49.VAR50 == 0)
			return -VAR20;
		break;
	case VAR51:
		VAR11 = sizeof(unsigned char);
		if (VAR4->VAR19 > 512)
			return -VAR20;
		break;
	case VAR52:
		VAR11 = sizeof(struct VAR53);
		if (VAR4->VAR19 != 1)
			return -VAR20;
		break;
	default:
		return -VAR20;
	}
	VAR11 *= VAR4->VAR19;
 	VAR13 = FUN6(sizeof(struct VAR12) + VAR11, VAR54);
 	if (VAR13 == NULL)
 		return -VAR18;


 	VAR13->VAR4 = *VAR4;
 	VAR13->VAR4.VAR10 = 0;
 	VAR13->VAR55 = (char *)VAR13 + sizeof(*VAR13);
	VAR13->VAR56 = VAR11;
	if (VAR13->VAR4.VAR31 == VAR32) {
		VAR15 = FUN7(VAR13);
		if (VAR15 < 0) {
			FUN8(VAR13);
			return VAR15;
		}
	}
	VAR8.VAR57 = VAR58;
	VAR9 = FUN9(&VAR8, VAR10);
	if (VAR9 == NULL) {
		FUN8(VAR13->VAR59);
		FUN8(VAR13);
		return -VAR18;
	}
	VAR9->VAR60 = VAR13;
	for (VAR14 = 0; VAR14 < VAR9->VAR19; VAR14++)
		VAR9->VAR61[VAR14].VAR29 = VAR2;
	VAR15 = FUN10(VAR7, VAR9);
	if (VAR15 < 0)
		return VAR15;

	FUN2(&VAR7->VAR26);
	VAR7->VAR16++;
	FUN5(&VAR7->VAR26);

	return 0;
}
static VAR1 FUN1(const struct VAR2 *VAR3,
					    union sctp_params VAR4,
					    struct VAR5 *VAR6,
					    struct VAR5 **VAR7)
{
	int VAR8 = VAR9;

	switch (VAR4.VAR10->VAR11 & VAR12) {
	case VAR13:
		VAR8 =  VAR14;
		break;
	case VAR15:
		break;
	case VAR16:
		VAR8 =  VAR14;
		
	case VAR17:
		
		if (NULL == *VAR7)
			*VAR7 = FUN2(VAR3, VAR6);

		if (*VAR7) {
			if (!FUN3(*VAR7, VAR18,
					FUN4(FUN5(VAR4.VAR10->VAR19))))
				FUN6(*VAR7,
						FUN4(FUN5(VAR4.VAR10->VAR19)),
						VAR4.VAR20);
		} else {
			
			VAR8 = VAR21;
		}
		break;
	default:
		break;
	}

	return VAR8;
}
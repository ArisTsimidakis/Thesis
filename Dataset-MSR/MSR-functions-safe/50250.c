static int FUN1(struct socket *VAR1, struct user_msghdr VAR2 *VAR3,
			 struct VAR4 *VAR5, unsigned int VAR6,
			 struct VAR7 *VAR7,
			 unsigned int VAR8)
{
	struct compat_msghdr VAR2 *VAR9 =
	    (struct compat_msghdr VAR2 *)VAR3;
	struct sockaddr_storage VAR10;
	struct iovec VAR11[VAR12], *VAR13 = VAR11;
	unsigned char VAR14[sizeof(struct VAR15) + 20]
	    FUN2 ((FUN3(sizeof(VAR16))));
	
	unsigned char *VAR17 = VAR14;
	int VAR18;
	ssize_t VAR19;

	VAR5->VAR20 = &VAR10;

	if (VAR21 & VAR6)
		VAR19 = FUN4(VAR5, VAR9, NULL, &VAR13);
	else
		VAR19 = FUN5(VAR5, VAR3, NULL, &VAR13);
	if (VAR19 < 0)
		return VAR19;

	VAR19 = -VAR22;

	if (VAR5->VAR23 > VAR24)
		goto VAR25;
	VAR6 |= (VAR5->VAR26 & VAR8);
	VAR18 = VAR5->VAR23;
	if ((VAR21 & VAR6) && VAR18) {
		VAR19 =
		    FUN6(VAR5, VAR1->VAR27, VAR14,
						     sizeof(VAR14));
		if (VAR19)
			goto VAR25;
		VAR17 = VAR5->VAR28;
		VAR18 = VAR5->VAR23;
	} else if (VAR18) {
		if (VAR18 > sizeof(VAR14)) {
			VAR17 = FUN7(VAR1->VAR27, VAR18, VAR29);
			if (VAR17 == NULL)
				goto VAR25;
		}
		VAR19 = -VAR30;
		
		if (FUN8(VAR17,
				   (void __user VAR31 *)VAR5->VAR28,
				   VAR18))
			goto VAR32;
		VAR5->VAR28 = VAR17;
	}
	VAR5->VAR26 = VAR6;

	if (VAR1->VAR33->VAR34 & VAR35)
		VAR5->VAR26 |= VAR36;
	
	if (VAR7 && VAR5->VAR20 &&
	    VAR7->VAR37 == VAR5->VAR38 &&
	    !memcmp(&VAR7->VAR39, VAR5->VAR20,
		    VAR7->VAR37)) {
		VAR19 = FUN9(VAR1, VAR5);
		goto VAR32;
	}
	VAR19 = FUN10(VAR1, VAR5);
	
	if (VAR7 && VAR19 >= 0) {
		VAR7->VAR37 = VAR5->VAR38;
		if (VAR5->VAR20)
			memcpy(&VAR7->VAR39, VAR5->VAR20,
			       VAR7->VAR37);
	}

VAR32:
	if (VAR17 != VAR14)
		FUN11(VAR1->VAR27, VAR17, VAR18);
VAR25:
	FUN12(VAR13);
	return VAR19;
}
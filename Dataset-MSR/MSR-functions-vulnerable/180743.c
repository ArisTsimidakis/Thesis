FUN1(recvfrom, int, VAR1, void VAR2 *, VAR3, VAR4, VAR5,
		unsigned int, VAR6, struct sockaddr VAR2 *, VAR7,
		int VAR2 *, VAR8)
{
	struct socket *VAR9;
	struct iovec VAR10;
	struct msghdr VAR11;
	struct sockaddr_storage VAR12;
	int VAR13, VAR14;
	int VAR15;
 
 	if (VAR5 > VAR16)
 		VAR5 = VAR16;




 	VAR9 = FUN2(VAR1, &VAR13, &VAR15);
 	if (!VAR9)
 		goto VAR17;

	VAR11.VAR18 = NULL;
	VAR11.VAR19 = 0;
	VAR10.VAR20 = VAR5;
	VAR10.VAR21 = VAR3;
	FUN3(&VAR11.VAR22, VAR23, &VAR10, 1, VAR5);
	
	VAR11.VAR24 = VAR7 ? (struct VAR25 *)&VAR12 : NULL;
	
	VAR11.VAR26 = 0;
	if (VAR9->VAR27->VAR28 & VAR29)
		VAR6 |= VAR30;
	VAR13 = FUN4(VAR9, &VAR11, VAR5, VAR6);

	if (VAR13 >= 0 && VAR7 != NULL) {
		VAR14 = FUN5(&VAR12,
					 VAR11.VAR26, VAR7, VAR8);
		if (VAR14 < 0)
			VAR13 = VAR14;
	}

	FUN6(VAR9->VAR27, VAR15);
VAR17:
	return VAR13;
}
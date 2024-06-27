static void FUN1(int VAR1)
{
 	ssize_t VAR2;
 	struct sockaddr VAR3;
 	socklen_t VAR4;

	char VAR5[VAR6];


 
 	memset(VAR5, 0, sizeof(VAR5));

	VAR2 = recvfrom(VAR1, VAR5, sizeof(VAR5), VAR7, &VAR3, &VAR4);


 	if (VAR2 > 0) {

		VAR5[VAR2] = 0;


 		if (VAR3.VAR8 != VAR9)
 			return;
 
		if (strstr(VAR5, "")) {
			size_t VAR10;
			char *VAR11, *VAR12;
			struct VAR13 *VAR14;
			struct VAR15 *VAR16 = (struct VAR15 *)&VAR3;

			VAR14 = FUN2(&VAR3);
			if (!VAR14) {
				FUN3(VAR17, "", FUN4(VAR16->VAR18));
				return;
			}
			FUN3(VAR17, "", FUN4(VAR16->VAR18));

			VAR12 = FUN5(VAR5, "");
			if (!VAR12) {
				FUN3(VAR17, "" VAR19);
				VAR12 = VAR19;
				FUN6(VAR14, VAR12, &VAR3);
				return;
			}

			VAR12 = strchr(VAR12, '');
			if (!VAR12)
				return;
			VAR12++;
			while (FUN7(*VAR12))
				VAR12++;

			VAR11 = strstr(VAR12, "");
			if (!VAR11)
				return;
			*VAR11 = 0;

			for (VAR10 = 0; VAR20[VAR10]; VAR10++) {
				if (!strcmp(VAR20[VAR10], VAR12)) {
					FUN3(VAR17, "", VAR12,
					      FUN4(VAR16->VAR18), FUN8(VAR16->VAR21));
					FUN6(VAR14, VAR12, &VAR3);
					return;
				}
			}

			FUN3(VAR17, "", VAR12,
			      FUN4(VAR16->VAR18));
		}
	}
}
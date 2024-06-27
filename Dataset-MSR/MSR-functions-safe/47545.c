static int FUN1(struct VAR1 *VAR2,
			     struct VAR3 *VAR4, struct VAR5 *VAR6,
			     int VAR7, VAR8 *VAR9, VAR8 *VAR10,
			     VAR8 *VAR11)
{
	int VAR12 = 0;
	u32 VAR13;

	do {
		if ((*VAR11 + VAR7) < VAR14) {
			for (VAR13 = 0; VAR13 < VAR7; VAR13++) {
				VAR10[*VAR11 + VAR13] =
					*(VAR9 + VAR13);
			}
			*VAR11 += VAR7;
			VAR7 = 0;
		} else {
			if (VAR6->VAR15) {
				VAR12 = FUN2(VAR2,
						&VAR2->VAR16);
				memmove(VAR6->VAR16.VAR10,
					VAR2->VAR16.VAR10,
					VAR14 / sizeof(VAR17));
				if (VAR12) {
					FUN3(VAR2->VAR18,
						"",
						VAR19);
					goto VAR20;
				}
			} else {
				VAR12 = FUN4(VAR2, VAR4);
				if (VAR12) {
					FUN3(VAR2->VAR18,
						"",
						VAR19);
					goto VAR20;
				}
				VAR6->VAR15 = 1;
			}
			
			if ((0 == (((VAR17)VAR9) % 4)) &&
			    (0 == *VAR11))
				FUN5(VAR2,
						  (const VAR17 *)VAR9,
						  VAR14);
			else {
				for (VAR13 = 0;
				     VAR13 < (VAR17)(VAR14 - *VAR11);
				     VAR13++) {
					VAR10[*VAR11 + VAR13] =
						*(VAR9 + VAR13);
				}
				FUN5(VAR2,
						  (const VAR17 *)VAR10,
						  VAR14);
			}
			FUN6(VAR6, VAR14);
			VAR9 += (VAR14 - *VAR11);

			VAR7 -= (VAR14 - *VAR11);
			*VAR11 = 0;

			VAR12 = FUN7(VAR2,
					&VAR2->VAR16);

			memmove(VAR2->VAR16.VAR10,
				VAR6->VAR16.VAR10,
				VAR14 / sizeof(VAR17));
			if (VAR12) {
				FUN3(VAR2->VAR18, "",
					VAR19);
				goto VAR20;
			}
		}
	} while (VAR7 != 0);
VAR20:

	return VAR12;
}
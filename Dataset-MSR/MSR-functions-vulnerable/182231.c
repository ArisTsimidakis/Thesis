FUN1(struct VAR1 *VAR2, const struct VAR3 *VAR4,
				 struct VAR5 **VAR6)
{
	struct sc_path VAR7;
	struct VAR5 *VAR8 = NULL;
	size_t VAR9, VAR10;
	int VAR11;

	FUN2(VAR2->VAR12);
	assert(VAR2 != NULL && VAR4 != NULL);
 
 	memcpy(&VAR7, VAR4, sizeof(struct VAR3));
 






 	FUN3(VAR2->VAR12, "",
 			VAR4->VAR13, FUN4(VAR4), VAR6);
 	FUN3(VAR2->VAR12, "",
			VAR14->VAR7.VAR13, FUN4(&VAR14->VAR7));
	if (VAR15)
		FUN3(VAR2->VAR12, "",
				VAR15->VAR7.VAR13, FUN4(&VAR15->VAR7));

	if (VAR7.VAR13 == VAR16 || VAR7.VAR13 == VAR17)   {
		FUN5(VAR15);
		VAR15 = NULL;

		VAR11 = VAR18->FUN6(VAR2, &VAR7, &VAR8);
		FUN7(VAR2->VAR12, VAR11, "");
		if (!VAR8)
			return VAR19;

		if (VAR7.VAR13 == VAR16)   {
			memcpy(&VAR8->VAR7, &VAR14->VAR7, sizeof(struct VAR3));
			if (VAR8->VAR7.VAR20 > 2)
				VAR8->VAR7.VAR20 -= 2;

			FUN5(VAR14);
			FUN8(&VAR14, VAR8);
		}
		else   {
			if (VAR8->VAR13 == VAR21)   {
				FUN9(&VAR8->VAR7, &VAR14->VAR7, &VAR7);

				FUN5(VAR14);
				FUN8(&VAR14, VAR8);
			}
			else   {
				FUN5(VAR15);

				FUN8(&VAR15, VAR8);
				FUN9(&VAR15->VAR7, &VAR14->VAR7, &VAR7);
			}
		}
		if (VAR6)
			FUN8(VAR6, VAR8);

		FUN5(VAR8);
	}
	else if (VAR7.VAR13 == VAR22)   {
		VAR11 = VAR18->FUN6(VAR2, &VAR7, NULL);
		if (VAR11)   {
			FUN5(VAR15);
			VAR15 = NULL;
		}
		FUN7(VAR2->VAR12, VAR11, "");
	}
	else   {
		for (VAR9 = 0; VAR9 < VAR7.VAR20 && VAR9 < VAR14->VAR7.VAR20; VAR9 += 2)
			if (VAR7.VAR23[VAR9] != VAR14->VAR7.VAR23[VAR9] ||
					VAR7.VAR23[VAR9 + 1] != VAR14->VAR7.VAR23[VAR9 + 1])
				break;

		FUN3(VAR2->VAR12, ""VAR24"", VAR9);
		if (VAR9 && VAR9 < VAR14->VAR7.VAR20)   {
			size_t VAR25 = VAR14->VAR7.VAR20 - VAR9;

			FUN3(VAR2->VAR12, ""VAR24"",
			       VAR25);
			for (VAR10=0; VAR10<VAR25; VAR10+=2)   {
				struct sc_path VAR26;

				memcpy(&VAR26, &VAR14->VAR7,  sizeof(struct VAR3));
				VAR26.VAR13 = VAR16;

				VAR11 = FUN1 (VAR2, &VAR26, VAR6);
				FUN7(VAR2->VAR12, VAR11, "");
			}
		}

		if (VAR7.VAR20 - VAR9 > 0)   {
			struct sc_path VAR26;

			memset(&VAR26, 0, sizeof(struct VAR3));
			VAR26.VAR13 = VAR17;
			VAR26.VAR20 = 2;

			for (VAR10=0; VAR10 < VAR7.VAR20 - VAR9; VAR10+=2)   {
				memcpy(VAR26.VAR23, VAR7.VAR23 + VAR9 + VAR10, 2);

				VAR11 = FUN1(VAR2, &VAR26, VAR6);
				FUN7(VAR2->VAR12, VAR11, "");
			}
		}
		else if (VAR7.VAR20 - VAR9 == 0 && VAR6)  {
			if (FUN10(&VAR7, &VAR14->VAR7))
				FUN8(VAR6, VAR14);
			else  if (VAR15)
				FUN8(VAR6, VAR15);
			else
				FUN7(VAR2->VAR12, VAR27, "");
		}
	}

	FUN11(VAR2->VAR12, 0);
}
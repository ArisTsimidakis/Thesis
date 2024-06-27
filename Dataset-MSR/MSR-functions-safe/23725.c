static void FUN1(struct VAR1 *VAR2)
{
	struct VAR3 *VAR3;
	int VAR4;

	FUN2(VAR2, VAR3, VAR4) {
		switch (VAR3->VAR5) {
		case VAR6:
			continue;

		case VAR7:
			VAR3->VAR8 = VAR7;
			VAR3->VAR9 = VAR9;

			if (VAR2->VAR10.VAR11 == VAR12) {
				
				FUN3(VAR3);
			} else if (VAR2->VAR10.VAR11 != VAR13) {
				
				FUN4(VAR3);
			} else if (VAR3 != VAR2->VAR14) {
				
				FUN3(VAR3);
			}

			FUN5(VAR3);

			FUN6("",
				VAR2->VAR15->VAR16, VAR3->VAR15->VAR16,
				VAR3->VAR17, VAR3->VAR18 ? "" : "");

			
			if (VAR2->VAR10.VAR11 == VAR12)
				FUN7(VAR3, VAR7);

			if (FUN8(VAR2))
				FUN9(VAR2, VAR3,
							    VAR7);

			if (!VAR2->VAR19 ||
			    (VAR3 == VAR2->VAR14))
				goto VAR20;

			continue;

		case VAR21:
			if (VAR3->VAR22 < VAR23)
				VAR3->VAR22++;

			VAR3->VAR8 = VAR21;

			if (VAR2->VAR10.VAR11 == VAR13 ||
			    VAR2->VAR10.VAR11 == VAR12)
				FUN10(VAR3);

			FUN6("",
				VAR2->VAR15->VAR16, VAR3->VAR15->VAR16);

			if (VAR2->VAR10.VAR11 == VAR12)
				FUN7(VAR3,
							    VAR21);

			if (FUN8(VAR2))
				FUN9(VAR2, VAR3,
							    VAR21);

			if (VAR3 == VAR2->VAR19)
				goto VAR20;

			continue;

		default:
			FUN11("",
			       VAR2->VAR15->VAR16, VAR3->VAR5,
			       VAR3->VAR15->VAR16);
			VAR3->VAR5 = VAR6;

			continue;
		}

VAR20:
		FUN12();
		FUN13();
		FUN14(&VAR2->VAR24);
		FUN15(VAR2);
		FUN16(&VAR2->VAR24);
		FUN17();
	}

	FUN18(VAR2);
}
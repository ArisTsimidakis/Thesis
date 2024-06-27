FUN1(VAR1 *VAR2,
                      const struct VAR3 *VAR4, const VAR5 *VAR6)
{
	u_int VAR7 = VAR4->VAR7;
	u_int VAR8;
	uint16_t VAR9;
	uint8_t VAR10;
	uint16_t VAR11 = 0;

	if (VAR7 < 3) {
		FUN2((VAR2, ""));
		return VAR7;
	}
	VAR8 = 3;

	VAR9 = FUN3(VAR6);
	VAR10 = FUN4(VAR6 + 2);

	VAR6 += 3;
	VAR7 -= 3;

	FUN2((VAR2,"", VAR12[FUN5(VAR9)]));
	if (VAR2->VAR13)
		FUN2((VAR2,"", VAR10));

	
	switch (FUN6(VAR9)) {
	case VAR14:
		if (VAR9 & VAR15) {
			
			FUN2((VAR2, ""));
			return VAR8;
		}
		if (VAR2->VAR13)
			FUN2((VAR2,""));
		break;
	case VAR16:
		if (VAR2->VAR13)
			FUN2((VAR2,""));
		return VAR8;
	case VAR17:
		if (VAR7 < 2) {
			FUN2((VAR2, ""));
			return VAR8;
		}
		VAR11 = FUN3(VAR6);
		VAR6 += 2;
		VAR7 -= 2;
		VAR8 += 2;
		if (VAR7 < 2) {
			FUN2((VAR2, ""));
			return VAR8;
		}
		if (VAR2->VAR13)
			FUN2((VAR2,"", VAR11, FUN3(VAR6 + 2)));
		VAR6 += 2;
		VAR7 -= 2;
		VAR8 += 2;
		break;
	case VAR18:
		if (VAR7 < 2) {
			FUN2((VAR2, ""));
			return VAR8;
		}
		VAR11 = FUN3(VAR6);
		VAR6 += 2;
		VAR7 -= 2;
		VAR8 += 2;
		if (VAR7 < 8) {
			FUN2((VAR2, ""));
 			return VAR8;
 		}
 		if (VAR2->VAR13)

			FUN2((VAR2,"", VAR11, FUN7(VAR2, VAR6 + 2)));


 		VAR6 += 8;
 		VAR7 -= 8;
 		VAR8 += 8;
		break;
	}
	if (VAR2->VAR13)
		FUN2((VAR2,""));

	
	switch (FUN8(VAR9)) {
	case VAR14:
		if (VAR2->VAR13)
			FUN2((VAR2,""));
		break;
	case VAR16:
		if (VAR2->VAR13)
			FUN2((VAR2,""));
		return 0;
	case VAR17:
		if (!(VAR9 & VAR15)) {
			
			if (VAR7 < 2) {
				FUN2((VAR2, ""));
				return VAR8;
			}
			VAR11 = FUN3(VAR6);
			VAR6 += 2;
			VAR7 -= 2;
			VAR8 += 2;
		}
		if (VAR7 < 2) {
			FUN2((VAR2, ""));
			return VAR8;
		}
		if (VAR2->VAR13)
			FUN2((VAR2,"", VAR11, FUN3(VAR6)));
		VAR6 += 2;
		VAR7 -= 2;
		VAR8 += 2;
		break;
	case VAR18:
		if (!(VAR9 & VAR15)) {
			
			if (VAR7 < 2) {
				FUN2((VAR2, ""));
				return VAR8;
			}
			VAR11 = FUN3(VAR6);
			VAR6 += 2;
			VAR7 -= 2;
			VAR8 += 2;
		}
		if (VAR7 < 8) {
			FUN2((VAR2, ""));
			return VAR8;
		}
		if (VAR2->VAR13)
			FUN2((VAR2,"", VAR11, FUN7(VAR2, VAR6)));
		VAR6 += 8;
		VAR7 -= 8;
		VAR8 += 8;
		break;
	}

	if (!VAR2->VAR19)
		FUN9(VAR6, VAR7);

	return VAR8;
}
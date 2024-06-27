static int FUN1(struct VAR1 *VAR2)
{
	struct VAR3 *VAR4 = VAR2->VAR4;
	struct VAR5 *VAR6 = VAR4->VAR7;
	const struct VAR8 *VAR9;
	const int VAR10 = VAR4->VAR11;
	const struct VAR12 *VAR13;
	struct VAR14 *VAR15;
	struct bpf_insn VAR16[16];
	struct VAR3 *VAR17;
	struct VAR18 *VAR19;
	int VAR20, VAR21, VAR22 = 0;

	for (VAR20 = 0; VAR20 < VAR10; VAR20++, VAR6++) {
		if (VAR6->VAR23 == (VAR24 | VAR25 | VAR26) ||
		    VAR6->VAR23 == (VAR24 | VAR27 | VAR26) ||
		    VAR6->VAR23 == (VAR28 | VAR25 | VAR26) ||
		    VAR6->VAR23 == (VAR28 | VAR27 | VAR26)) {
			bool VAR29 = FUN2(VAR6->VAR23) == VAR24;
			struct bpf_insn VAR30[] = {
				FUN3(VAR6->VAR31, VAR6->VAR31),
				
				FUN4(VAR32, VAR6->VAR31, 0, 2),
				FUN5(VAR33, VAR6->VAR34, VAR6->VAR34),
				FUN4(VAR35, 0, 0, 1),
				*VAR6,
			};
			struct bpf_insn VAR36[] = {
				FUN3(VAR6->VAR31, VAR6->VAR31),
				
				FUN4(VAR37, VAR6->VAR31, 0, 1),
				*VAR6,
			};
			struct VAR5 *VAR38;

			if (VAR6->VAR23 == (VAR24 | VAR27 | VAR26) ||
			    VAR6->VAR23 == (VAR28 | VAR27 | VAR26)) {
				VAR38 = VAR30 + (VAR29 ? 1 : 0);
				VAR21 = FUN6(VAR30) - (VAR29 ? 1 : 0);
			} else {
				VAR38 = VAR36 + (VAR29 ? 1 : 0);
				VAR21 = FUN6(VAR36) - (VAR29 ? 1 : 0);
			}

			VAR17 = FUN7(VAR2, VAR20 + VAR22, VAR38, VAR21);
			if (!VAR17)
				return -VAR39;

			VAR22    += VAR21 - 1;
			VAR2->VAR4 = VAR4 = VAR17;
			VAR6      = VAR17->VAR7 + VAR20 + VAR22;
			continue;
		}

		if (FUN2(VAR6->VAR23) == VAR40 &&
		    (FUN8(VAR6->VAR23) == VAR41 ||
		     FUN8(VAR6->VAR23) == VAR42)) {
			VAR21 = VAR2->VAR13->FUN9(VAR6, VAR16);
			if (VAR21 == 0 || VAR21 >= FUN6(VAR16)) {
				FUN10(VAR2, "");
				return -VAR43;
			}

			VAR17 = FUN7(VAR2, VAR20 + VAR22, VAR16, VAR21);
			if (!VAR17)
				return -VAR39;

			VAR22    += VAR21 - 1;
			VAR2->VAR4 = VAR4 = VAR17;
			VAR6      = VAR17->VAR7 + VAR20 + VAR22;
 			continue;
 		}
 






































































































 		if (VAR6->VAR23 != (VAR44 | VAR45))
 			continue;
 		if (VAR6->VAR31 == VAR46)
			continue;

		if (VAR6->VAR47 == VAR48)
			VAR4->VAR49 = 1;
		if (VAR6->VAR47 == VAR50)
			FUN11();
		if (VAR6->VAR47 == VAR51)
			VAR4->VAR52 = 1;
		if (VAR6->VAR47 == VAR53) {
			
			VAR4->VAR54 = 1;
			VAR2->VAR4->VAR15->VAR55 = VAR56;
			VAR2->VAR4->VAR15->VAR57 = VAR58;

			
			VAR6->VAR47 = 0;
			VAR6->VAR23 = VAR44 | VAR59;

			VAR15 = &VAR2->VAR60[VAR20 + VAR22];
			if (!FUN12(VAR15))
				continue;

			
			if (FUN13(VAR15)) {
				FUN10(VAR2, "");
				return -VAR43;
			}

			VAR19 = FUN14(VAR15->VAR61);
			VAR16[0] = FUN4(VAR62, VAR63,
						  VAR19->VAR64, 2);
			VAR16[1] = FUN15(VAR65, VAR63,
						    FUN16(VAR19,
								 struct VAR66,
								 VAR67)->VAR68);
			VAR16[2] = *VAR6;
			VAR21 = 3;
			VAR17 = FUN7(VAR2, VAR20 + VAR22, VAR16, VAR21);
			if (!VAR17)
				return -VAR39;

			VAR22    += VAR21 - 1;
			VAR2->VAR4 = VAR4 = VAR17;
			VAR6      = VAR17->VAR7 + VAR20 + VAR22;
			continue;
		}

		
		if (VAR4->VAR69 && VAR70 == 64 &&
		    (VAR6->VAR47 == VAR71 ||
		     VAR6->VAR47 == VAR72 ||
		     VAR6->VAR47 == VAR73 ||
		     VAR6->VAR47 == VAR74   ||
		     VAR6->VAR47 == VAR75    ||
		     VAR6->VAR47 == VAR76)) {
			VAR15 = &VAR2->VAR60[VAR20 + VAR22];
			if (FUN13(VAR15))
				goto VAR77;

			VAR19 = FUN14(VAR15->VAR61);
			VAR13 = VAR19->VAR13;
			if (VAR6->VAR47 == VAR71 &&
			    VAR13->VAR78) {
				VAR21 = VAR13->FUN17(VAR19, VAR16);
				if (VAR21 == 0 || VAR21 >= FUN6(VAR16)) {
					FUN10(VAR2, "");
					return -VAR43;
				}

				VAR17 = FUN7(VAR2, VAR20 + VAR22,
							       VAR16, VAR21);
				if (!VAR17)
					return -VAR39;

				VAR22    += VAR21 - 1;
				VAR2->VAR4 = VAR4 = VAR17;
				VAR6      = VAR17->VAR7 + VAR20 + VAR22;
				continue;
			}

			FUN18(!FUN19(VAR13->VAR79,
				     (void *(*)(struct VAR18 *VAR67, void *VAR80))NULL));
			FUN18(!FUN19(VAR13->VAR81,
				     (int (*)(struct VAR18 *VAR67, void *VAR80))NULL));
			FUN18(!FUN19(VAR13->VAR82,
				     (int (*)(struct VAR18 *VAR67, void *VAR80, void *VAR83,
					      u64 VAR84))NULL));
			FUN18(!FUN19(VAR13->VAR85,
				     (int (*)(struct VAR18 *VAR67, void *VAR83,
					      u64 VAR84))NULL));
			FUN18(!FUN19(VAR13->VAR86,
				     (int (*)(struct VAR18 *VAR67, void *VAR83))NULL));
			FUN18(!FUN19(VAR13->VAR87,
				     (int (*)(struct VAR18 *VAR67, void *VAR83))NULL));

			switch (VAR6->VAR47) {
			case VAR71:
				VAR6->VAR47 = FUN20(VAR13->VAR79) -
					    VAR88;
				continue;
			case VAR72:
				VAR6->VAR47 = FUN20(VAR13->VAR82) -
					    VAR88;
				continue;
			case VAR73:
				VAR6->VAR47 = FUN20(VAR13->VAR81) -
					    VAR88;
				continue;
			case VAR74:
				VAR6->VAR47 = FUN20(VAR13->VAR85) -
					    VAR88;
				continue;
			case VAR75:
				VAR6->VAR47 = FUN20(VAR13->VAR86) -
					    VAR88;
				continue;
			case VAR76:
				VAR6->VAR47 = FUN20(VAR13->VAR87) -
					    VAR88;
				continue;
			}

			goto VAR77;
		}

VAR77:
		VAR9 = VAR2->VAR13->FUN21(VAR6->VAR47, VAR2->VAR4);
		
		if (!VAR9->VAR89) {
			FUN10(VAR2,
				"",
				FUN22(VAR6->VAR47), VAR6->VAR47);
			return -VAR90;
		}
		VAR6->VAR47 = VAR9->VAR89 - VAR88;
	}

	return 0;
}
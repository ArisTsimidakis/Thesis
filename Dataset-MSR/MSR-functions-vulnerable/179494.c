FUN1(
	VAR1		*VAR2,
	struct VAR3		*VAR4,
	int			VAR5)
{
	struct VAR6	*VAR7 = VAR2->VAR8;
	struct VAR9	*VAR10;
	unsigned int		VAR11 = 0;
	struct VAR12	*VAR13 = NULL;
	struct VAR12	*VAR14 = NULL;
	struct VAR12	*VAR15 = NULL;
	int			VAR16;

	FUN2(VAR2);

	if (VAR7->VAR17 & VAR18)
		return FUN3(VAR19);
	if (FUN4(VAR7))
		return FUN3(VAR20);

	
	if ((VAR5 & VAR21) && (VAR4->VAR22 > (VAR23)-1) &&
			!FUN5(&VAR2->VAR8->VAR24))
		return FUN3(VAR25);

	
	if (FUN6(VAR7) && (VAR5 & VAR21)) {
		VAR16 = FUN7(VAR2, VAR2->VAR26.VAR27,
					 VAR2->VAR26.VAR28, VAR4->VAR22,
					 VAR29, &VAR13, NULL, &VAR14);
		if (VAR16)
			return VAR16;
	}

	
	VAR10 = FUN8(VAR7, VAR30);
	VAR16 = FUN9(VAR10, &FUN10(VAR7)->VAR31, 0, 0);
	if (VAR16)
		goto VAR32;

	VAR11 = VAR33;
	FUN11(VAR2, VAR11);

	
	if (!FUN12(FUN13(VAR2))) {
		VAR16 = FUN3(VAR34);
		goto VAR32;
	}

	
	if (VAR5 & VAR21) {
		if (FUN14() != &VAR35) {
			VAR16 = FUN3(VAR25);
			goto VAR32;
		}

		if (FUN15(VAR7) &&
		    FUN16(VAR7) &&
		    FUN17(VAR2) != VAR4->VAR22) {
			FUN18(VAR10);
			VAR16 = FUN19(VAR10, VAR2, VAR13, NULL,
						VAR14, FUN20(VAR36) ?
						VAR37 : 0);
			if (VAR16)	
				goto VAR32;
		}
	}

	if (VAR5 & VAR38) {
		
		if (VAR2->VAR26.VAR39 &&
		    ((VAR2->VAR26.VAR40 << VAR7->VAR24.VAR41) !=
		     VAR4->VAR42)) {
			VAR16 = FUN3(VAR25);	
			goto VAR32;
		}

		
		if (VAR4->VAR42 != 0) {
			xfs_extlen_t    VAR43;
			xfs_fsblock_t   VAR44;

			VAR44 = FUN21(VAR7, VAR4->VAR42);
			if (VAR44 > VAR45) {
				VAR16 = FUN3(VAR25);
				goto VAR32;
			}

			if (FUN22(VAR2) ||
			    ((VAR5 & VAR46) &&
			    (VAR4->VAR47 & VAR48))) {
				VAR43 = VAR7->VAR24.VAR49 <<
				       VAR7->VAR24.VAR41;
			} else {
				VAR43 = VAR7->VAR24.VAR50;
				if (VAR44 > VAR7->VAR24.VAR51 / 2) {
					VAR16 = FUN3(VAR25);
					goto VAR32;
				}
			}

			if (VAR4->VAR42 % VAR43) {
				VAR16 = FUN3(VAR25);
				goto VAR32;
			}
		}
	}


	if (VAR5 & VAR46) {
		
		if ((VAR2->VAR26.VAR39 || VAR2->VAR52) &&
		    (FUN22(VAR2)) !=
		    (VAR4->VAR47 & VAR48)) {
			VAR16 = FUN3(VAR25);	
			goto VAR32;
		}

		
		if ((VAR4->VAR47 & VAR48)) {
			if ((VAR7->VAR24.VAR53 == 0) ||
			    (VAR7->VAR24.VAR49 == 0) ||
			    (VAR2->VAR26.VAR40 % VAR7->VAR24.VAR49)) {
				VAR16 = FUN3(VAR25);
				goto VAR32;
			}
		}

		
		if ((VAR2->VAR26.VAR54 &
				(VAR55|VAR56) ||
		     (VAR4->VAR47 &
				(VAR57 | VAR58))) &&
		    !FUN20(VAR59)) {
			VAR16 = FUN3(VAR34);
			goto VAR32;
		}
	}

	FUN23(VAR10, VAR2, 0);

	
	if (VAR5 & VAR21) {
		
 		if ((VAR2->VAR26.VAR60 & (VAR61|VAR62)) &&

		    !FUN24(FUN13(VAR2), VAR63))


 			VAR2->VAR26.VAR60 &= ~(VAR61|VAR62);
 
 		
		if (FUN17(VAR2) != VAR4->VAR22) {
			if (FUN15(VAR7) && FUN16(VAR7)) {
				VAR15 = FUN25(VAR10, VAR2,
							&VAR2->VAR64, VAR14);
			}
			FUN26(VAR2, VAR4->VAR22);

			
			if (VAR2->VAR26.VAR65 == 1)
				FUN27(VAR10, VAR2);
		}

	}

	if (VAR5 & VAR38)
		VAR2->VAR26.VAR40 = VAR4->VAR42 >> VAR7->VAR24.VAR41;
	if (VAR5 & VAR46) {
		FUN28(VAR2, VAR4->VAR47);
		FUN29(VAR2);
	}

	FUN30(VAR10, VAR2, VAR66);
	FUN31(VAR10, VAR2, VAR67);

	FUN32(VAR68);

	
	if (VAR7->VAR17 & VAR69)
		FUN33(VAR10);
	VAR16 = FUN34(VAR10, 0);
	FUN35(VAR2, VAR11);

	
	FUN36(VAR15);
	FUN36(VAR13);
	FUN36(VAR14);

	return VAR16;

 VAR32:
	FUN36(VAR13);
	FUN36(VAR14);
	FUN37(VAR10, 0);
	if (VAR11)
		FUN35(VAR2, VAR11);
	return VAR16;
}
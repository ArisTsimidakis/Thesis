int FUN1(struct VAR1 *VAR2, int FUN2(void *VAR3, char *VAR4,
	int VAR5, int VAR6, int VAR7, struct VAR8 *VAR9),
	void *VAR3, int VAR10, int VAR11,
	int VAR12, int VAR13, struct VAR14 *VAR15, struct VAR16 *VAR17,
	struct VAR18 *VAR19, unsigned int VAR20, int VAR21)
{
	struct VAR22 *VAR23 = FUN3(VAR2);
	struct VAR24 *VAR25 = FUN4(VAR2);
	struct VAR26 *VAR27;
	struct VAR8 *VAR9, *VAR28 = NULL;
	unsigned int VAR29, VAR30, VAR31;
	int VAR32;
	int VAR33;
	int VAR34;
	int copy;
	int VAR35;
	int VAR5 = 0;
	__u8 VAR36 = 0;

	if (VAR20&VAR37)
		return 0;
	VAR27 = &VAR23->VAR27.VAR38;
	if (FUN5(&VAR2->VAR39)) {
		
		if (VAR15) {
			if (FUN6(VAR25->VAR27.VAR15))
				return -VAR40;

			VAR25->VAR27.VAR15 = FUN7(VAR15->VAR41, VAR2->VAR42);
			if (FUN8(VAR25->VAR27.VAR15 == NULL))
				return -VAR43;

			VAR25->VAR27.VAR15->VAR41 = VAR15->VAR41;
			VAR25->VAR27.VAR15->VAR44 = VAR15->VAR44;
			VAR25->VAR27.VAR15->VAR45 = VAR15->VAR45;

			VAR25->VAR27.VAR15->VAR46 = FUN9(VAR15->VAR46,
							    VAR2->VAR42);
			if (VAR15->VAR46 && !VAR25->VAR27.VAR15->VAR46)
				return -VAR43;

			VAR25->VAR27.VAR15->VAR47 = FUN9(VAR15->VAR47,
							    VAR2->VAR42);
			if (VAR15->VAR47 && !VAR25->VAR27.VAR15->VAR47)
				return -VAR43;

			VAR25->VAR27.VAR15->VAR48 = FUN9(VAR15->VAR48,
							   VAR2->VAR42);
			if (VAR15->VAR48 && !VAR25->VAR27.VAR15->VAR48)
				return -VAR43;

			VAR25->VAR27.VAR15->VAR49 = FUN10(VAR15->VAR49,
							    VAR2->VAR42);
			if (VAR15->VAR49 && !VAR25->VAR27.VAR15->VAR49)
				return -VAR43;

			
		}
		FUN11(&VAR19->VAR50);
		VAR27->VAR50 = &VAR19->VAR50;
		VAR23->VAR27.VAR51.VAR52.VAR53 = *VAR17;
		VAR25->VAR27.VAR54 = VAR12;
		VAR25->VAR27.VAR13 = VAR13;
		if (VAR19->VAR50.VAR20 & VAR55)
			VAR31 = VAR25->VAR56 == VAR57 ?
			      VAR19->VAR50.VAR58->VAR31 : FUN12(&VAR19->VAR50);
		else
			VAR31 = VAR25->VAR56 == VAR57 ?
			      VAR19->VAR50.VAR58->VAR31 : FUN12(VAR19->VAR50.VAR59);
		if (VAR25->VAR60 < VAR31) {
			if (VAR25->VAR60)
				VAR31 = VAR25->VAR60;
		}
		VAR27->VAR61 = VAR31;
		if (FUN13(VAR19->VAR50.VAR59))
			VAR27->VAR20 |= VAR62;
		VAR27->VAR10 = 0;
		VAR32 = (VAR15 ? VAR15->VAR44 : 0);
		VAR10 += VAR32;
		VAR11 += VAR32;
		VAR33 = VAR19->VAR50.VAR63 - VAR19->VAR64;
	} else {
		VAR19 = (struct VAR18 *)VAR27->VAR50;
		VAR17 = &VAR23->VAR27.VAR51.VAR52.VAR53;
		VAR15 = VAR25->VAR27.VAR15;
		VAR11 = 0;
		VAR32 = 0;
		VAR33 = 0;
		VAR31 = VAR27->VAR61;
	}

	VAR34 = FUN14(VAR19->VAR50.VAR58);

	VAR30 = sizeof(struct VAR65) + VAR19->VAR64 +
			(VAR15 ? VAR15->VAR45 : 0);
	VAR29 = ((VAR31 - VAR30) & ~7) + VAR30 - sizeof(struct VAR66);

	if (VAR31 <= sizeof(struct VAR65) + VAR67) {
		if (VAR27->VAR10 + VAR10 > sizeof(struct VAR65) + VAR67 - VAR30) {
			FUN15(VAR2, VAR68, VAR17, VAR31-VAR32);
			return -VAR68;
		}
	}

	
	if (VAR2->VAR69 == VAR70)
		FUN16(VAR2, &VAR36);

	
 

	VAR27->VAR10 += VAR10;

	if (VAR10 > VAR31) {

		int VAR71 = VAR2->VAR72;

		if (VAR21 && (VAR71 == VAR73 || VAR71 == VAR74)){

			FUN17(VAR2, VAR17, VAR31-VAR32);

			return -VAR68;

		}



		if (VAR71 == VAR73 &&

		    (VAR19->VAR50.VAR58->VAR75 & VAR76)) {










 

			VAR35 = FUN18(VAR2, VAR77, VAR3, VAR10,

						  VAR34, VAR30,

						  VAR11, VAR31, VAR20, VAR19);

			if (VAR35)

				goto VAR78;

			return 0;

		}
























 	}
 

	if ((VAR9 = FUN19(&VAR2->VAR39)) == NULL)


 		goto VAR79;
 
 	while (VAR10 > 0) {
		
		copy = (VAR27->VAR10 <= VAR31 && !(VAR27->VAR20 & VAR62) ? VAR31 : VAR29) - VAR9->VAR6;
		if (copy < VAR10)
			copy = VAR29 - VAR9->VAR6;

		if (copy <= 0) {
			char *VAR80;
			unsigned int VAR81;
			unsigned int VAR82;
			unsigned int VAR83;
			unsigned int VAR84;
VAR79:
			
			if (VAR9)
				VAR83 = VAR9->VAR6 - VAR29;
			else
				VAR83 = 0;
			
			if (VAR9 == NULL || VAR28 == NULL)
				FUN20(&VAR31, &VAR29,
						    VAR30, VAR9, VAR19,
						    VAR25->VAR56 ==
						    VAR57);

			VAR28 = VAR9;

			
			VAR81 = VAR10 + VAR83;

			if (VAR81 > (VAR27->VAR10 <= VAR31 && !(VAR27->VAR20 & VAR62) ? VAR31 : VAR29) - VAR30)
				VAR81 = VAR29 - VAR30 - VAR19->VAR50.VAR85;
			if ((VAR20 & VAR86) &&
			    !(VAR19->VAR50.VAR58->VAR75&VAR87))
				VAR84 = VAR31;
			else
				VAR84 = VAR81 + VAR30;

			VAR84 += VAR33;

			if (VAR81 != VAR10 + VAR83) {
				
				VAR81 += VAR19->VAR50.VAR85;
			}

			VAR84 += VAR19->VAR50.VAR85;
			VAR82 = VAR81 + VAR30;

			
			VAR84 += sizeof(struct VAR66);

			if (VAR11) {
				VAR9 = FUN21(VAR2,
						VAR84 + VAR34,
						(VAR20 & VAR88), &VAR35);
			} else {
				VAR9 = NULL;
				if (FUN22(&VAR2->VAR89) <=
				    2 * VAR2->VAR90)
					VAR9 = FUN23(VAR2,
							   VAR84 + VAR34, 1,
							   VAR2->VAR42);
				if (FUN8(VAR9 == NULL))
					VAR35 = -VAR43;
				else {
					
					VAR36 = 0;
				}
			}
			if (VAR9 == NULL)
				goto VAR78;
			
			VAR9->VAR91 = FUN24(VAR92);
			VAR9->VAR93 = VAR94;
			VAR9->VAR95 = 0;
			
			FUN25(VAR9, VAR34 + sizeof(struct VAR66) +
				    VAR33);

			if (VAR2->VAR69 == VAR70)
				FUN26(VAR9)->VAR36 = VAR36;

			
			VAR80 = FUN27(VAR9, VAR82);
			FUN28(VAR9, VAR32);
			VAR80 += VAR30;
			VAR9->VAR96 = (VAR9->VAR97 +
						 VAR30);
			if (VAR83) {
				VAR9->VAR95 = FUN29(
					VAR28, VAR29,
					VAR80 + VAR11, VAR83, 0);
				VAR28->VAR95 = FUN30(VAR28->VAR95,
							  VAR9->VAR95);
				VAR80 += VAR83;
				FUN31(VAR28, VAR29);
			}
			copy = VAR81 - VAR11 - VAR83;

			if (copy < 0) {
				VAR35 = -VAR40;
				FUN32(VAR9);
				goto VAR78;
			} else if (copy > 0 && FUN2(VAR3, VAR80 + VAR11, VAR5, copy, VAR83, VAR9) < 0) {
				VAR35 = -VAR98;
				FUN32(VAR9);
				goto VAR78;
			}

			VAR5 += copy;
			VAR10 -= VAR81 - VAR83;
			VAR11 = 0;
			VAR32 = 0;
			VAR33 = 0;

			
			FUN33(&VAR2->VAR39, VAR9);
			continue;
		}

		if (copy > VAR10)
			copy = VAR10;

		if (!(VAR19->VAR50.VAR58->VAR75&VAR87)) {
			unsigned int VAR99;

			VAR99 = VAR9->VAR6;
			if (FUN2(VAR3, FUN27(VAR9, copy),
						VAR5, copy, VAR99, VAR9) < 0) {
				FUN34(VAR9, VAR99);
				VAR35 = -VAR98;
				goto VAR78;
			}
		} else {
			int VAR100 = FUN26(VAR9)->VAR101;
			struct VAR102 *VAR103 = FUN35(VAR2);

			VAR35 = -VAR104;
			if (!FUN36(VAR2, VAR103))
				goto VAR78;

			if (!FUN37(VAR9, VAR100, VAR103->VAR105,
					      VAR103->VAR5)) {
				VAR35 = -VAR68;
				if (VAR100 == VAR106)
					goto VAR78;

				FUN38(VAR9, VAR100, VAR103->VAR105,
						     VAR103->VAR5, 0);
				FUN26(VAR9)->VAR101 = ++VAR100;
				FUN39(VAR103->VAR105);
			}
			copy = FUN40(int, copy, VAR103->VAR107 - VAR103->VAR5);
			if (FUN2(VAR3,
				    FUN41(VAR103->VAR105) + VAR103->VAR5,
				    VAR5, copy, VAR9->VAR6, VAR9) < 0)
				goto VAR108;

			VAR103->VAR5 += copy;
			FUN42(&FUN26(VAR9)->VAR109[VAR100 - 1], copy);
			VAR9->VAR6 += copy;
			VAR9->VAR110 += copy;
			VAR9->VAR111 += copy;
			FUN43(copy, &VAR2->VAR89);
		}
		VAR5 += copy;
		VAR10 -= copy;
	}

	return 0;

VAR108:
	VAR35 = -VAR98;
VAR78:
	VAR27->VAR10 -= VAR10;
	FUN44(FUN45(VAR2), VAR19->VAR112, VAR113);
	return VAR35;
}
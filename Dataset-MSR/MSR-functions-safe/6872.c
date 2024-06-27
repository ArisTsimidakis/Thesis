void FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
	struct VAR5 *VAR6 = VAR2->VAR6;
	struct VAR7 *VAR8 = VAR2->VAR8;
	struct VAR9 *VAR10;
	int VAR11;
	int VAR12, VAR13, VAR14;
	char *VAR15, *VAR16, *VAR17;
	char *VAR18, *VAR19, *VAR20, *VAR21, *VAR22, *VAR23, *VAR24;

	
	VAR13 = 0;
	VAR17 = VAR4->VAR25->VAR26 + FUN2(&VAR6->VAR27);

	while ((VAR12 = VAR6->VAR27.VAR28[VAR13].VAR24)) {
		struct VAR29 *VAR30;
		int VAR31;

		VAR30  = &VAR6->VAR27.VAR28[VAR12];
		VAR15  = VAR17;
		VAR16  = VAR15 + VAR30->VAR32;
		VAR17 = VAR16 + VAR30->VAR33 + 1;

		

		VAR11 = 0;
		VAR18 = VAR15 + 10;
		VAR31 = FUN3(VAR15, VAR16, "", 10);
		if (!VAR31) {
			VAR31 = FUN3(VAR15, VAR16, "", 11);
			if (!VAR31) {
				VAR13 = VAR12;
				continue;
			}
			VAR11 = 1;
			VAR18 = VAR15 + 11;
		}

		
		VAR6->VAR34 |= VAR35;

		
		if (VAR2->VAR36->VAR37 == NULL && VAR8->VAR38->VAR39 == NULL)
			return;

		

		for (; VAR18 < VAR16; VAR18 = VAR24) {
			

			
			VAR19 = VAR18 + 1;
			while (VAR19 < VAR16 && FUN4(*VAR19))
				VAR19++;

			
			VAR21 = VAR20 = VAR19;

			while (VAR21 < VAR16) {
				if (*VAR21 == '' || *VAR21 == '' || (VAR11 && *VAR21 == ''))
					break;
				if (FUN4(*VAR21++))
					continue;
				VAR20 = VAR21;
			}

			

			
			if (VAR21 < VAR16 && *VAR21 == '') {
				
				VAR22 = VAR21 + 1;
				while (VAR22 < VAR16 && FUN4(*VAR22))
					VAR22++;

				
				VAR24 = FUN5(VAR22, VAR16);

				
				VAR23 = VAR24;
				while (VAR23 > VAR22 && FUN4(*(VAR23 - 1)))
					VAR23--;
			} else {
				
				VAR22 = VAR23 = VAR24 = VAR21;
			}

			if (VAR24 < VAR16) {
				
				if (VAR11)
					VAR24 = FUN6(VAR24, VAR16);
				else
					VAR24 = VAR16;
			}

			

			
			if (VAR21 == VAR23)
				continue;

			
			if (FUN7(VAR20 != VAR21 || VAR22 > VAR21 + 1)) {
				int VAR40 = 0;
				int VAR41 = 0;

				if (VAR20 != VAR21) {
					VAR40 = FUN8(VAR4->VAR25, VAR20, VAR21, NULL, 0);
					VAR21   += VAR40;
					VAR22 += VAR40;
				}

				if (VAR22 > VAR21 + 1) {
					VAR41 = FUN8(VAR4->VAR25, VAR21 + 1, VAR22, NULL, 0);
					VAR22 += VAR41;
					VAR40 += VAR41;
				}

				VAR23      += VAR40;
				VAR24         += VAR40;
				VAR16      += VAR40;
				VAR17     += VAR40;
				VAR30->VAR32 += VAR40;
				FUN9(&VAR6->VAR42, VAR40);
			}

			
			if (VAR8->VAR38->VAR39 != NULL &&
			    VAR6->VAR43 == NULL &&
			    (VAR23 - VAR19 >= VAR8->VAR38->VAR44) &&
			    memcmp(VAR19, VAR8->VAR38->VAR39, VAR8->VAR38->VAR44) == 0) {
				int VAR45 = VAR23 - VAR19;
				if ((VAR6->VAR43 = FUN10(VAR46)) == NULL) {
					FUN11("");
				}
				else {
					if (VAR45 > VAR8->VAR38->VAR47)
						VAR45 = VAR8->VAR38->VAR47;
					memcpy(VAR6->VAR43, VAR19, VAR45);
					VAR6->VAR43[VAR45] = 0;
				}
			}

			VAR10 = FUN12(VAR2->VAR48);
			
			if (!(VAR2->VAR34 & VAR49) &&
			    (VAR20 - VAR19 == VAR2->VAR36->VAR50) && (VAR2->VAR36->VAR37 != NULL) &&
			    (memcmp(VAR19, VAR2->VAR36->VAR37, VAR20 - VAR19) == 0)) {
				
				VAR6->VAR34 &= ~VAR51;
				VAR6->VAR34 |= VAR52;
			
				
				if (VAR2->VAR36->VAR53 & VAR54) {
					
				}
				else if ((VAR10 && (VAR2->VAR36->VAR53 & VAR55)) ||
				    ((VAR2->VAR34 & VAR56) && (VAR2->VAR36->VAR53 & VAR57))) {
					
					if (*VAR18 == '' && VAR24 == VAR16) {
						
						VAR14 = FUN8(VAR4->VAR25, VAR15, VAR17, NULL, 0);
						VAR6->VAR27.VAR28[VAR13].VAR24 = VAR30->VAR24;
						VAR6->VAR27.VAR58--;
						VAR30->VAR32 = 0;
						VAR12 = VAR13;
						VAR17 += VAR14;
						FUN9(&VAR6->VAR42, VAR14);
						
					} else {
						
						int VAR14 = FUN13(VAR4->VAR25, &VAR18, VAR24);
						VAR24      = VAR18;
						VAR16  += VAR14;
						VAR17 += VAR14;
						VAR30->VAR32 += VAR14;
						FUN9(&VAR6->VAR42, VAR14);
					}
					VAR6->VAR34 &= ~VAR51;
					VAR6->VAR34 |= VAR59;
					
				}
				else if (VAR10 && VAR10->VAR60 && (VAR2->VAR36->VAR53 & VAR61)) {
					
					VAR14 = FUN8(VAR4->VAR25, VAR22, VAR23, VAR10->VAR60, VAR10->VAR62);
					VAR24     += VAR14;
					VAR16  += VAR14;
					VAR17 += VAR14;
					VAR30->VAR32 += VAR14;
					FUN9(&VAR6->VAR42, VAR14);

					VAR6->VAR34 &= ~VAR51;
					VAR6->VAR34 |= VAR63;
				}
				else if (VAR10 && VAR10->VAR60 && (VAR2->VAR36->VAR53 & VAR64)) {
					
					VAR14 = FUN8(VAR4->VAR25, VAR22, VAR22, VAR10->VAR60, VAR10->VAR62 + 1);
					VAR24     += VAR14;
					VAR16  += VAR14;
					VAR17 += VAR14;
					VAR30->VAR32 += VAR14;
					FUN9(&VAR6->VAR42, VAR14);

					VAR22[VAR10->VAR62] = VAR65;
					VAR6->VAR34 &= ~VAR51;
					VAR6->VAR34 |= VAR63;
				}
			}
			
		}
		
		VAR13 = VAR12;
	}
}
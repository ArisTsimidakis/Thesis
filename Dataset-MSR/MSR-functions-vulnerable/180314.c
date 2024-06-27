FUN1 (VAR1 *VAR2, VAR3 *VAR4, guint32 VAR5,
			 guint32 VAR6, VAR7 *VAR8, VAR7 *VAR9, VAR7 *VAR10,
 			 const VAR11 *VAR12)
 {
 	guint32     VAR13  = FUN2 (VAR4);

	guint32     VAR14      = VAR5;


 	guint32     VAR15;
 	guint       VAR16;
 	guint32     VAR17;
	guint32     VAR18;
	guint8      VAR19;
	guint32     VAR20;                     
	guint8      VAR21      = 0;     
	guint8      VAR22       = 0;     
	const char *VAR23;            
	const char *VAR24;             
	guint8      VAR25 = VAR26; 
 	VAR23 = NULL;                 
 
 	FUN3(("", *VAR8, VAR5));


 	while (VAR14 < VAR13) {
 		VAR19 = FUN4 (VAR4, VAR14);
 		FUN3(("", *VAR8, VAR19, VAR14, VAR13));
		if ((VAR19 & 0x3F) < 4) switch (VAR19) { 
		case 0x00: 
			*VAR9 = FUN4 (VAR4, VAR14+1);
			FUN5 (VAR2, VAR4, VAR14, 2,
					     ""
					     ""
					     "",
					     *VAR9);
			VAR14 += 2;
			break;
		case 0x01: 
			if (VAR21) { 
				FUN5 (VAR2, VAR4, VAR14, 1,
						     ""
						     ""
						     "",
						     *VAR8, *VAR9,
						     VAR21, FUN6 (*VAR8),
						     VAR23); 
			} else { 
				FUN5 (VAR2, VAR4, VAR14, 1,
						     ""
						     ""
						     "",
						     *VAR8, *VAR9, FUN6 (*VAR8),
						     VAR23 ? VAR23 : "");
			}
			(*VAR8)--;
			VAR14++;
			
			FUN3(("", *VAR8, VAR14 - VAR5));
			return (VAR14 - VAR5);
		case 0x02: 
			VAR17 = FUN7 (VAR4, VAR14+1, &VAR15);
			FUN5 (VAR2, VAR4, VAR14, 1+VAR15,
					     ""
					     ""
					     "",
					     *VAR8, *VAR9, FUN6 (*VAR8), VAR17);
			VAR14 += 1+VAR15;
			break;
		case 0x03: 
			VAR15 = FUN8 (VAR4, VAR14+1);
			FUN5 (VAR2, VAR4, VAR14, 1+VAR15,
					     ""
					     ""
					     "",
					     *VAR8, *VAR9, FUN6(*VAR8),
					     FUN9 (VAR4, VAR14+1, VAR15-1));
			VAR14 += 1+VAR15;
			break;
		case 0x40: 
		case 0x41: 
		case 0x42: 
			
			VAR15 = FUN8 (VAR4, VAR14+1);
			FUN5 (VAR2, VAR4, VAR14, 1+VAR15,
					     ""
					     ""
					     "",
					     *VAR8, *VAR9,
					     VAR19 & 0x0f, FUN6 (*VAR8),
					     FUN10 (VAR12->VAR27, 0, VAR19),
					     FUN9 (VAR4, VAR14+1, VAR15-1));
			VAR14 += 1+VAR15;
			break;
		case 0x43: 
			FUN5 (VAR2, VAR4, VAR14, 1,
					     ""
					     ""
					     "",
					     *VAR8, *VAR9, FUN6 (*VAR8));
			VAR15 = FUN11 (VAR2, VAR4, VAR14,
								  VAR6, *VAR8, VAR10, VAR12);
			
			VAR14 += VAR15;
			if (VAR14 >= VAR13) {
				FUN3(("", *VAR8, VAR14 - VAR5));
				
				FUN12(VAR28);
			}
			FUN5 (VAR2, VAR4, VAR14-1, 1,
					     ""
					     ""
					     "",
					     *VAR8, *VAR9, FUN6 (*VAR8));
			break;
		case 0x80: 
		case 0x81: 
		case 0x82: 
			
			VAR18 = FUN7 (VAR4, VAR14+1, &VAR15);
			{   char *VAR29;
				if (VAR12->VAR30[VAR19 & 0x03])
					VAR29 = (VAR12->VAR30[VAR19 & 0x03])(VAR4, VAR18, VAR6);
				else
					VAR29 = FUN13(FUN14(), "", VAR19 & 0x03,
							    FUN10 (VAR12->VAR27, 0, VAR19));
				FUN5 (VAR2, VAR4, VAR14, 1+VAR15,
						     ""
						     ""
						     "",
						     *VAR8, *VAR9, VAR19 & 0x0f, FUN6 (*VAR8),
						     VAR29);
			}
			VAR14 += 1+VAR15;
			break;
		case 0x83: 
			VAR18 = FUN7 (VAR4, VAR14+1, &VAR15);
			VAR16 = FUN8 (VAR4, VAR6+VAR18);
			FUN5 (VAR2, VAR4, VAR14, 1+VAR15,
					     ""
					     ""
					     "",
					     *VAR8, *VAR9, FUN6 (*VAR8),
					     FUN9 (VAR4, VAR6+VAR18, VAR16-1));
			VAR14 += 1+VAR15;
			break;
		case 0xC0: 
		case 0xC1: 
		case 0xC2: 
			
			FUN5 (VAR2, VAR4, VAR14, 1,
					     ""
					     ""
					     "",
					     *VAR8, *VAR9, VAR19 & 0x0f, FUN6 (*VAR8),
					     FUN10 (VAR12->VAR27, 0, VAR19));
			VAR14++;
			break;
		case 0xC3: 
			if (FUN4 (VAR4, 0)) { 
				char *VAR31;
				if (VAR21) { 
					if (VAR12->VAR32) {
						VAR31 = VAR12->FUN15(VAR4, VAR14 + 1,
									     VAR21, *VAR9, &VAR15);
					} else {
						VAR31 = FUN16(VAR4, VAR14 + 1,
										VAR21, *VAR9, &VAR15);
					}
				} else { 
					if (VAR12->VAR33) {
						VAR31 = VAR12->FUN17(VAR4, VAR14 + 1,
									      VAR23, *VAR9, &VAR15);
					} else {
						VAR31 = FUN18(VAR4, VAR14 + 1,
										 VAR23, *VAR9, &VAR15);
					}
				}
				FUN5 (VAR2, VAR4, VAR14, 1 + VAR15,
						     ""
						     ""
						     "",
						     *VAR8, *VAR9, FUN6 (*VAR8), VAR31);
				VAR14 += 1 + VAR15;
			} else { 
				FUN5 (VAR2, VAR4, VAR14, 1,
						     ""
						     ""
						     "",
						     *VAR8, *VAR9);
				
				VAR14 = VAR13;
				FUN3(("", *VAR8, VAR14 - VAR5));
				return (VAR14 - VAR5);
			}
			break;

			
		} else { 
			

			
			VAR20 = 0;
			if ((VAR19 & 0x3F) == 4) { 
				FUN3(("", VAR19, VAR14));
				VAR18 = FUN7 (VAR4, VAR14+1, &VAR20);
				VAR16 = FUN8 (VAR4, VAR6+VAR18);
				VAR24 = (const VAR34*)FUN19 (VAR4, VAR6+VAR18, VAR16);
				VAR22 = 0; 
			} else { 
				VAR22 = VAR19 & 0x3F;
				VAR24 = FUN10 (VAR12->VAR35, *VAR9,
							     VAR22);
				
			}

			
			if (VAR19 & 0x40) { 
				
				if (VAR25) { 
					FUN3(("", VAR14));
					
					(*VAR8)++;
					VAR15 = FUN1 (VAR2, VAR4, VAR14, VAR6,
								       VAR8, VAR9, VAR10, VAR12);
					VAR14 += VAR15;
				} else { 
					
					if ((VAR19 & 0x3F) == 4) { 
						VAR23 = VAR24;
						VAR21 = 0;
					} else { 
						VAR21 = VAR22;
						VAR23 = VAR24;
						
					}
					
					if (VAR19 & 0x80) { 
						if (VAR22) { 
							FUN5 (VAR2, VAR4, VAR14, 1,
									     ""
									     ""
									     "",
									     *VAR8, *VAR9, VAR22,
									     FUN6 (*VAR8), VAR24);
							
							VAR14++;
						} else { 
							FUN5 (VAR2, VAR4, VAR14, 1,
									     ""
									     ""
									     "",
									     *VAR8, *VAR9, FUN6 (*VAR8), VAR24);
							VAR14 += 1 + VAR20;
						}
						VAR15 = FUN11 (VAR2, VAR4,
											  VAR14, VAR6, *VAR8, VAR10, VAR12);
						
						VAR14 += VAR15;
						if (VAR14 >= VAR13) {
							FUN3(("",
								  *VAR8, VAR14 - VAR5));
							
							FUN12(VAR28);
						}
						FUN5 (VAR2, VAR4, VAR14-1, 1,
								     ""
								     ""
								     "",
								     *VAR8, *VAR9, FUN6 (*VAR8));
					} else { 
						if (VAR22) { 
							FUN5 (VAR2, VAR4, VAR14, 1,
									     ""
									     ""
									     "",
									     *VAR8, *VAR9, VAR22,
									     FUN6 (*VAR8), VAR24);
							
							VAR14++;
						} else { 
							FUN5 (VAR2, VAR4, VAR14, 1,
									     ""
									     ""
									     "",
									     *VAR8, *VAR9, FUN6 (*VAR8),
									     VAR24);
							VAR14 += 1 + VAR20;
						}
					}
					
					VAR25 = VAR36;
					FUN3(("", VAR14));
				}
			} else { 
				FUN3(("", VAR14));
				(*VAR8)++;
				if (VAR19 & 0x80) { 
					if (VAR22) { 
						FUN5 (VAR2, VAR4, VAR14, 1,
								     ""
								     ""
								     "",
								     *VAR8, *VAR9, VAR22,
								     FUN6 (*VAR8), VAR24);
						
						VAR14++;
						VAR15 = FUN11 (VAR2, VAR4,
											  VAR14, VAR6, *VAR8, VAR10, VAR12);
						
						VAR14 += VAR15;
						if (VAR14 > VAR13) {
							FUN3(("", *VAR8, VAR14 - VAR5));
							
							FUN12(VAR28);
						}
						FUN5 (VAR2, VAR4, VAR14-1, 1,
								     ""
								     ""
								     "",
								     *VAR8, *VAR9, FUN6 (*VAR8));
					} else { 
						FUN5 (VAR2, VAR4, VAR14, 1,
								     ""
								     ""
								     "",
								     *VAR8, *VAR9, FUN6 (*VAR8), VAR24);
						VAR14 += 1 + VAR20;
						VAR15 = FUN11 (VAR2, VAR4,
											  VAR14, VAR6, *VAR8, VAR10, VAR12);
						
						VAR14 += VAR15;
						if (VAR14 >= VAR13) {
							FUN3(("", *VAR8, VAR14 - VAR5));
							
							FUN12(VAR28);
						}
						FUN5 (VAR2, VAR4, VAR14-1, 1,
								     ""
								     ""
								     "",
								     *VAR8, *VAR9, FUN6 (*VAR8));
					}
				} else { 
					if (VAR22) { 
						FUN5 (VAR2, VAR4, VAR14, 1,
								     ""
								     ""
								     "",
								     *VAR8, *VAR9, VAR22,
								     FUN6 (*VAR8), VAR24);
						
						VAR14++;
					} else { 
						FUN5 (VAR2, VAR4, VAR14, 1,
								     ""
								     ""
								     "",
								     *VAR8, *VAR9, FUN6 (*VAR8),
								     VAR24);
						VAR14 += 1 + VAR20;
					}
				}
				(*VAR8)--;
 				
 			}
 		} 








 	} 
 	FUN3(("", *VAR8, VAR14 - VAR5));
 	return (VAR14 - VAR5);
}
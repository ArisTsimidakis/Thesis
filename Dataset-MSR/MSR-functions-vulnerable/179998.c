int FUN1(VAR1 *VAR2)
	{
#ifndef VAR3
	unsigned char *VAR4,VAR5[VAR6*2];
#endif
	EVP_MD_CTX VAR7;
	unsigned char *VAR8,*VAR9;
	int VAR10,VAR11,VAR12;
	long VAR13,VAR14,VAR15,VAR16,VAR17;
	VAR18 *VAR19=NULL;
	const VAR20 *VAR21 = NULL;
#ifndef VAR3
	VAR22 *VAR23=NULL;
#endif
#ifndef VAR24
	VAR25 *VAR26=NULL;
#endif
#ifndef VAR27
	VAR28 *VAR29 = NULL;
	VAR30 *VAR31 = NULL;
	VAR32 *VAR33 = NULL;
	int VAR34 = 0;
 	int VAR35 = 0;
 #endif
 




 	
 	VAR15=VAR2->VAR36->FUN2(VAR2,
		VAR37,
		VAR38,
		-1,
		VAR2->VAR39,
 		&VAR12);
 	if (!VAR12) return((int)VAR15);
 




 	if (VAR2->VAR40->VAR41.VAR42 != VAR43)
 		{




















 #ifndef VAR44
 		

		if (VAR2->VAR40->VAR41.VAR45->VAR46 & VAR47)


 			{
 			VAR2->VAR48->VAR49=FUN3();
 			if (VAR2->VAR50->VAR51)
				FUN4(VAR2->VAR50->VAR51);
			VAR2->VAR50->VAR51 = NULL;
			}
#endif
		VAR2->VAR40->VAR41.VAR52=1;
		return(1);
		}

	VAR8=VAR9=(unsigned char *)VAR2->VAR53;
	if (VAR2->VAR48->VAR49 != NULL)
		{
#ifndef VAR3
		if (VAR2->VAR48->VAR49->VAR54 != NULL)
			{
			FUN5(VAR2->VAR48->VAR49->VAR54);
			VAR2->VAR48->VAR49->VAR54=NULL;
			}
#endif
#ifndef VAR24
		if (VAR2->VAR48->VAR49->VAR55)
			{
			FUN6(VAR2->VAR48->VAR49->VAR55);
			VAR2->VAR48->VAR49->VAR55=NULL;
			}
#endif
#ifndef VAR27
		if (VAR2->VAR48->VAR49->VAR56)
			{
			FUN7(VAR2->VAR48->VAR49->VAR56);
			VAR2->VAR48->VAR49->VAR56=NULL;
			}
#endif
		}
	else
		{
		VAR2->VAR48->VAR49=FUN3();
		}

 	
 	VAR14=0;
 

	VAR16=VAR2->VAR40->VAR41.VAR45->VAR46;
 	VAR17=VAR2->VAR40->VAR41.VAR45->VAR57;

	EVP_MD_CTX_init(&VAR7);
 
 	VAR10=VAR58;
 
#ifndef VAR44
	if (VAR16 & VAR47)
		{
		char VAR59[VAR60+1];

		VAR14 = 2;
		if (VAR14 > VAR15)
			{
			FUN8(VAR61,
				VAR62);
			goto VAR63;
			}
		FUN9(VAR9,VAR13);

		
		if (VAR13 > VAR60)
			{
			VAR10=VAR64;
			FUN8(VAR61,
				VAR65);
			goto VAR63;
			}
		if (VAR13 > VAR15 - VAR14)
			{
			FUN8(VAR61,
				VAR66);
			goto VAR63;
			}
		VAR14 += VAR13;

		
		memcpy(VAR59, VAR9, VAR13);
		memset(VAR59+VAR13, 0, VAR60+1-VAR13);
		if (VAR2->VAR50->VAR51 != NULL)
			FUN4(VAR2->VAR50->VAR51);
		VAR2->VAR50->VAR51 = FUN10(VAR59);
		if (VAR2->VAR50->VAR51 == NULL)
			{
			VAR10=VAR64;
			FUN8(VAR61, VAR67);
			goto VAR63;
			}	   

		VAR9+=VAR13;
		VAR15-=VAR14;
		}
	else
#endif 
#ifndef VAR68
	if (VAR16 & VAR69)
		{
		VAR14 = 2;
		if (VAR14 > VAR15)
			{
			FUN8(VAR61,
				VAR62);
			goto VAR63;
			}
		FUN9(VAR9,VAR13);

		if (VAR13 > VAR15 - VAR14)
			{
			FUN8(VAR61,VAR70);
			goto VAR63;
			}
		VAR14 += VAR13;

		if (!(VAR2->VAR71.VAR72=FUN11(VAR9,VAR13,NULL)))
			{
			FUN8(VAR61,VAR73);
			goto VAR74;
			}
		VAR9+=VAR13;


		if (2 > VAR15 - VAR14)
			{
			FUN8(VAR61,
				VAR62);
			goto VAR63;
			}
		VAR14 += 2;

		FUN9(VAR9,VAR13);

		if (VAR13 > VAR15 - VAR14)
			{
			FUN8(VAR61,VAR75);
			goto VAR63;
			}
		VAR14 += VAR13;

		if (!(VAR2->VAR71.VAR76=FUN11(VAR9,VAR13,NULL)))
			{
			FUN8(VAR61,VAR73);
			goto VAR74;
			}
		VAR9+=VAR13;


		if (1 > VAR15 - VAR14)
			{
			FUN8(VAR61,
				VAR62);
			goto VAR63;
			}
		VAR14 += 1;

		VAR13 = (unsigned int)(VAR9[0]);
		VAR9++;

		if (VAR13 > VAR15 - VAR14)
			{
			FUN8(VAR61,VAR77);
			goto VAR63;
			}
		VAR14 += VAR13;

		if (!(VAR2->VAR71.VAR2=FUN11(VAR9,VAR13,NULL)))
			{
			FUN8(VAR61,VAR73);
			goto VAR74;
			}
		VAR9+=VAR13;

		if (2 > VAR15 - VAR14)
			{
			FUN8(VAR61,
				VAR62);
			goto VAR63;
			}
		VAR14 += 2;

		FUN9(VAR9,VAR13);

		if (VAR13 > VAR15 - VAR14)
			{
			FUN8(VAR61,VAR78);
			goto VAR63;
			}
		VAR14 += VAR13;

		if (!(VAR2->VAR71.VAR79=FUN11(VAR9,VAR13,NULL)))
			{
			FUN8(VAR61,VAR73);
			goto VAR74;
			}
		VAR9+=VAR13;
		VAR15-=VAR14;

		if (!FUN12(VAR2, &VAR10))
			{
			FUN8(VAR61,VAR80);
			goto VAR63;
			}


#ifndef VAR3
		if (VAR17 & VAR81)
			VAR19=FUN13(VAR2->VAR48->VAR49->VAR82[VAR83].VAR84);
#else
		if (0)
			;
#endif
#ifndef VAR85
		else if (VAR17 & VAR86)
			VAR19=FUN13(VAR2->VAR48->VAR49->VAR82[VAR87].VAR84);
#endif
		}
	else
#endif 
#ifndef VAR3
	if (VAR16 & VAR88)
		{
		if ((VAR23=FUN14()) == NULL)
			{
			FUN8(VAR61,VAR67);
			goto VAR74;
			}

		VAR14 = 2;
		if (VAR14 > VAR15)
			{
			FUN8(VAR61,
				VAR62);
			goto VAR63;
			}
		FUN9(VAR9,VAR13);

		if (VAR13 > VAR15 - VAR14)
			{
			FUN8(VAR61,VAR89);
			goto VAR63;
			}
		VAR14 += VAR13;

		if (!(VAR23->VAR15=FUN11(VAR9,VAR13,VAR23->VAR15)))
			{
			FUN8(VAR61,VAR73);
			goto VAR74;
			}
		VAR9+=VAR13;

		if (2 > VAR15 - VAR14)
			{
			FUN8(VAR61,
				VAR62);
			goto VAR63;
			}
		VAR14 += 2;

		FUN9(VAR9,VAR13);

		if (VAR13 > VAR15 - VAR14)
			{
			FUN8(VAR61,VAR90);
			goto VAR63;
			}
		VAR14 += VAR13;

		if (!(VAR23->VAR91=FUN11(VAR9,VAR13,VAR23->VAR91)))
			{
			FUN8(VAR61,VAR73);
			goto VAR74;
			}
		VAR9+=VAR13;
		VAR15-=VAR14;

		
		if (VAR17 & VAR81)
			VAR19=FUN13(VAR2->VAR48->VAR49->VAR82[VAR83].VAR84);
		else
			{
			FUN8(VAR61,VAR92);
			goto VAR74;
			}
		VAR2->VAR48->VAR49->VAR54=VAR23;
		VAR23=NULL;
		}
#else 
	if (0)
		;
#endif
#ifndef VAR24
	else if (VAR16 & VAR93)
		{
		if ((VAR26=FUN15()) == NULL)
			{
			FUN8(VAR61,VAR94);
			goto VAR74;
			}

		VAR14 = 2;
		if (VAR14 > VAR15)
			{
			FUN8(VAR61,
				VAR62);
			goto VAR63;
			}
		FUN9(VAR9,VAR13);

		if (VAR13 > VAR15 - VAR14)
			{
			FUN8(VAR61,VAR95);
			goto VAR63;
			}
		VAR14 += VAR13;

		if (!(VAR26->VAR9=FUN11(VAR9,VAR13,NULL)))
			{
			FUN8(VAR61,VAR73);
			goto VAR74;
			}
		VAR9+=VAR13;

		if (2 > VAR15 - VAR14)
			{
			FUN8(VAR61,
				VAR62);
			goto VAR63;
			}
		VAR14 += 2;

		FUN9(VAR9,VAR13);

		if (VAR13 > VAR15 - VAR14)
			{
			FUN8(VAR61,VAR96);
			goto VAR63;
			}
		VAR14 += VAR13;

		if (!(VAR26->VAR76=FUN11(VAR9,VAR13,NULL)))
			{
			FUN8(VAR61,VAR73);
			goto VAR74;
			}
		VAR9+=VAR13;

		if (2 > VAR15 - VAR14)
			{
			FUN8(VAR61,
				VAR62);
			goto VAR63;
			}
		VAR14 += 2;

		FUN9(VAR9,VAR13);

		if (VAR13 > VAR15 - VAR14)
			{
			FUN8(VAR61,VAR97);
			goto VAR63;
			}
		VAR14 += VAR13;

		if (!(VAR26->VAR98=FUN11(VAR9,VAR13,NULL)))
			{
			FUN8(VAR61,VAR73);
			goto VAR74;
			}
		VAR9+=VAR13;
		VAR15-=VAR14;

		if (!FUN16(VAR2, VAR99,
						FUN17(VAR26), 0, VAR26))
			{
			VAR10=VAR64;
			FUN8(VAR61,VAR100);
			goto VAR63;
			}

#ifndef VAR3
		if (VAR17 & VAR81)
			VAR19=FUN13(VAR2->VAR48->VAR49->VAR82[VAR83].VAR84);
#else
		if (0)
			;
#endif
#ifndef VAR85
		else if (VAR17 & VAR86)
			VAR19=FUN13(VAR2->VAR48->VAR49->VAR82[VAR87].VAR84);
#endif
		

		VAR2->VAR48->VAR49->VAR55=VAR26;
		VAR26=NULL;
		}
	else if ((VAR16 & VAR101) || (VAR16 & VAR102))
		{
		VAR10=VAR103;
		FUN8(VAR61,VAR104);
		goto VAR63;
		}
#endif 

#ifndef VAR27
	else if (VAR16 & VAR105)
		{
		VAR106 *VAR107;
		const VAR106 *VAR108;

		if ((VAR29=FUN18()) == NULL)
			{
			FUN8(VAR61,VAR67);
			goto VAR74;
			}

		

		
		VAR14=4;
		if (VAR14 > VAR15)
			{
			FUN8(VAR61,
				VAR62);
			goto VAR63;
			}
		
		if (!FUN19(VAR2, VAR9, 3))
			{
			FUN8(VAR61,VAR109);
			goto VAR63;
			}

		if ((VAR34 = FUN20(*(VAR9 + 2))) == 0) 
			{
			VAR10=VAR110;
			FUN8(VAR61,VAR111);
			goto VAR63;
			}

		VAR107 = FUN21(VAR34);
		if (VAR107 == NULL)
			{
			FUN8(VAR61,VAR112);
			goto VAR74;
			}
		if (FUN22(VAR29, VAR107) == 0)
			{
			FUN8(VAR61,VAR112);
			goto VAR74;
			}
		FUN23(VAR107);

		VAR108 = FUN24(VAR29);

		if (FUN25(VAR2->VAR40->VAR41.VAR45) &&
		    (FUN26(VAR108) > 163))
			{
			VAR10=VAR113;
			FUN8(VAR61,VAR114);
			goto VAR63;
			}

		VAR9+=3;

		
		if (((VAR33 = FUN27(VAR108)) == NULL) ||
		    ((VAR31 = FUN28()) == NULL))
			{
			FUN8(VAR61,VAR67);
			goto VAR74;
			}

		VAR35 = *VAR9;  
		VAR9+=1;

		if ((VAR35 > VAR15 - VAR14) ||
		    (FUN29(VAR108, VAR33, 
			VAR9, VAR35, VAR31) == 0))
			{
			FUN8(VAR61,VAR115);
			goto VAR63;
			}
		VAR14 += VAR35;

		VAR15-=VAR14;
		VAR9+=VAR35;

		
		if (0) ;
#ifndef VAR3
		else if (VAR17 & VAR81)
			VAR19=FUN13(VAR2->VAR48->VAR49->VAR82[VAR83].VAR84);
#endif
#ifndef VAR116
		else if (VAR17 & VAR117)
			VAR19=FUN13(VAR2->VAR48->VAR49->VAR82[VAR118].VAR84);
#endif
		
		FUN30(VAR29, VAR33);
		VAR2->VAR48->VAR49->VAR56=VAR29;
		VAR29=NULL;
		FUN31(VAR31);
		VAR31 = NULL;
		FUN32(VAR33);
		VAR33 = NULL;
		}
	else if (VAR16)
		{
		VAR10=VAR119;
		FUN8(VAR61,VAR120);
		goto VAR63;
		}
#endif 


	

	
	if (VAR19 != NULL)
		{
		if (FUN33(VAR2))
			{
			int VAR121;
			if (2 > VAR15)
				{
				FUN8(VAR61,
					VAR62);
				goto VAR63;
				}
			VAR121 = FUN34(&VAR21, VAR2, VAR9, VAR19);
			if (VAR121 == -1)
				goto VAR74;
			else if (VAR121 == 0)
				{
				goto VAR63;
				}
#ifdef VAR122
fprintf(VAR123, "", FUN35(VAR21));
#endif
			VAR9 += 2;
			VAR15 -= 2;
			}
		else
			VAR21 = FUN36();

		if (2 > VAR15)
			{
			FUN8(VAR61,
				VAR62);
			goto VAR63;
			}
		FUN9(VAR9,VAR13);
		VAR15-=2;
		VAR11=FUN37(VAR19);

		
		if ((VAR13 != VAR15) || (VAR15 > VAR11) || (VAR15 <= 0))
			{
			
			FUN8(VAR61,VAR124);
			goto VAR63;
			}

#ifndef VAR3
		if (VAR19->VAR125 == VAR126 && !FUN33(VAR2))
			{
			int VAR127;
			unsigned int VAR128;

			VAR11=0;
			VAR4=VAR5;
			for (VAR127=2; VAR127 > 0; VAR127--)
				{
				FUN38(&VAR7,
					VAR129);
				EVP_DigestInit_ex(&VAR7,(VAR127 == 2)
					?VAR2->VAR50->VAR130:VAR2->VAR50->VAR131, NULL);
				EVP_DigestUpdate(&VAR7,&(VAR2->VAR40->VAR132[0]),VAR133);
				EVP_DigestUpdate(&VAR7,&(VAR2->VAR40->VAR134[0]),VAR133);
				EVP_DigestUpdate(&VAR7,VAR8,VAR14);
				FUN39(&VAR7,VAR4,&VAR128);
				VAR4+=VAR128;
				VAR11+=VAR128;
				}
			VAR13=FUN40(VAR135, VAR5, VAR11, VAR9, VAR15,
								VAR19->VAR19.VAR23);
			if (VAR13 < 0)
				{
				VAR10=VAR136;
				FUN8(VAR61,VAR137);
				goto VAR63;
				}
			if (VAR13 == 0)
				{
				
				VAR10=VAR136;
				FUN8(VAR61,VAR138);
				goto VAR63;
				}
			}
		else
#endif
			{
			FUN41(&VAR7, VAR21, NULL);
			FUN42(&VAR7,&(VAR2->VAR40->VAR132[0]),VAR133);
			FUN42(&VAR7,&(VAR2->VAR40->VAR134[0]),VAR133);
			FUN42(&VAR7,VAR8,VAR14);
			if (FUN43(&VAR7,VAR9,(int)VAR15,VAR19) <= 0)
				{
				
				VAR10=VAR136;
				FUN8(VAR61,VAR138);
				goto VAR63;
				}
			}
		}
	else
		{
		
		if (!(VAR17 & (VAR139|VAR140)) && !(VAR16 & VAR47))
			{
			
			if (FUN44(VAR2))
				
				FUN8(VAR61,VAR92);
			goto VAR74;
			}
		
		if (VAR15 != 0)
			{
			FUN8(VAR61,VAR141);
			goto VAR63;
			}
		}
	FUN45(VAR19);
	FUN46(&VAR7);
	return(1);
VAR63:
	FUN47(VAR2,VAR142,VAR10);
VAR74:
	FUN45(VAR19);
#ifndef VAR3
	if (VAR23 != NULL)
		FUN5(VAR23);
#endif
#ifndef VAR24
	if (VAR26 != NULL)
		FUN6(VAR26);
#endif
#ifndef VAR27
	FUN31(VAR31);
	FUN32(VAR33);
	if (VAR29 != NULL)
		FUN7(VAR29);
#endif
	FUN46(&VAR7);
	return(-1);
	}
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

	EVP_MD_CTX_init(&VAR7);

	
	VAR15=VAR2->VAR36->FUN2(VAR2,
		VAR37,
		VAR38,
		-1,
		VAR2->VAR39,
		&VAR12);
	if (!VAR12) return((int)VAR15);

	VAR16=VAR2->VAR40->VAR41.VAR42->VAR43;

	if (VAR2->VAR40->VAR41.VAR44 != VAR45)
		{
		
		if (VAR16 & (VAR46|VAR47))
			{
			FUN3(VAR48, VAR49);
			VAR10 = VAR50;
			goto VAR51;
			}
#ifndef VAR52
		
		if (VAR16 & VAR53)
			{
			VAR2->VAR54->VAR55=FUN4();
			if (VAR2->VAR56->VAR57)
				FUN5(VAR2->VAR56->VAR57);
			VAR2->VAR56->VAR57 = NULL;
			}
#endif
		VAR2->VAR40->VAR41.VAR58=1;
		return(1);
		}

	VAR8=VAR9=(unsigned char *)VAR2->VAR59;
	if (VAR2->VAR54->VAR55 != NULL)
		{
#ifndef VAR3
		if (VAR2->VAR54->VAR55->VAR60 != NULL)
			{
			FUN6(VAR2->VAR54->VAR55->VAR60);
			VAR2->VAR54->VAR55->VAR60=NULL;
			}
#endif
#ifndef VAR24
		if (VAR2->VAR54->VAR55->VAR61)
			{
			FUN7(VAR2->VAR54->VAR55->VAR61);
			VAR2->VAR54->VAR55->VAR61=NULL;
			}
#endif
#ifndef VAR27
		if (VAR2->VAR54->VAR55->VAR62)
			{
			FUN8(VAR2->VAR54->VAR55->VAR62);
			VAR2->VAR54->VAR55->VAR62=NULL;
			}
#endif
		}
	else
		{
		VAR2->VAR54->VAR55=FUN4();
		}

	
	VAR14=0;

	VAR17=VAR2->VAR40->VAR41.VAR42->VAR63;

	VAR10=VAR64;

#ifndef VAR52
	if (VAR16 & VAR53)
		{
		char VAR65[VAR66+1];

		VAR14 = 2;
		if (VAR14 > VAR15)
			{
			FUN3(VAR48,
				VAR67);
			goto VAR51;
			}
		FUN9(VAR9,VAR13);

		
		if (VAR13 > VAR66)
			{
			VAR10=VAR68;
			FUN3(VAR48,
				VAR69);
			goto VAR51;
			}
		if (VAR13 > VAR15 - VAR14)
			{
			FUN3(VAR48,
				VAR70);
			goto VAR51;
			}
		VAR14 += VAR13;

		
		memcpy(VAR65, VAR9, VAR13);
		memset(VAR65+VAR13, 0, VAR66+1-VAR13);
		if (VAR2->VAR56->VAR57 != NULL)
			FUN5(VAR2->VAR56->VAR57);
		VAR2->VAR56->VAR57 = FUN10(VAR65);
		if (VAR2->VAR56->VAR57 == NULL)
			{
			VAR10=VAR68;
			FUN3(VAR48, VAR71);
			goto VAR51;
			}	   

		VAR9+=VAR13;
		VAR15-=VAR14;
		}
	else
#endif 
#ifndef VAR72
	if (VAR16 & VAR73)
		{
		VAR14 = 2;
		if (VAR14 > VAR15)
			{
			FUN3(VAR48,
				VAR67);
			goto VAR51;
			}
		FUN9(VAR9,VAR13);

		if (VAR13 > VAR15 - VAR14)
			{
			FUN3(VAR48,VAR74);
			goto VAR51;
			}
		VAR14 += VAR13;

		if (!(VAR2->VAR75.VAR76=FUN11(VAR9,VAR13,NULL)))
			{
			FUN3(VAR48,VAR77);
			goto VAR78;
			}
		VAR9+=VAR13;


		if (2 > VAR15 - VAR14)
			{
			FUN3(VAR48,
				VAR67);
			goto VAR51;
			}
		VAR14 += 2;

		FUN9(VAR9,VAR13);

		if (VAR13 > VAR15 - VAR14)
			{
			FUN3(VAR48,VAR79);
			goto VAR51;
			}
		VAR14 += VAR13;

		if (!(VAR2->VAR75.VAR80=FUN11(VAR9,VAR13,NULL)))
			{
			FUN3(VAR48,VAR77);
			goto VAR78;
			}
		VAR9+=VAR13;


		if (1 > VAR15 - VAR14)
			{
			FUN3(VAR48,
				VAR67);
			goto VAR51;
			}
		VAR14 += 1;

		VAR13 = (unsigned int)(VAR9[0]);
		VAR9++;

		if (VAR13 > VAR15 - VAR14)
			{
			FUN3(VAR48,VAR81);
			goto VAR51;
			}
		VAR14 += VAR13;

		if (!(VAR2->VAR75.VAR2=FUN11(VAR9,VAR13,NULL)))
			{
			FUN3(VAR48,VAR77);
			goto VAR78;
			}
		VAR9+=VAR13;

		if (2 > VAR15 - VAR14)
			{
			FUN3(VAR48,
				VAR67);
			goto VAR51;
			}
		VAR14 += 2;

		FUN9(VAR9,VAR13);

		if (VAR13 > VAR15 - VAR14)
			{
			FUN3(VAR48,VAR82);
			goto VAR51;
			}
		VAR14 += VAR13;

		if (!(VAR2->VAR75.VAR83=FUN11(VAR9,VAR13,NULL)))
			{
			FUN3(VAR48,VAR77);
			goto VAR78;
			}
		VAR9+=VAR13;
		VAR15-=VAR14;

		if (!FUN12(VAR2, &VAR10))
			{
			FUN3(VAR48,VAR84);
			goto VAR51;
			}


#ifndef VAR3
		if (VAR17 & VAR85)
			VAR19=FUN13(VAR2->VAR54->VAR55->VAR86[VAR87].VAR88);
#else
		if (0)
			;
#endif
#ifndef VAR89
		else if (VAR17 & VAR90)
			VAR19=FUN13(VAR2->VAR54->VAR55->VAR86[VAR91].VAR88);
#endif
		}
	else
#endif 
 #ifndef VAR3
 	if (VAR16 & VAR92)
 		{














 		if ((VAR23=FUN14()) == NULL)
 			{
 			FUN3(VAR48,VAR71);
			goto VAR78;
			}

		VAR14 = 2;
		if (VAR14 > VAR15)
			{
			FUN3(VAR48,
				VAR67);
			goto VAR51;
			}
		FUN9(VAR9,VAR13);

		if (VAR13 > VAR15 - VAR14)
			{
			FUN3(VAR48,VAR93);
			goto VAR51;
			}
		VAR14 += VAR13;

		if (!(VAR23->VAR15=FUN11(VAR9,VAR13,VAR23->VAR15)))
			{
			FUN3(VAR48,VAR77);
			goto VAR78;
			}
		VAR9+=VAR13;

		if (2 > VAR15 - VAR14)
			{
			FUN3(VAR48,
				VAR67);
			goto VAR51;
			}
		VAR14 += 2;

		FUN9(VAR9,VAR13);

		if (VAR13 > VAR15 - VAR14)
			{
			FUN3(VAR48,VAR94);
			goto VAR51;
			}
		VAR14 += VAR13;

		if (!(VAR23->VAR95=FUN11(VAR9,VAR13,VAR23->VAR95)))
			{
			FUN3(VAR48,VAR77);
			goto VAR78;
			}
		VAR9+=VAR13;
		VAR15-=VAR14;

		
		if (VAR17 & VAR85)
			VAR19=FUN13(VAR2->VAR54->VAR55->VAR86[VAR87].VAR88);
		else
			{
			FUN3(VAR48,VAR96);
			goto VAR78;
			}
		VAR2->VAR54->VAR55->VAR60=VAR23;
		VAR23=NULL;
		}
#else 
	if (0)
		;
#endif
#ifndef VAR24
	else if (VAR16 & VAR46)
		{
		if ((VAR26=FUN15()) == NULL)
			{
			FUN3(VAR48,VAR97);
			goto VAR78;
			}

		VAR14 = 2;
		if (VAR14 > VAR15)
			{
			FUN3(VAR48,
				VAR67);
			goto VAR51;
			}
		FUN9(VAR9,VAR13);

		if (VAR13 > VAR15 - VAR14)
			{
			FUN3(VAR48,VAR98);
			goto VAR51;
			}
		VAR14 += VAR13;

		if (!(VAR26->VAR9=FUN11(VAR9,VAR13,NULL)))
			{
			FUN3(VAR48,VAR77);
			goto VAR78;
			}
		VAR9+=VAR13;

		if (2 > VAR15 - VAR14)
			{
			FUN3(VAR48,
				VAR67);
			goto VAR51;
			}
		VAR14 += 2;

		FUN9(VAR9,VAR13);

		if (VAR13 > VAR15 - VAR14)
			{
			FUN3(VAR48,VAR99);
			goto VAR51;
			}
		VAR14 += VAR13;

		if (!(VAR26->VAR80=FUN11(VAR9,VAR13,NULL)))
			{
			FUN3(VAR48,VAR77);
			goto VAR78;
			}
		VAR9+=VAR13;

		if (2 > VAR15 - VAR14)
			{
			FUN3(VAR48,
				VAR67);
			goto VAR51;
			}
		VAR14 += 2;

		FUN9(VAR9,VAR13);

		if (VAR13 > VAR15 - VAR14)
			{
			FUN3(VAR48,VAR100);
			goto VAR51;
			}
		VAR14 += VAR13;

		if (!(VAR26->VAR101=FUN11(VAR9,VAR13,NULL)))
			{
			FUN3(VAR48,VAR77);
			goto VAR78;
			}
		VAR9+=VAR13;
		VAR15-=VAR14;

		if (!FUN16(VAR2, VAR102,
						FUN17(VAR26), 0, VAR26))
			{
			VAR10=VAR68;
			FUN3(VAR48,VAR103);
			goto VAR51;
			}

#ifndef VAR3
		if (VAR17 & VAR85)
			VAR19=FUN13(VAR2->VAR54->VAR55->VAR86[VAR87].VAR88);
#else
		if (0)
			;
#endif
#ifndef VAR89
		else if (VAR17 & VAR90)
			VAR19=FUN13(VAR2->VAR54->VAR55->VAR86[VAR91].VAR88);
#endif
		

		VAR2->VAR54->VAR55->VAR61=VAR26;
		VAR26=NULL;
		}
	else if ((VAR16 & VAR104) || (VAR16 & VAR105))
		{
		VAR10=VAR106;
		FUN3(VAR48,VAR107);
		goto VAR51;
		}
#endif 

#ifndef VAR27
	else if (VAR16 & VAR47)
		{
		VAR108 *VAR109;
		const VAR108 *VAR110;

		if ((VAR29=FUN18()) == NULL)
			{
			FUN3(VAR48,VAR71);
			goto VAR78;
			}

		

		
		VAR14=4;
		if (VAR14 > VAR15)
			{
			FUN3(VAR48,
				VAR67);
			goto VAR51;
			}
		
		if (!FUN19(VAR2, VAR9, 3))
			{
			FUN3(VAR48,VAR111);
			goto VAR51;
			}

		if ((VAR34 = FUN20(*(VAR9 + 2))) == 0) 
			{
			VAR10=VAR112;
			FUN3(VAR48,VAR113);
			goto VAR51;
			}

		VAR109 = FUN21(VAR34);
		if (VAR109 == NULL)
			{
			FUN3(VAR48,VAR114);
			goto VAR78;
			}
		if (FUN22(VAR29, VAR109) == 0)
			{
			FUN3(VAR48,VAR114);
			goto VAR78;
			}
		FUN23(VAR109);

		VAR110 = FUN24(VAR29);

		if (FUN25(VAR2->VAR40->VAR41.VAR42) &&
		    (FUN26(VAR110) > 163))
			{
			VAR10=VAR115;
			FUN3(VAR48,VAR116);
			goto VAR51;
			}

		VAR9+=3;

		
		if (((VAR33 = FUN27(VAR110)) == NULL) ||
		    ((VAR31 = FUN28()) == NULL))
			{
			FUN3(VAR48,VAR71);
			goto VAR78;
			}

		VAR35 = *VAR9;  
		VAR9+=1;

		if ((VAR35 > VAR15 - VAR14) ||
		    (FUN29(VAR110, VAR33, 
			VAR9, VAR35, VAR31) == 0))
			{
			FUN3(VAR48,VAR117);
			goto VAR51;
			}
		VAR14 += VAR35;

		VAR15-=VAR14;
		VAR9+=VAR35;

		
		if (0) ;
#ifndef VAR3
		else if (VAR17 & VAR85)
			VAR19=FUN13(VAR2->VAR54->VAR55->VAR86[VAR87].VAR88);
#endif
#ifndef VAR118
		else if (VAR17 & VAR119)
			VAR19=FUN13(VAR2->VAR54->VAR55->VAR86[VAR120].VAR88);
#endif
		
		FUN30(VAR29, VAR33);
		VAR2->VAR54->VAR55->VAR62=VAR29;
		VAR29=NULL;
		FUN31(VAR31);
		VAR31 = NULL;
		FUN32(VAR33);
		VAR33 = NULL;
		}
	else if (VAR16)
		{
		VAR10=VAR50;
		FUN3(VAR48,VAR49);
		goto VAR51;
		}
#endif 


	

	
	if (VAR19 != NULL)
		{
		if (FUN33(VAR2))
			{
			int VAR121;
			if (2 > VAR15)
				{
				FUN3(VAR48,
					VAR67);
				goto VAR51;
				}
			VAR121 = FUN34(&VAR21, VAR2, VAR9, VAR19);
			if (VAR121 == -1)
				goto VAR78;
			else if (VAR121 == 0)
				{
				goto VAR51;
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
			FUN3(VAR48,
				VAR67);
			goto VAR51;
			}
		FUN9(VAR9,VAR13);
		VAR15-=2;
		VAR11=FUN37(VAR19);

		
		if ((VAR13 != VAR15) || (VAR15 > VAR11) || (VAR15 <= 0))
			{
			
			FUN3(VAR48,VAR124);
			goto VAR51;
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
					?VAR2->VAR56->VAR130:VAR2->VAR56->VAR131, NULL);
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
				FUN3(VAR48,VAR137);
				goto VAR51;
				}
			if (VAR13 == 0)
				{
				
				VAR10=VAR136;
				FUN3(VAR48,VAR138);
				goto VAR51;
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
				FUN3(VAR48,VAR138);
				goto VAR51;
				}
			}
		}
	else
		{
		
		if (!(VAR17 & (VAR139|VAR140)) && !(VAR16 & VAR53))
			{
			
			if (FUN44(VAR2))
				
				FUN3(VAR48,VAR96);
			goto VAR78;
			}
		
		if (VAR15 != 0)
			{
			FUN3(VAR48,VAR141);
			goto VAR51;
			}
		}
	FUN45(VAR19);
	FUN46(&VAR7);
	return(1);
VAR51:
	FUN47(VAR2,VAR142,VAR10);
VAR78:
	FUN45(VAR19);
#ifndef VAR3
	if (VAR23 != NULL)
		FUN6(VAR23);
#endif
#ifndef VAR24
	if (VAR26 != NULL)
		FUN7(VAR26);
#endif
#ifndef VAR27
	FUN31(VAR31);
	FUN32(VAR33);
	if (VAR29 != NULL)
		FUN8(VAR29);
#endif
	FUN46(&VAR7);
	return(-1);
	}
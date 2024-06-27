static int FUN1(VAR1 *VAR2)
{
	VAR3 *VAR4 = VAR2->VAR5;
	char *VAR6, *VAR7 = NULL;
		
VAR8:
	VAR2->VAR9 = VAR4;
	VAR2->VAR10 = 0;
#line 311 ""



#line 291 ""
{
	YYCTYPE VAR11;
	unsigned int VAR12 = 0;
	static const unsigned char VAR13[] = {
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
	};

	FUN2(0, *VAR14);
	if ((VAR15 - VAR14) < 20) FUN3(20);
	VAR11 = *VAR14;
	if (VAR11 <= '') {
		if (VAR11 <= '') {
			if (VAR11 <= 0x00) goto VAR16;
			if (VAR11 <= 0x08) goto VAR17;
			if (VAR11 <= '') goto VAR18;
			goto VAR16;
		} else {
			if (VAR11 == '') goto VAR18;
			if (VAR11 <= '') goto VAR17;
			goto VAR18;
		}
	} else {
		if (VAR11 <= '') {
			if (VAR11 <= '') goto VAR17;
			if (VAR11 <= '') goto VAR18;
			if (VAR11 <= '') goto VAR19;
			goto VAR17;
		} else {
			if (VAR11 <= '') goto VAR20;
			if (VAR11 != '') goto VAR17;
		}
	}
	FUN2(2, *VAR14);
	++VAR14;
	if ((VAR11 = *VAR14) <= '') goto VAR21;
	if (VAR11 <= '') goto VAR22;
VAR21:
	FUN2(3, *VAR14);
#line 424 ""
	{
		FUN4(VAR2, "");
		goto VAR8;
	}
#line 366 ""
VAR19:
	FUN2(4, *VAR14);
	VAR12 = 0;
	VAR11 = *(VAR23 = ++VAR14);
	if (VAR11 <= '') goto VAR21;
	if (VAR11 <= '') goto VAR24;
	goto VAR21;
VAR20:
	FUN2(5, *VAR14);
	VAR12 = 1;
	VAR11 = *(VAR23 = ++VAR14);
	if (VAR11 <= '') goto VAR25;
	if (VAR11 <= '') goto VAR26;
	if (VAR11 == '') goto VAR27;
VAR25:
	FUN2(6, *VAR14);
#line 351 ""
	{
		timelib_sll VAR28;
		int         VAR29 = 0;
		FUN5("");
		VAR30;
		VAR7++;
		do {
			if ( *VAR7 == '' ) {
				VAR29 = 1;
				VAR7++;
			}
			if ( *VAR7 == '' ) {
				FUN4(VAR2, "");
				break;
			}

			VAR28 = FUN6((char **) &VAR7, 12);
			switch (*VAR7) {
				case '': VAR2->VAR31->VAR32 = VAR28; break;
				case '': VAR2->VAR31->VAR33 = VAR28 * 7; break;
				case '': VAR2->VAR31->VAR33 = VAR28; break;
				case '': VAR2->VAR31->VAR34 = VAR28; break;
				case '': VAR2->VAR31->VAR2 = VAR28; break;
				case '': 
					if (VAR29) {
						VAR2->VAR31->VAR35 = VAR28;
					} else {
						VAR2->VAR31->VAR36 = VAR28; 
					}
					break;
				default:
					FUN4(VAR2, "");
                                        break;
                        }
                        VAR7++;

               } while (*VAR7);


                VAR2->VAR37 = 1;
                VAR38;
                return VAR39;
	}
#line 424 ""
VAR18:
	FUN2(7, *VAR14);
	++VAR14;
	FUN2(8, *VAR14);
#line 413 ""
	{
		goto VAR8;
	}
#line 433 ""
VAR16:
	FUN2(9, *VAR14);
	++VAR14;
	FUN2(10, *VAR14);
#line 418 ""
	{
		VAR2->VAR40 = VAR4; VAR2->VAR41++;
		goto VAR8;
	}
#line 443 ""
VAR17:
	FUN2(11, *VAR14);
	VAR11 = *++VAR14;
	goto VAR21;
VAR26:
	FUN2(12, *VAR14);
	VAR11 = *++VAR14;
	if (VAR11 <= '') {
		if (VAR11 <= '') {
			if (VAR11 >= '') goto VAR42;
		} else {
			if (VAR11 == '') goto VAR43;
		}
	} else {
		if (VAR11 <= '') {
			if (VAR11 <= '') goto VAR44;
			if (VAR11 >= '') goto VAR45;
		} else {
			if (VAR11 == '') goto VAR46;
		}
	}
VAR47:
	FUN2(13, *VAR14);
	VAR14 = VAR23;
	if (VAR12 <= 0) {
		goto VAR21;
	} else {
		goto VAR25;
	}
VAR27:
	FUN2(14, *VAR14);
	VAR12 = 1;
	VAR11 = *(VAR23 = ++VAR14);
	if (VAR13[0+VAR11] & 128) {
		goto VAR48;
	}
	goto VAR25;
VAR48:
	FUN2(15, *VAR14);
	++VAR14;
	if ((VAR15 - VAR14) < 2) FUN3(2);
	VAR11 = *VAR14;
	FUN2(16, *VAR14);
	if (VAR13[0+VAR11] & 128) {
		goto VAR48;
	}
	if (VAR11 <= '') {
		if (VAR11 == '') goto VAR49;
		goto VAR47;
	} else {
		if (VAR11 <= '') goto VAR50;
		if (VAR11 != '') goto VAR47;
	}
VAR51:
	FUN2(17, *VAR14);
	VAR11 = *++VAR14;
	goto VAR25;
VAR50:
	FUN2(18, *VAR14);
	VAR12 = 1;
	VAR11 = *(VAR23 = ++VAR14);
	if (VAR11 <= '') goto VAR25;
	if (VAR11 <= '') goto VAR52;
	goto VAR25;
VAR49:
	FUN2(19, *VAR14);
	VAR12 = 1;
	VAR11 = *(VAR23 = ++VAR14);
	if (VAR11 <= '') goto VAR25;
	if (VAR11 >= '') goto VAR25;
VAR53:
	FUN2(20, *VAR14);
	++VAR14;
	if ((VAR15 - VAR14) < 2) FUN3(2);
	VAR11 = *VAR14;
	FUN2(21, *VAR14);
	if (VAR11 <= '') {
		if (VAR11 <= '') goto VAR47;
		if (VAR11 <= '') goto VAR53;
		goto VAR47;
	} else {
		if (VAR11 <= '') goto VAR50;
		if (VAR11 == '') goto VAR51;
		goto VAR47;
	}
VAR52:
	FUN2(22, *VAR14);
	++VAR14;
	if (VAR15 <= VAR14) FUN3(1);
	VAR11 = *VAR14;
	FUN2(23, *VAR14);
	if (VAR11 <= '') goto VAR47;
	if (VAR11 <= '') goto VAR52;
	if (VAR11 == '') goto VAR51;
	goto VAR47;
VAR43:
	FUN2(24, *VAR14);
	VAR11 = *++VAR14;
	if (VAR11 == '') goto VAR27;
	goto VAR25;
VAR42:
	FUN2(25, *VAR14);
	VAR11 = *++VAR14;
	if (VAR11 <= '') {
		if (VAR11 <= '') {
			if (VAR11 <= '') goto VAR47;
			goto VAR54;
		} else {
			if (VAR11 == '') goto VAR43;
			goto VAR47;
		}
	} else {
		if (VAR11 <= '') {
			if (VAR11 <= '') goto VAR44;
			if (VAR11 <= '') goto VAR47;
		} else {
			if (VAR11 == '') goto VAR46;
			goto VAR47;
		}
	}
VAR45:
	FUN2(26, *VAR14);
	VAR12 = 1;
	VAR11 = *(VAR23 = ++VAR14);
	if (VAR11 <= '') goto VAR25;
	if (VAR11 <= '') goto VAR55;
	if (VAR11 == '') goto VAR27;
	goto VAR25;
VAR44:
	FUN2(27, *VAR14);
	VAR12 = 1;
	VAR11 = *(VAR23 = ++VAR14);
	if (VAR11 <= '') goto VAR25;
	if (VAR11 <= '') goto VAR56;
	if (VAR11 == '') goto VAR27;
	goto VAR25;
VAR46:
	FUN2(28, *VAR14);
	VAR12 = 1;
	VAR11 = *(VAR23 = ++VAR14);
	if (VAR11 <= '') goto VAR25;
	if (VAR11 <= '') goto VAR57;
	if (VAR11 == '') goto VAR27;
	goto VAR25;
VAR57:
	FUN2(29, *VAR14);
	++VAR14;
	if ((VAR15 - VAR14) < 3) FUN3(3);
	VAR11 = *VAR14;
	FUN2(30, *VAR14);
	if (VAR11 <= '') {
		if (VAR11 <= '') goto VAR47;
		if (VAR11 <= '') goto VAR57;
		if (VAR11 <= '') goto VAR47;
		goto VAR43;
	} else {
		if (VAR11 <= '') {
			if (VAR11 <= '') goto VAR47;
			goto VAR44;
		} else {
			if (VAR11 == '') goto VAR45;
			goto VAR47;
		}
	}
VAR56:
	FUN2(31, *VAR14);
	++VAR14;
	if ((VAR15 - VAR14) < 3) FUN3(3);
	VAR11 = *VAR14;
	FUN2(32, *VAR14);
	if (VAR11 <= '') {
		if (VAR11 <= '') goto VAR47;
		if (VAR11 <= '') goto VAR56;
		goto VAR47;
	} else {
		if (VAR11 <= '') goto VAR43;
		if (VAR11 == '') goto VAR45;
		goto VAR47;
	}
VAR55:
	FUN2(33, *VAR14);
	++VAR14;
	if ((VAR15 - VAR14) < 3) FUN3(3);
	VAR11 = *VAR14;
	FUN2(34, *VAR14);
	if (VAR11 <= '') goto VAR47;
	if (VAR11 <= '') goto VAR55;
	if (VAR11 == '') goto VAR43;
	goto VAR47;
VAR54:
	FUN2(35, *VAR14);
	VAR11 = *++VAR14;
	if (VAR11 <= '') {
		if (VAR11 <= '') {
			if (VAR11 <= '') goto VAR47;
		} else {
			if (VAR11 == '') goto VAR43;
			goto VAR47;
		}
	} else {
		if (VAR11 <= '') {
			if (VAR11 <= '') goto VAR44;
			if (VAR11 <= '') goto VAR47;
			goto VAR45;
		} else {
			if (VAR11 == '') goto VAR46;
			goto VAR47;
		}
	}
	FUN2(36, *VAR14);
	VAR11 = *++VAR14;
	if (VAR11 != '') goto VAR58;
	FUN2(37, *VAR14);
	VAR11 = *++VAR14;
	if (VAR11 <= '') goto VAR47;
	if (VAR11 <= '') goto VAR59;
	if (VAR11 <= '') goto VAR60;
	goto VAR47;
VAR61:
	FUN2(38, *VAR14);
	++VAR14;
	if ((VAR15 - VAR14) < 3) FUN3(3);
	VAR11 = *VAR14;
VAR58:
	FUN2(39, *VAR14);
	if (VAR11 <= '') {
		if (VAR11 <= '') {
			if (VAR11 <= '') goto VAR47;
			goto VAR61;
		} else {
			if (VAR11 == '') goto VAR43;
			goto VAR47;
		}
	} else {
		if (VAR11 <= '') {
			if (VAR11 <= '') goto VAR44;
			if (VAR11 <= '') goto VAR47;
			goto VAR45;
		} else {
			if (VAR11 == '') goto VAR46;
			goto VAR47;
		}
	}
VAR59:
	FUN2(40, *VAR14);
	VAR11 = *++VAR14;
	if (VAR11 <= '') goto VAR47;
	if (VAR11 <= '') goto VAR62;
	goto VAR47;
VAR60:
	FUN2(41, *VAR14);
	VAR11 = *++VAR14;
	if (VAR11 <= '') goto VAR47;
	if (VAR11 >= '') goto VAR47;
VAR62:
	FUN2(42, *VAR14);
	VAR11 = *++VAR14;
	if (VAR11 != '') goto VAR47;
	FUN2(43, *VAR14);
	VAR11 = *++VAR14;
	if (VAR11 <= '') goto VAR47;
	if (VAR11 <= '') goto VAR63;
	if (VAR11 <= '') goto VAR64;
	if (VAR11 <= '') goto VAR65;
	goto VAR47;
VAR63:
	FUN2(44, *VAR14);
	VAR11 = *++VAR14;
	if (VAR11 <= '') goto VAR47;
	if (VAR11 <= '') goto VAR66;
	goto VAR47;
VAR64:
	FUN2(45, *VAR14);
	VAR11 = *++VAR14;
	if (VAR11 <= '') goto VAR47;
	if (VAR11 <= '') goto VAR66;
	goto VAR47;
VAR65:
	FUN2(46, *VAR14);
	VAR11 = *++VAR14;
	if (VAR11 <= '') goto VAR47;
	if (VAR11 >= '') goto VAR47;
VAR66:
	FUN2(47, *VAR14);
	VAR11 = *++VAR14;
	if (VAR11 != '') goto VAR47;
	FUN2(48, *VAR14);
	VAR11 = *++VAR14;
	if (VAR11 <= '') goto VAR47;
	if (VAR11 <= '') goto VAR67;
	if (VAR11 <= '') goto VAR68;
	goto VAR47;
VAR67:
	FUN2(49, *VAR14);
	VAR11 = *++VAR14;
	if (VAR11 <= '') goto VAR47;
	if (VAR11 <= '') goto VAR69;
	goto VAR47;
VAR68:
	FUN2(50, *VAR14);
	VAR11 = *++VAR14;
	if (VAR11 <= '') goto VAR47;
	if (VAR11 >= '') goto VAR47;
VAR69:
	FUN2(51, *VAR14);
	VAR11 = *++VAR14;
	if (VAR11 != '') goto VAR47;
	FUN2(52, *VAR14);
	VAR11 = *++VAR14;
	if (VAR11 <= '') goto VAR47;
	if (VAR11 >= '') goto VAR47;
	FUN2(53, *VAR14);
	VAR11 = *++VAR14;
	if (VAR11 <= '') goto VAR47;
	if (VAR11 >= '') goto VAR47;
	FUN2(54, *VAR14);
	VAR11 = *++VAR14;
	if (VAR11 != '') goto VAR47;
	FUN2(55, *VAR14);
	VAR11 = *++VAR14;
	if (VAR11 <= '') goto VAR47;
	if (VAR11 >= '') goto VAR47;
	FUN2(56, *VAR14);
	VAR11 = *++VAR14;
	if (VAR11 <= '') goto VAR47;
	if (VAR11 >= '') goto VAR47;
	FUN2(57, *VAR14);
	++VAR14;
	FUN2(58, *VAR14);
#line 393 ""
	{
		FUN5("");
		VAR30;
		VAR2->VAR31->VAR32 = FUN6((char **) &VAR7, 4);
		VAR7++;
		VAR2->VAR31->VAR36 = FUN6((char **) &VAR7, 2);
		VAR7++;
		VAR2->VAR31->VAR33 = FUN6((char **) &VAR7, 2);
		VAR7++;
		VAR2->VAR31->VAR34 = FUN6((char **) &VAR7, 2);
		VAR7++;
		VAR2->VAR31->VAR35 = FUN6((char **) &VAR7, 2);
		VAR7++;
		VAR2->VAR31->VAR2 = FUN6((char **) &VAR7, 2);
		VAR2->VAR37 = 1;
		VAR38;
		return VAR39;
	}
#line 792 ""
VAR24:
	FUN2(59, *VAR14);
	VAR11 = *++VAR14;
	if (VAR11 <= '') goto VAR47;
	if (VAR11 >= '') goto VAR47;
	FUN2(60, *VAR14);
	VAR11 = *++VAR14;
	if (VAR11 <= '') goto VAR47;
	if (VAR11 >= '') goto VAR47;
	FUN2(61, *VAR14);
	VAR11 = *++VAR14;
	if (VAR11 <= '') {
		if (VAR11 == '') goto VAR70;
		goto VAR47;
	} else {
		if (VAR11 <= '') goto VAR71;
		if (VAR11 <= '') goto VAR72;
		goto VAR47;
	}
VAR71:
	FUN2(62, *VAR14);
	VAR11 = *++VAR14;
	if (VAR11 <= '') goto VAR47;
	if (VAR11 <= '') goto VAR73;
	goto VAR47;
VAR72:
	FUN2(63, *VAR14);
	VAR11 = *++VAR14;
	if (VAR11 <= '') goto VAR47;
	if (VAR11 <= '') goto VAR73;
	goto VAR47;
VAR70:
	FUN2(64, *VAR14);
	VAR11 = *++VAR14;
	if (VAR11 <= '') goto VAR47;
	if (VAR11 <= '') goto VAR74;
	if (VAR11 <= '') goto VAR75;
	goto VAR47;
VAR74:
	FUN2(65, *VAR14);
	VAR11 = *++VAR14;
	if (VAR11 <= '') goto VAR47;
	if (VAR11 <= '') goto VAR76;
	goto VAR47;
VAR75:
	FUN2(66, *VAR14);
	VAR11 = *++VAR14;
	if (VAR11 <= '') goto VAR47;
	if (VAR11 >= '') goto VAR47;
VAR76:
	FUN2(67, *VAR14);
	VAR11 = *++VAR14;
	if (VAR11 != '') goto VAR47;
	FUN2(68, *VAR14);
	VAR11 = *++VAR14;
	if (VAR11 <= '') goto VAR47;
	if (VAR11 <= '') goto VAR77;
	if (VAR11 <= '') goto VAR78;
	if (VAR11 <= '') goto VAR79;
	goto VAR47;
VAR77:
	FUN2(69, *VAR14);
	VAR11 = *++VAR14;
	if (VAR11 <= '') goto VAR47;
	if (VAR11 <= '') goto VAR80;
	goto VAR47;
VAR78:
	FUN2(70, *VAR14);
	VAR11 = *++VAR14;
	if (VAR11 <= '') goto VAR47;
	if (VAR11 <= '') goto VAR80;
	goto VAR47;
VAR79:
	FUN2(71, *VAR14);
	VAR11 = *++VAR14;
	if (VAR11 <= '') goto VAR47;
	if (VAR11 >= '') goto VAR47;
VAR80:
	FUN2(72, *VAR14);
	VAR11 = *++VAR14;
	if (VAR11 != '') goto VAR47;
	FUN2(73, *VAR14);
	VAR11 = *++VAR14;
	if (VAR11 <= '') goto VAR47;
	if (VAR11 <= '') goto VAR81;
	if (VAR11 <= '') goto VAR82;
	goto VAR47;
VAR81:
	FUN2(74, *VAR14);
	VAR11 = *++VAR14;
	if (VAR11 <= '') goto VAR47;
	if (VAR11 <= '') goto VAR83;
	goto VAR47;
VAR82:
	FUN2(75, *VAR14);
	VAR11 = *++VAR14;
	if (VAR11 <= '') goto VAR47;
	if (VAR11 >= '') goto VAR47;
VAR83:
	FUN2(76, *VAR14);
	VAR11 = *++VAR14;
	if (VAR11 != '') goto VAR47;
	FUN2(77, *VAR14);
	VAR11 = *++VAR14;
	if (VAR11 <= '') goto VAR47;
	if (VAR11 >= '') goto VAR47;
	FUN2(78, *VAR14);
	VAR11 = *++VAR14;
	if (VAR11 <= '') goto VAR47;
	if (VAR11 >= '') goto VAR47;
	FUN2(79, *VAR14);
	VAR11 = *++VAR14;
	if (VAR11 != '') goto VAR47;
	FUN2(80, *VAR14);
	VAR11 = *++VAR14;
	if (VAR11 <= '') goto VAR47;
	if (VAR11 >= '') goto VAR47;
	FUN2(81, *VAR14);
	VAR11 = *++VAR14;
	if (VAR11 <= '') goto VAR47;
	if (VAR11 >= '') goto VAR47;
	FUN2(82, *VAR14);
	VAR11 = *++VAR14;
	if (VAR11 != '') goto VAR47;
VAR84:
	FUN2(83, *VAR14);
	++VAR14;
	FUN2(84, *VAR14);
#line 327 ""
	{
		VAR85 *VAR86;

		if (VAR2->VAR87 || VAR2->VAR37) {
			VAR86 = VAR2->VAR88;
			VAR2->VAR89 = 1;
		} else {
			VAR86 = VAR2->VAR90;
			VAR2->VAR91 = 1;
		}
		FUN5("");
		VAR30;
		VAR86->VAR32 = FUN7((char **) &VAR7, 4);
		VAR86->VAR36 = FUN7((char **) &VAR7, 2);
		VAR86->VAR33 = FUN7((char **) &VAR7, 2);
		VAR86->VAR34 = FUN7((char **) &VAR7, 2);
		VAR86->VAR35 = FUN7((char **) &VAR7, 2);
		VAR86->VAR2 = FUN7((char **) &VAR7, 2);
		VAR2->VAR87 = 1;
		VAR38;
		return VAR92;
	}
#line 944 ""
VAR73:
	FUN2(85, *VAR14);
	VAR11 = *++VAR14;
	if (VAR11 <= '') goto VAR47;
	if (VAR11 <= '') goto VAR93;
	if (VAR11 <= '') goto VAR94;
	if (VAR11 <= '') goto VAR95;
	goto VAR47;
VAR93:
	FUN2(86, *VAR14);
	VAR11 = *++VAR14;
	if (VAR11 <= '') goto VAR47;
	if (VAR11 <= '') goto VAR96;
	goto VAR47;
VAR94:
	FUN2(87, *VAR14);
	VAR11 = *++VAR14;
	if (VAR11 <= '') goto VAR47;
	if (VAR11 <= '') goto VAR96;
	goto VAR47;
VAR95:
	FUN2(88, *VAR14);
	VAR11 = *++VAR14;
	if (VAR11 <= '') goto VAR47;
	if (VAR11 >= '') goto VAR47;
VAR96:
	FUN2(89, *VAR14);
	VAR11 = *++VAR14;
	if (VAR11 != '') goto VAR47;
	FUN2(90, *VAR14);
	VAR11 = *++VAR14;
	if (VAR11 <= '') goto VAR47;
	if (VAR11 <= '') goto VAR97;
	if (VAR11 <= '') goto VAR98;
	goto VAR47;
VAR97:
	FUN2(91, *VAR14);
	VAR11 = *++VAR14;
	if (VAR11 <= '') goto VAR47;
	if (VAR11 <= '') goto VAR99;
	goto VAR47;
VAR98:
	FUN2(92, *VAR14);
	VAR11 = *++VAR14;
	if (VAR11 <= '') goto VAR47;
	if (VAR11 >= '') goto VAR47;
VAR99:
	FUN2(93, *VAR14);
	VAR11 = *++VAR14;
	if (VAR11 <= '') goto VAR47;
	if (VAR11 >= '') goto VAR47;
	FUN2(94, *VAR14);
	VAR11 = *++VAR14;
	if (VAR11 <= '') goto VAR47;
	if (VAR11 >= '') goto VAR47;
	FUN2(95, *VAR14);
	VAR11 = *++VAR14;
	if (VAR11 <= '') goto VAR47;
	if (VAR11 >= '') goto VAR47;
	FUN2(96, *VAR14);
	VAR11 = *++VAR14;
	if (VAR11 <= '') goto VAR47;
	if (VAR11 >= '') goto VAR47;
	FUN2(97, *VAR14);
	VAR11 = *++VAR14;
	if (VAR11 == '') goto VAR84;
	goto VAR47;
VAR22:
	FUN2(98, *VAR14);
	++VAR14;
	if (VAR15 <= VAR14) FUN3(1);
	VAR11 = *VAR14;
	FUN2(99, *VAR14);
	if (VAR11 <= '') goto VAR100;
	if (VAR11 <= '') goto VAR22;
VAR100:
	FUN2(100, *VAR14);
#line 316 ""
	{
		FUN5("");
		VAR30;
		VAR7++;
		VAR2->VAR101 = FUN6((char **) &VAR7, 9);
		VAR38;
		VAR2->VAR102 = 1;
		return VAR39;
	}
#line 1032 ""
}
#line 428 ""

}
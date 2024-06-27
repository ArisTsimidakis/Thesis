FUN1(
    CARD8      VAR1,
    PicturePtr VAR2,
    PicturePtr VAR3,
    PicturePtr VAR4,
    INT16      VAR5,
    INT16      VAR6,
    INT16      VAR7,
    INT16      VAR8,
    INT16      VAR9,
    INT16      VAR10,
    CARD16     VAR11,
    CARD16     VAR12)
{
    CARD32	VAR13, VAR14;
    VAR15	*VAR16, *VAR17, VAR18, VAR19;
    VAR20	*VAR21, *VAR22, VAR23;
    FbStride	VAR24, VAR25;
    CARD16	VAR26;

    FUN2(VAR2, VAR13, VAR4->VAR27);

    VAR19 = FUN3 (VAR4->VAR28->VAR29);
    VAR14 = VAR13 >> 24;
    if (VAR13 == 0)
	return;

    FUN4 (VAR4, VAR9, VAR10, VAR15, VAR24, VAR16, 1);
    FUN4 (VAR3, VAR7, VAR8, VAR20, VAR25, VAR21, 1);

    if (VAR19 == VAR30 && VAR4->VAR28->VAR31 == 32 &&
        VAR11 * VAR12 > VAR32 &&
        FUN5(VAR4->VAR28->VAR33)->VAR34->VAR35)
    {
	void *VAR36[2], *VAR37[2];
	unsigned int VAR38[2];
	unsigned int VAR39;

	VAR36[0] = &VAR13; VAR36[1] = &VAR13;
	
	VAR37[0] = VAR16; VAR37[1] = VAR16;
	VAR38[0] = VAR24 * 4; VAR38[1] = VAR38[0];
	VAR39 = FUN6(VAR40, VAR41,
                                   VAR42, VAR41);

	if (FUN5(VAR4->VAR28->VAR33)->VAR34->FUN7(
                VAR11, VAR12, VAR39, VAR36, NULL,
                VAR21, VAR25,
                VAR37, VAR38) == VAR43)
	{
	    return;
	}
    }

    while (VAR12--)
    {
	VAR17 = VAR16;
	VAR16 += VAR24;
	VAR22 = VAR21;
	VAR21 += VAR25;
	VAR26 = VAR11;

	while (VAR26--)
	{
 }
 
 void

FUN8 (CARD8      VAR1,

    PicturePtr      VAR2,

    PicturePtr      VAR3,

    PicturePtr      VAR4,

    INT16           VAR5,

    INT16           VAR6,

    INT16           VAR7,

    INT16           VAR8,

    INT16           VAR9,

    INT16           VAR10,

    CARD16          VAR11,

    CARD16          VAR12)
























 {

    RegionRec	    VAR44;

    int		    VAR45;

    BoxPtr	    VAR46;

    CompositeFunc   VAR47 = 0;

    Bool	    VAR48 = VAR2->VAR49;

    Bool	    VAR50 = VAR51;

    Bool            VAR52 = VAR2->VAR53 != 0;

    Bool	    VAR54 = VAR51;

    Bool            VAR55 = VAR4->VAR53 != 0;

    int		    VAR56, VAR57, VAR58, VAR59, VAR60, VAR61;

    int		    VAR26, VAR62, VAR63, VAR64;

    int		    VAR65 = VAR4->VAR28->VAR29;

    int		    VAR66 = VAR4->VAR27;



    VAR9 += VAR4->VAR28->VAR67;

    VAR10 += VAR4->VAR28->VAR68;

    VAR5 += VAR2->VAR28->VAR67;

    VAR6 += VAR2->VAR28->VAR68;

    if (VAR3)

    {

	VAR7 += VAR3->VAR28->VAR67;

	VAR8 += VAR3->VAR28->VAR68;

	VAR50 = VAR3->VAR49;

	VAR54 = VAR3->VAR53 != 0;

    }










     
    int		    VAR45;
     {
         VAR4->VAR27 = VAR69;
     }







    if (!VAR2->VAR70 && !(VAR3 && VAR3->VAR70))

    if (!VAR54 && !VAR52 && !VAR55)

    switch (VAR1) {

    case VAR71:

#ifdef VAR72

	if (!VAR3 && VAR2->VAR27 == VAR4->VAR27 &&

	    VAR2->VAR28 != VAR4->VAR28)

	{

	    VAR47 = VAR73;

	}

#endif

	break;

    case VAR74:

	if (VAR3)

	{

	    if (VAR48 && 

		VAR2->VAR28->VAR11 == 1 &&

		VAR2->VAR28->VAR12 == 1)

	    {

		VAR48 = VAR51;

		if (FUN9(VAR2->VAR27)) {

		    switch (VAR3->VAR27) {

		    case VAR75:

			switch (VAR4->VAR27) {

			case VAR76:

			case VAR77:

#ifdef VAR72

			    if (FUN10())

				VAR47 = VAR78;

			    else

#endif

			    VAR47 = VAR79;

			    break;

			case VAR80:

			case VAR81:

			    VAR47 = VAR82;

			    break;

			case VAR69:

			case VAR83:

			case VAR84:

			case VAR85:

			    VAR47 = VAR86;

			    break;

			}

			break;

		    case VAR69:

			if (VAR3->VAR87) {

			    switch (VAR4->VAR27) {

			    case VAR69:

			    case VAR83:

#ifdef VAR72

				if (FUN10())

				    VAR47 = VAR88;

				else

#endif

				VAR47 = VAR89;

				break;

			    case VAR76:

#ifdef VAR72

				if (FUN10())

				    VAR47 = VAR90;

				else

#endif

				VAR47 = VAR91;

				break;

			    }

			}

			break;

		    case VAR84:

			if (VAR3->VAR87) {

			    switch (VAR4->VAR27) {

			    case VAR84:

			    case VAR85:

#ifdef VAR72

				if (FUN10())

				    VAR47 = VAR88;

				else

#endif

				VAR47 = VAR89;

				break;

			    case VAR77:

#ifdef VAR72

				if (FUN10())

				    VAR47 = VAR90;

				else

#endif

				VAR47 = VAR91;

				break;

			    }

			}

			break;

		    case VAR92:

			switch (VAR4->VAR27) {

			case VAR76:

			case VAR77:

			case VAR80:

			case VAR81:

			case VAR69:

			case VAR83:

			case VAR84:

			case VAR85:

			    VAR47 = VAR93;

			    break;

			}

			break;

		    }

		}

	    }

	    else 

	    {

		if (VAR2->VAR28 == VAR3->VAR28 &&

		    VAR5 == VAR7 && VAR6 == VAR8 &&

		    !VAR3->VAR87)

		{

		    

		    switch (VAR2->VAR27) {

		    case VAR85:

			switch (VAR3->VAR27) {

			case VAR69:

			case VAR84:

			    switch (VAR4->VAR27) {

			    case VAR69:

			    case VAR83:

#ifdef VAR72

				if (FUN10())

				    VAR47 = VAR94;

#endif

				break;

			    case VAR76:

#ifdef VAR72

				if (FUN10())

				    VAR47 = VAR95;

#endif

				break;

			    }

			    break;

			}

			break;

		    case VAR83:

			switch (VAR3->VAR27) {

			case VAR69:

			case VAR84:

			    switch (VAR4->VAR27) {

			    case VAR84:

			    case VAR85:

#ifdef VAR72

				if (FUN10())

				    VAR47 = VAR94;

#endif

				break;

			    case VAR76:

#ifdef VAR72

				if (FUN10())

				    VAR47 = VAR95;

#endif

				break;

			    }

			    break;

			}

			break;

		    }

		    break;

	}

	else

	{

		    

		    if (VAR50 &&

			VAR3->VAR28->VAR11 == 1 &&

			VAR3->VAR28->VAR12 == 1)

		    {

			if (VAR2->VAR27 == VAR83 &&

			    VAR4->VAR27 == VAR83 &&

			    VAR3->VAR27 == VAR75)

			{

#ifdef VAR72

			    if (FUN10())

				VAR47 = VAR96;

#endif

			}

		    }

		}

	    }

	}

	else 

	{

	    if (VAR48 &&

		VAR2->VAR28->VAR11 == 1 &&

		VAR2->VAR28->VAR12 == 1)

	    {

		

	    switch (VAR2->VAR27) {

	    case VAR69:

		    switch (VAR4->VAR27) {

		    case VAR69:

	    case VAR83:

#ifdef VAR72

			if (FUN10())

			{

			    VAR48 = VAR51;

			    VAR47 = VAR97;

			}

#endif

			break;

		    case VAR76:

#ifdef VAR72

			if (FUN10())

			{

			    VAR48 = VAR51;

			    VAR47 = VAR98;

			}

#endif

			break;

		    }

		    break;

		}

	    }

	    else

	    {

		switch (VAR2->VAR27) {

		case VAR69:

		switch (VAR4->VAR27) {

		case VAR69:

		case VAR83:

#ifdef VAR72

			if (FUN10())

			    VAR47 = VAR99;

			else

#endif

		    VAR47 = VAR100;

		    break;

		case VAR80:

		    VAR47 = VAR101;

		    break;

		case VAR76:

		    VAR47 = VAR102;

		    break;

		}

		break;

		case VAR83:

		    switch (VAR4->VAR27) {

		    case VAR69:

		    case VAR83:

#ifdef VAR72

			if (FUN10())

			    VAR47 = VAR73;

#endif

			break;

		    }

		case VAR85:

		    switch (VAR4->VAR27) {

	    case VAR84:

	    case VAR85:

#ifdef VAR72

			if (FUN10())

			    VAR47 = VAR73;

#endif

			break;

		    }

		    break;

		case VAR84:

		switch (VAR4->VAR27) {

		case VAR84:

		case VAR85:

#ifdef VAR72

			if (FUN10())

			    VAR47 = VAR99;

			else

#endif

		    VAR47 = VAR100;

		    break;

		case VAR81:

		    VAR47 = VAR101;

		    break;

		case VAR77:

		    VAR47 = VAR102;

		    break;

		}

		break;

	    case VAR76:

		switch (VAR4->VAR27) {

		case VAR76:

		    VAR47 = VAR103;

		    break;

		}

		break;

	    case VAR77:

		switch (VAR4->VAR27) {

		case VAR77:

		    VAR47 = VAR103;

		    break;

		}

		break;

	    }

	}

	}

	break;

    case VAR104:

	if (VAR3 == 0)

	{

	    switch (VAR2->VAR27) {

	    case VAR69:

		switch (VAR4->VAR27) {

		case VAR69:

#ifdef VAR72

		    if (FUN10())

			VAR47 = VAR105;

		    else

#endif

		    VAR47 = VAR106;

		    break;

		}

		break;

	    case VAR84:

		switch (VAR4->VAR27) {

		case VAR84:

#ifdef VAR72

		    if (FUN10())

			VAR47 = VAR105;

		    else

#endif

		    VAR47 = VAR106;

		    break;

		}

		break;

	    case VAR75:

		switch (VAR4->VAR27) {

		case VAR75:

#ifdef VAR72

		    if (FUN10())

			VAR47 = VAR107;

		    else

#endif

		    VAR47 = VAR108;

		    break;

		}

		break;

	    case VAR92:

		switch (VAR4->VAR27) {

		case VAR92:

		    VAR47 = VAR109;

		    break;

		}

		break;

	    }

	}

	break;

    }



    if (!VAR47) {

        

        FUN11(VAR1, VAR2, VAR3, VAR4, VAR5, VAR6, VAR7, VAR8, VAR9, VAR10, VAR11, VAR12);

        

        VAR4->VAR28->VAR29 = VAR65;

        VAR4->VAR27 = VAR66;

        return;








































     }



    if (!FUN12 (&VAR44,

 				   VAR2,

 				   VAR3,

 				   VAR4,

 				   VAR5,

 				   VAR6,

 				   VAR7,

 				   VAR8,

 				   VAR9,

 				   VAR10,

 				   VAR11,

                                   VAR12))

        return;



    VAR45 = FUN13 (&VAR44);

    VAR46 = FUN14 (&VAR44);

    while (VAR45--)


     {

	VAR62 = VAR46->VAR110 - VAR46->VAR111;

	VAR59 = VAR46->VAR111 - VAR10 + VAR6;

	VAR57 = VAR46->VAR111 - VAR10 + VAR8;

	VAR61 = VAR46->VAR111;

	while (VAR62)

	{

	    VAR64 = VAR62;

	    VAR26 = VAR46->VAR112 - VAR46->VAR113;

	    VAR58 = VAR46->VAR113 - VAR9 + VAR5;

	    VAR56 = VAR46->VAR113 - VAR9 + VAR7;

	    VAR60 = VAR46->VAR113;

	    if (VAR50)

	    {

		VAR57 = FUN15 (VAR57, VAR3->VAR28->VAR12);

		if (VAR64 > VAR3->VAR28->VAR12 - VAR57)

		    VAR64 = VAR3->VAR28->VAR12 - VAR57;

	    }

	    if (VAR48)

	    {

		VAR59 = FUN15 (VAR59, VAR2->VAR28->VAR12);

		if (VAR64 > VAR2->VAR28->VAR12 - VAR59)

		    VAR64 = VAR2->VAR28->VAR12 - VAR59;

	    }

	    while (VAR26)

	    {

		VAR63 = VAR26;

		if (VAR50)

		{

		    VAR56 = FUN15 (VAR56, VAR3->VAR28->VAR11);

		    if (VAR63 > VAR3->VAR28->VAR11 - VAR56)

			VAR63 = VAR3->VAR28->VAR11 - VAR56;

		}

		if (VAR48)

		{

		    VAR58 = FUN15 (VAR58, VAR2->VAR28->VAR11);

		    if (VAR63 > VAR2->VAR28->VAR11 - VAR58)

			VAR63 = VAR2->VAR28->VAR11 - VAR58;

		}

		(*VAR47) (VAR1, VAR2, VAR3, VAR4,

			 VAR58, VAR59, VAR56, VAR57, VAR60, VAR61,

			 VAR63, VAR64);

		VAR26 -= VAR63;

		VAR58 += VAR63;

		VAR56 += VAR63;

		VAR60 += VAR63;

	    }

	    VAR62 -= VAR64;

	    VAR59 += VAR64;

	    VAR57 += VAR64;

	    VAR61 += VAR64;

	}

	VAR46++;




     }

    FUN16 (VAR4->VAR28->VAR33, &VAR44);
 

    

    VAR4->VAR28->VAR29 = VAR65;


     VAR4->VAR27 = VAR66;
 }
    }
    
    if (VAR66 == VAR83)
    {
        VAR4->VAR27 = VAR69;
    }



    if (!VAR2->VAR70 && !(VAR3 && VAR3->VAR70))
    if (!VAR54 && !VAR52 && !VAR55)
    switch (VAR1) {
    case VAR71:
#ifdef VAR72
	if (!VAR3 && VAR2->VAR27 == VAR4->VAR27 &&
	    VAR2->VAR28 != VAR4->VAR28)
	{
	    VAR47 = VAR73;
	}
#endif
	break;
    case VAR74:
	if (VAR3)
	{
	    if (VAR48 && 
		VAR2->VAR28->VAR11 == 1 &&
		VAR2->VAR28->VAR12 == 1)
	    {
		VAR48 = VAR51;
		if (FUN9(VAR2->VAR27)) {
		    switch (VAR3->VAR27) {
		    case VAR75:
			switch (VAR4->VAR27) {
			case VAR76:
			case VAR77:
#ifdef VAR72
			    if (FUN10())
				VAR47 = VAR78;
			    else
#endif
			    VAR47 = VAR79;
			    break;
			case VAR80:
			case VAR81:
			    VAR47 = VAR82;
			    break;
			case VAR69:
			case VAR83:
			case VAR84:
			case VAR85:
			    VAR47 = VAR86;
			    break;
			}
			break;
		    case VAR69:
			if (VAR3->VAR87) {
			    switch (VAR4->VAR27) {
			    case VAR69:
			    case VAR83:
#ifdef VAR72
				if (FUN10())
				    VAR47 = VAR88;
				else
#endif
				VAR47 = VAR89;
				break;
			    case VAR76:
#ifdef VAR72
				if (FUN10())
				    VAR47 = VAR90;
				else
#endif
				VAR47 = VAR91;
				break;
			    }
			}
			break;
		    case VAR84:
			if (VAR3->VAR87) {
			    switch (VAR4->VAR27) {
			    case VAR84:
			    case VAR85:
#ifdef VAR72
				if (FUN10())
				    VAR47 = VAR88;
				else
#endif
				VAR47 = VAR89;
				break;
			    case VAR77:
#ifdef VAR72
				if (FUN10())
				    VAR47 = VAR90;
				else
#endif
				VAR47 = VAR91;
				break;
			    }
			}
			break;
		    case VAR92:
			switch (VAR4->VAR27) {
			case VAR76:
			case VAR77:
			case VAR80:
			case VAR81:
			case VAR69:
			case VAR83:
			case VAR84:
			case VAR85:
			    VAR47 = VAR93;
			    break;
			}
			break;
		    }
		}
	    }
	    else 
	    {
		if (VAR2->VAR28 == VAR3->VAR28 &&
		    VAR5 == VAR7 && VAR6 == VAR8 &&
		    !VAR3->VAR87)
		{
		    
		    switch (VAR2->VAR27) {
		    case VAR85:
			switch (VAR3->VAR27) {
			case VAR69:
			case VAR84:
			    switch (VAR4->VAR27) {
			    case VAR69:
			    case VAR83:
#ifdef VAR72
				if (FUN10())
				    VAR47 = VAR94;
#endif
				break;
			    case VAR76:
#ifdef VAR72
				if (FUN10())
				    VAR47 = VAR95;
#endif
				break;
			    }
			    break;
			}
			break;
		    case VAR83:
			switch (VAR3->VAR27) {
			case VAR69:
			case VAR84:
			    switch (VAR4->VAR27) {
			    case VAR84:
			    case VAR85:
#ifdef VAR72
				if (FUN10())
				    VAR47 = VAR94;
#endif
				break;
			    case VAR76:
#ifdef VAR72
				if (FUN10())
				    VAR47 = VAR95;
#endif
				break;
			    }
			    break;
			}
			break;
		    }
		    break;
	}
	else
	{
		    
		    if (VAR50 &&
			VAR3->VAR28->VAR11 == 1 &&
			VAR3->VAR28->VAR12 == 1)
		    {
			if (VAR2->VAR27 == VAR83 &&
			    VAR4->VAR27 == VAR83 &&
			    VAR3->VAR27 == VAR75)
			{
#ifdef VAR72
			    if (FUN10())
				VAR47 = VAR96;
#endif
			}
		    }
		}
	    }
	}
	else 
	{
	    if (VAR48 &&
		VAR2->VAR28->VAR11 == 1 &&
		VAR2->VAR28->VAR12 == 1)
	    {
		
	    switch (VAR2->VAR27) {
	    case VAR69:
		    switch (VAR4->VAR27) {
		    case VAR69:
	    case VAR83:
#ifdef VAR72
			if (FUN10())
			{
			    VAR48 = VAR51;
			    VAR47 = VAR97;
			}
#endif
			break;
		    case VAR76:
#ifdef VAR72
			if (FUN10())
			{
			    VAR48 = VAR51;
			    VAR47 = VAR98;
			}
#endif
			break;
		    }
		    break;
		}
	    }
	    else
	    {
		switch (VAR2->VAR27) {
		case VAR69:
		switch (VAR4->VAR27) {
		case VAR69:
		case VAR83:
#ifdef VAR72
			if (FUN10())
			    VAR47 = VAR99;
			else
#endif
		    VAR47 = VAR100;
		    break;
		case VAR80:
		    VAR47 = VAR101;
		    break;
		case VAR76:
		    VAR47 = VAR102;
		    break;
		}
		break;
		case VAR83:
		    switch (VAR4->VAR27) {
		    case VAR69:
		    case VAR83:
#ifdef VAR72
			if (FUN10())
			    VAR47 = VAR73;
#endif
			break;
		    }
		case VAR85:
		    switch (VAR4->VAR27) {
	    case VAR84:
	    case VAR85:
#ifdef VAR72
			if (FUN10())
			    VAR47 = VAR73;
#endif
			break;
		    }
		    break;
		case VAR84:
		switch (VAR4->VAR27) {
		case VAR84:
		case VAR85:
#ifdef VAR72
			if (FUN10())
			    VAR47 = VAR99;
			else
#endif
		    VAR47 = VAR100;
		    break;
		case VAR81:
		    VAR47 = VAR101;
		    break;
		case VAR77:
		    VAR47 = VAR102;
		    break;
		}
		break;
	    case VAR76:
		switch (VAR4->VAR27) {
		case VAR76:
		    VAR47 = VAR103;
		    break;
		}
		break;
	    case VAR77:
		switch (VAR4->VAR27) {
		case VAR77:
		    VAR47 = VAR103;
		    break;
		}
		break;
	    }
	}
	}
	break;
    case VAR104:
	if (VAR3 == 0)
	{
	    switch (VAR2->VAR27) {
	    case VAR69:
		switch (VAR4->VAR27) {
		case VAR69:
#ifdef VAR72
		    if (FUN10())
			VAR47 = VAR105;
		    else
#endif
		    VAR47 = VAR106;
		    break;
		}
		break;
	    case VAR84:
		switch (VAR4->VAR27) {
		case VAR84:
#ifdef VAR72
		    if (FUN10())
			VAR47 = VAR105;
		    else
#endif
		    VAR47 = VAR106;
		    break;
		}
		break;
	    case VAR75:
		switch (VAR4->VAR27) {
		case VAR75:
#ifdef VAR72
		    if (FUN10())
			VAR47 = VAR107;
		    else
#endif
		    VAR47 = VAR108;
		    break;
		}
		break;
	    case VAR92:
		switch (VAR4->VAR27) {
		case VAR92:
		    VAR47 = VAR109;
		    break;
		}
		break;
	    }
	}
	break;
    }

    if (!VAR47) {
        
        FUN11(VAR1, VAR2, VAR3, VAR4, VAR5, VAR6, VAR7, VAR8, VAR9, VAR10, VAR11, VAR12);
        
        VAR4->VAR28->VAR29 = VAR65;
        VAR4->VAR27 = VAR66;
        return;
    }

    if (!FUN12 (&VAR44,
 				   VAR2,
 				   VAR3,
 				   VAR4,
 				   VAR5,
 				   VAR6,
 				   VAR7,
 				   VAR8,
 				   VAR9,
 				   VAR10,
 				   VAR11,
                                   VAR12))
        return;

    VAR45 = FUN13 (&VAR44);
    VAR46 = FUN14 (&VAR44);
    while (VAR45--)
    {
	VAR62 = VAR46->VAR110 - VAR46->VAR111;
	VAR59 = VAR46->VAR111 - VAR10 + VAR6;
	VAR57 = VAR46->VAR111 - VAR10 + VAR8;
	VAR61 = VAR46->VAR111;
	while (VAR62)
	{
	    VAR64 = VAR62;
	    VAR26 = VAR46->VAR112 - VAR46->VAR113;
	    VAR58 = VAR46->VAR113 - VAR9 + VAR5;
	    VAR56 = VAR46->VAR113 - VAR9 + VAR7;
	    VAR60 = VAR46->VAR113;
	    if (VAR50)
	    {
		VAR57 = FUN15 (VAR57, VAR3->VAR28->VAR12);
		if (VAR64 > VAR3->VAR28->VAR12 - VAR57)
		    VAR64 = VAR3->VAR28->VAR12 - VAR57;
	    }
	    if (VAR48)
	    {
		VAR59 = FUN15 (VAR59, VAR2->VAR28->VAR12);
		if (VAR64 > VAR2->VAR28->VAR12 - VAR59)
		    VAR64 = VAR2->VAR28->VAR12 - VAR59;
	    }
	    while (VAR26)
	    {
		VAR63 = VAR26;
		if (VAR50)
		{
		    VAR56 = FUN15 (VAR56, VAR3->VAR28->VAR11);
		    if (VAR63 > VAR3->VAR28->VAR11 - VAR56)
			VAR63 = VAR3->VAR28->VAR11 - VAR56;
		}
		if (VAR48)
		{
		    VAR58 = FUN15 (VAR58, VAR2->VAR28->VAR11);
		    if (VAR63 > VAR2->VAR28->VAR11 - VAR58)
			VAR63 = VAR2->VAR28->VAR11 - VAR58;
		}
		(*VAR47) (VAR1, VAR2, VAR3, VAR4,
			 VAR58, VAR59, VAR56, VAR57, VAR60, VAR61,
			 VAR63, VAR64);
		VAR26 -= VAR63;
		VAR58 += VAR63;
		VAR56 += VAR63;
		VAR60 += VAR63;
	    }
	    VAR62 -= VAR64;
	    VAR59 += VAR64;
	    VAR57 += VAR64;
	    VAR61 += VAR64;
	}
	VAR46++;
    }
    FUN16 (VAR4->VAR28->VAR33, &VAR44);

    
    VAR4->VAR28->VAR29 = VAR65;
    VAR4->VAR27 = VAR66;
}
FUN1 (VAR1 *VAR2, NMDeviceCapabilities VAR3)
 {
{
	static guint32 VAR4 = 0;
	VAR5 *VAR6;

	FUN2 (FUN3 (VAR2));

	VAR6 = FUN4 (VAR2);
	FUN2 (VAR6->VAR7 == NULL);

	VAR6->VAR7 = FUN5 ("", VAR4++);
	FUN6 (VAR8, "", VAR6->VAR7);
	FUN7 (FUN8 (), VAR6->VAR7, VAR2);
}

const char *
FUN9 (VAR1 *VAR2)
{
	FUN10 (VAR2 != NULL, NULL);

	return FUN4 (VAR2)->VAR7;
}

const char *
FUN11 (VAR1 *VAR2)
{
	FUN10 (VAR2 != NULL, NULL);

	return FUN4 (VAR2)->VAR9;
}

const char *
FUN12 (VAR1 *VAR2)
{
	FUN10 (FUN3 (VAR2), 0);

	return FUN4 (VAR2)->VAR10;
}

int
FUN13 (VAR1 *VAR2)
{
	FUN10 (VAR2 != NULL, 0);

	return FUN4 (VAR2)->VAR11;
}

VAR12
FUN14 (VAR1 *VAR2)
{
	VAR5 *VAR6 = FUN4 (VAR2);

	return VAR6->VAR13;
}

const char *
FUN15 (VAR1 *VAR2)
{
	VAR5 *VAR6;

	FUN10 (VAR2 != NULL, NULL);

	VAR6 = FUN4 (VAR2);
	
	return VAR6->VAR14 ? VAR6->VAR14 : VAR6->VAR10;
}

int
FUN16 (VAR1 *VAR2)
{
	VAR5 *VAR6;

	FUN10 (VAR2 != NULL, 0);

	VAR6 = FUN4 (VAR2);
	
	return VAR6->VAR14 ? VAR6->VAR15 : VAR6->VAR11;
}

void
FUN17 (VAR1 *VAR2, const char *VAR10)
{
	VAR5 *VAR6;
	char *VAR16;

	FUN2 (FUN3 (VAR2));

	VAR6 = FUN4 (VAR2);
	if (!FUN18 (VAR10, VAR6->VAR14))
		return;

	VAR16 = VAR6->VAR14;
	VAR6->VAR15 = 0;

	VAR6->VAR14 = FUN19 (VAR10);
	if (VAR6->VAR14) {
		VAR6->VAR15 = FUN20 (VAR6->VAR14);
		if (VAR6->VAR15 > 0) {
			if (FUN21 ())
				FUN22 (VAR6->VAR15, VAR17);

			if (!FUN23 (VAR6->VAR15))
				FUN24 (VAR6->VAR15);
		} else {
			
			FUN25 (VAR18, "");
		}
	}

	
	FUN26 (VAR6->VAR19);

	
	if (FUN18 (VAR16, VAR6->VAR14))
		FUN27 (FUN28 (VAR2), VAR20);
	FUN29 (VAR16);
}

static VAR12
FUN30 (VAR1 *VAR2, VAR21 *VAR22)
{
	NMLinkType VAR23;
	const VAR24 *VAR25 = NULL;
	size_t VAR26 = 0;
	int VAR11;
	gboolean VAR27;

	
	VAR11 = FUN16 (VAR2);
	FUN31 (VAR11);

	VAR23 = FUN32 (VAR11);
	FUN10 (VAR23 > VAR28, 0);

	VAR25 = FUN33 (VAR11, &VAR26);
	if (!VAR26)
		return VAR29;

	VAR27 = FUN34 (VAR23,
	                                                  VAR25,
	                                                  VAR26,
	                                                  VAR22);
	if (!VAR27) {
		FUN25 (VAR18, ""
		       "", VAR23, VAR26);
	}
	return VAR27;
}

static VAR12
FUN35 (VAR1 *VAR2, VAR21 *VAR30)
{
	return FUN36 (VAR2)->FUN30 (VAR2, VAR30);
}

const char *
FUN37 (VAR1 *VAR2)
{
	FUN10 (VAR2 != NULL, NULL);

	return FUN4 (VAR2)->VAR31;
}

const char *
FUN38 (VAR1 *VAR2)
{
	FUN10 (VAR2 != NULL, NULL);

	return FUN4 (VAR2)->VAR32;
}

VAR33
FUN39 (VAR1 *VAR2)
{
	FUN10 (FUN3 (VAR2), VAR34);

	return FUN4 (VAR2)->VAR35;
}



int
FUN40 (VAR1 *VAR2)
{
	FUN10 (FUN3 (VAR2), 1000);

	

	switch (FUN39 (VAR2)) {
	
	case VAR36:
		return 100;
	case VAR37:
		return 150;
	case VAR38:
		return 200;
	case VAR39:
		return 250;
	case VAR40:
		return 300;
	case VAR41:
		return 350;
	case VAR42:
		return 400;
	case VAR43:
		return 425;
	case VAR44:
		return 450;
	case VAR45:
		return 550;
	case VAR46:
		return 600;
	case VAR47:
		return 650;
	case VAR48:
		return 950;
	case VAR34:
		return 10000;
	case VAR49:
	case VAR50:
		
		break;
	}
	return 11000;
}

VAR51
FUN41 (VAR1 *VAR2)
{
	VAR52 *VAR53;
	gint64 VAR54 = -1;

	FUN10 (FUN3 (VAR2), VAR55);

	VAR53 = FUN42 (VAR2);

	if (VAR53)
		VAR54 = FUN43 (FUN44 (VAR53));

	return VAR54 >= 0 ? VAR54 : FUN40 (VAR2);
}

VAR51
FUN45 (VAR1 *VAR2)
{
	VAR52 *VAR53;
	gint64 VAR54 = -1;

	FUN10 (FUN3 (VAR2), VAR55);

	VAR53 = FUN42 (VAR2);

	if (VAR53)
		VAR54 = FUN43 (FUN46 (VAR53));

	return VAR54 >= 0 ? VAR54 : FUN40 (VAR2);
}

const VAR56 *
FUN47 (VAR1 *VAR2, VAR12 *VAR57)
{
	VAR5 *VAR6;

	FUN10 (FUN3 (VAR2), NULL);

	VAR6 = FUN4 (VAR2);

	if (VAR57)
		*VAR57 = VAR6->VAR58.VAR59;

	return VAR6->VAR58.VAR60 ? &VAR6->VAR58.VAR61 : NULL;
}

const VAR62 *
FUN48 (VAR1 *VAR2, VAR12 *VAR57)
{
	VAR5 *VAR6;

	FUN10 (FUN3 (VAR2), NULL);

	VAR6 = FUN4 (VAR2);

	if (VAR57)
		*VAR57 = VAR6->VAR58.VAR63;

	return VAR6->VAR58.VAR64 ? &VAR6->VAR58.VAR65 : NULL;
}

const char *
FUN49 (VAR1 *VAR2)
{
	FUN10 (VAR2 != NULL, NULL);

	return FUN4 (VAR2)->VAR66;
}

VAR12
FUN50 (VAR1 *VAR2)
{
	return FUN4 (VAR2)->VAR67;
}

VAR68 *
FUN51 (VAR1 *VAR2)
{
	FUN10 (VAR2 != NULL, NULL);

	return FUN4 (VAR2)->VAR69;
}

VAR52 *
FUN42 (VAR1 *VAR2)
{
	VAR5 *VAR6 = FUN4 (VAR2);

	return VAR6->VAR69 ? FUN52 (VAR6->VAR69) : NULL;
}

VAR70
FUN53 (VAR1 *VAR2)
{
	FUN10 (FUN3 (VAR2), VAR29);

	return FUN4 (VAR2)->VAR71;
}

static const char *
FUN54 (VAR1 *VAR2)
{
	return FUN4 (VAR2)->VAR72;
}



static VAR12
FUN55 (VAR1 *VAR2)
{
	VAR5 *VAR6 = FUN4 (VAR2);
	VAR52 *VAR53;

	if (   VAR6->VAR69
	    && FUN56 (FUN57 (VAR6->VAR69))) {
		VAR53 = FUN52 (VAR6->VAR69);
		if (   VAR53
		    && FUN58 (FUN59 (VAR53)))
			return VAR17;
	}
	return VAR29;
}

VAR12
FUN60 (VAR1 *VAR2)
{
	VAR5 *VAR6 = FUN4 (VAR2);

	if (   VAR6->VAR69
	    && FUN56 (FUN57 (VAR6->VAR69)))
		return VAR17;
	return VAR29;
}

static VAR73 *
FUN61 (VAR1 *VAR2, VAR1 *VAR74)
{
	VAR5 *VAR6 = FUN4 (VAR2);
	VAR73 *VAR75;
	VAR76 *VAR77;

	for (VAR77 = VAR6->VAR78; VAR77; VAR77 = FUN62 (VAR77)) {
		VAR75 = VAR77->VAR79;
		if (VAR75->VAR74 == VAR74)
			return VAR75;
	}
	return NULL;
}

static void
FUN63 (VAR73 *VAR75)
{
	FUN64 (VAR75->VAR74, VAR75->VAR80);
	FUN65 (&VAR75->VAR74);
	memset (VAR75, 0, sizeof (*VAR75));
	FUN29 (VAR75);
}


static VAR12
FUN66 (VAR1 *VAR2, VAR1 *VAR74, VAR52 *VAR53)
{
	VAR73 *VAR75;
	gboolean VAR27 = VAR29;
	gboolean VAR81;

	FUN10 (VAR2 != NULL, VAR29);
	FUN10 (VAR74 != NULL, VAR29);
	FUN10 (FUN36 (VAR2)->VAR82 != NULL, VAR29);

	VAR75 = FUN61 (VAR2, VAR74);
	if (!VAR75)
		return VAR29;

	if (VAR75->VAR83)
		VAR27 = VAR17;
	else {
		VAR81 = (VAR75->VAR81 && VAR53 != NULL);
		if (VAR81)
			FUN10 (FUN67 (VAR74) >= VAR84, VAR29);

		VAR27 = FUN36 (VAR2)->FUN68 (VAR2, VAR74, VAR53, VAR81);
		VAR75->VAR83 = VAR27;
	}

	FUN69 (VAR75->VAR74, VAR27);

	
	FUN70 (VAR2);

	
	if (VAR27) {
		if (FUN4 (VAR2)->VAR85 == VAR86)
			FUN71 (VAR2);

		if (FUN4 (VAR2)->VAR87 == VAR86)
			FUN72 (VAR2);
	}

	return VAR27;
}


static VAR12
FUN73 (VAR1 *VAR2, VAR1 *VAR74, gboolean VAR81, NMDeviceStateReason VAR88)
{
	VAR5 *VAR6 = FUN4 (VAR2);
	VAR73 *VAR75;
	gboolean VAR27 = VAR29;

	FUN10 (VAR74 != NULL, VAR29);
	FUN10 (FUN36 (VAR2)->VAR89 != NULL, VAR29);

	VAR75 = FUN61 (VAR2, VAR74);
	if (!VAR75)
		return VAR29;
	VAR6->VAR78 = FUN74 (VAR6->VAR78, VAR75);

	if (VAR75->VAR83) {
		VAR27 = FUN36 (VAR2)->FUN75 (VAR2, VAR74, VAR81);
		
	}

	if (!VAR81) {
		FUN76 (VAR88 == VAR90 || VAR88 == VAR91);
		VAR88 = VAR90;
	} else if (VAR88 == VAR90) {
		FUN77 ();
		VAR88 = VAR92;
	}
	FUN78 (VAR75->VAR74, VAR88);

	FUN63 (VAR75);

	
	FUN70 (VAR2);

	return VAR27;
}

static VAR12
FUN79 (VAR1 *VAR2)
{
	return   FUN14 (VAR2)
	      && !FUN80 (VAR2);
}


void
FUN81 (VAR1 *VAR2)
{
	VAR5 *VAR6 = FUN4 (VAR2);

	FUN31 (VAR6->VAR93 == VAR29);

	
	if (   FUN79 (VAR2)
	    && !FUN23 (VAR6->VAR11)
	    && VAR6->VAR11 > 0)
		FUN82 (VAR2, VAR94, VAR17);

	if (VAR6->VAR95)
		FUN66 (VAR6->VAR95, VAR2, NULL);

	VAR6->VAR93 = VAR17;
}

static void
FUN83 (VAR1 *VAR2, gboolean VAR67)
{
	VAR5 *VAR6 = FUN4 (VAR2);

	if (!FUN84 (VAR2))
		return;

	FUN85 (VAR2);

	
	if (VAR6->VAR96 && !VAR67)
		return;

	if (VAR6->VAR97) {
		
		if (!VAR67)
			return;

		if (FUN86 (VAR2))
			FUN71 (VAR2);
		if (FUN87 (VAR2))
			FUN72 (VAR2);

		return;
	} else if (FUN88 (VAR2) && !VAR67) {
		
		return;
	}

	if (VAR67) {
		FUN76 (VAR6->VAR98 >= VAR99);

		if (VAR6->VAR98 == VAR99) {
			FUN89 (VAR2, VAR84,
			                       VAR100);
		} else if (VAR6->VAR98 == VAR84) {
			
			FUN90 (VAR2);
		}
	} else {
		FUN2 (VAR6->VAR98 >= VAR99);

		if (VAR6->VAR98 == VAR99) {
			if (FUN91 (VAR2) >= VAR84)
				FUN92 (VAR2);
		} else {
			FUN89 (VAR2, VAR99,
			                       VAR100);
		}
	}
}

#define LINK_DISCONNECT_DELAY 4

static VAR12
FUN93 (gpointer VAR101)
{
	VAR1 *VAR2 = FUN94 (VAR101);
	VAR5 *VAR6 = FUN4 (VAR2);

	FUN95 (VAR8, "", VAR6->VAR102);

	VAR6->VAR102 = 0;

	FUN6 (VAR8, "");

	FUN36 (VAR2)->FUN83 (VAR2, VAR29);

	return VAR29;
}

static void
FUN96 (VAR1 *VAR2)
{
	VAR5 *VAR6 = FUN4 (VAR2);

	if (VAR6->VAR102) {
		FUN97 (VAR6->VAR102);
		FUN95 (VAR8, "", VAR6->VAR102);
		VAR6->VAR102 = 0;
	}
}

void
FUN98 (VAR1 *VAR2, gboolean VAR67)
{
	VAR5 *VAR6 = FUN4 (VAR2);
	VAR103 *VAR104 = FUN36 (VAR2);
	NMDeviceState VAR98 = FUN67 (VAR2);

	if (VAR6->VAR67 == VAR67)
		return;

	VAR6->VAR67 = VAR67;
	FUN27 (FUN28 (VAR2), VAR105);

	if (VAR6->VAR67) {
		FUN6 (VAR8, "");
		FUN96 (VAR2);
		VAR104->FUN83 (VAR2, VAR17);

		if (VAR6->VAR106) {
			FUN97 (VAR6->VAR106);
			VAR6->VAR106 = 0;
			FUN99 (VAR2, "", VAR17);
			FUN100 (VAR2);
		}
	} else if (VAR98 <= VAR84) {
		FUN6 (VAR8, "");
		VAR104->FUN83 (VAR2, VAR29);
	} else {
		FUN6 (VAR8, "", VAR107);
		VAR6->VAR102 = FUN101 (VAR107,
		                                                VAR108, VAR2);
		FUN95 (VAR8, "",
		       VAR107, VAR6->VAR102);
	}
}

static void
FUN102 (VAR1 *VAR2)
{
	VAR5 *VAR6 = FUN4 (VAR2);

	FUN26 (VAR6->VAR19);

	if (VAR6->VAR109) {
		if (!FUN103 (VAR2, VAR29)) {
			FUN104 (VAR2,
			                         VAR110,
			                         VAR111);
			return;
		}
	}
	if (VAR6->VAR112) {
		if (!FUN105 (VAR2, VAR29)) {
			FUN104 (VAR2,
			                         VAR110,
			                         VAR111);
			return;
		}
	}
	if (VAR6->VAR113) {
		
	}
	if (VAR6->VAR114) {
		
	}
}

static void
FUN106 (VAR1 *VAR2, int VAR11)
{
	VAR1 *VAR95;
	VAR5 *VAR6 = FUN4 (VAR2);

	VAR95 = FUN107 (FUN108 (), VAR11);
	if (VAR95 && FUN36 (VAR95)->VAR82) {
		FUN65 (&VAR6->VAR95);
		VAR6->VAR95 = FUN109 (VAR95);
		FUN110 (VAR95, VAR2, VAR29);
	} else if (VAR95) {
		FUN6 (VAR8, "",
		       FUN12 (VAR95));
	} else {
		FUN25 (VAR8, "",
		       VAR11,
		       FUN111 (VAR11));
	}
}

static void
FUN112 (VAR1 *VAR2, VAR115 *VAR75)
{
	VAR103 *VAR104 = FUN36 (VAR2);
	VAR5 *VAR6 = FUN4 (VAR2);
	NMUtilsIPv6IfaceId VAR116;
	gboolean VAR117 = VAR29;

	if (VAR75->VAR9 && FUN18 (VAR75->VAR9, VAR6->VAR9)) {
		
		FUN29 (VAR6->VAR9);
		VAR6->VAR9 = FUN19 (VAR75->VAR9);
		FUN27 (FUN28 (VAR2), VAR118);
	}

	
	if (VAR6->VAR119 != VAR75->VAR119) {
		VAR6->VAR119 = VAR75->VAR119;
		FUN27 (FUN28 (VAR2), VAR120);
	}

	if (VAR75->VAR121[0] && strcmp (VAR6->VAR10, VAR75->VAR121) != 0) {
		FUN6 (VAR8, "",
		       VAR6->VAR11, VAR6->VAR10, VAR75->VAR121);
		FUN29 (VAR6->VAR10);
		VAR6->VAR10 = FUN19 (VAR75->VAR121);

		
		VAR117 = !VAR6->VAR14;

		FUN27 (FUN28 (VAR2), VAR122);
		if (VAR117)
			FUN27 (FUN28 (VAR2), VAR20);

		
		FUN85 (VAR2);

		
		FUN90 (VAR2);
	}

	
	if (VAR6->VAR83 && VAR75->VAR95 != FUN13 (VAR6->VAR95))
		FUN73 (VAR6->VAR95, VAR2, VAR29, VAR90);
	if (VAR75->VAR95 && !VAR6->VAR83) {
		FUN106 (VAR2, VAR75->VAR95);
		if (VAR6->VAR95)
			FUN66 (VAR6->VAR95, VAR2, NULL);
	}

	if (VAR6->VAR113 && FUN113 (VAR6->VAR11, &VAR116)) {
		FUN95 (VAR8, "", VAR6->VAR10);
		if (FUN114 (VAR6->VAR113, VAR116))
			FUN115 (VAR6->VAR113);
	}

	if (VAR104->VAR123)
		VAR104->FUN116 (VAR2, VAR75);

	
	if (VAR117)
		FUN102 (VAR2);

	if (VAR6->VAR124 != VAR75->VAR124) {
		VAR6->VAR124 = VAR75->VAR124;

		
		FUN31 (VAR6->VAR11 > 0);
		if (FUN79 (VAR2)) {
			gboolean VAR125 = FUN117 (VAR2, VAR94);

			if (VAR125 && VAR75->VAR124) {
				if (FUN67 (VAR2) < VAR84) {
					
					FUN118 (VAR2);

					
					FUN119 (VAR2,
					                         VAR94,
					                         VAR29,
					                         VAR126);
				} else {
					
					VAR6->VAR127 &= ~VAR94;
				}
			} else if (!VAR125 && !VAR75->VAR124 && FUN67 (VAR2) <= VAR84) {
				
				FUN119 (VAR2,
				                         VAR94,
				                         VAR17,
				                         VAR128);
			}
		}
	}
}

static void
FUN120 (VAR1 *VAR2, VAR115 *VAR75)
{
	VAR5 *VAR6 = FUN4 (VAR2);

	if (VAR75->VAR121[0] && FUN18 (VAR6->VAR14, VAR75->VAR121)) {
		FUN6 (VAR8, "",
		       VAR6->VAR11, FUN16 (VAR2),
		       VAR6->VAR14, VAR75->VAR121);
		FUN29 (VAR6->VAR14);
		VAR6->VAR14 = FUN19 (VAR75->VAR121);

		FUN27 (FUN28 (VAR2), VAR20);
		FUN102 (VAR2);
	}
}

static void
FUN121 (VAR129 *VAR130,
                 int VAR11,
                 VAR115 *VAR75,
                 NMPlatformSignalChangeType VAR131,
                 NMPlatformReason VAR88,
                 VAR1 *VAR2)
{
	if (VAR131 != VAR132)
		return;

	

	if (VAR11 == FUN13 (VAR2))
		FUN112 (VAR2, VAR75);
	else if (VAR11 == FUN16 (VAR2))
		FUN120 (VAR2, VAR75);
}

static void
FUN116 (VAR1 *VAR2, VAR115 *VAR75)
{
	
	if (   FUN1 (VAR2, VAR133)
	    && !FUN1 (VAR2, VAR134))
		FUN98 (VAR2, VAR75->VAR135);
}


VAR12
FUN122 (VAR1 *VAR2, VAR136 *VAR137)
{
	if (FUN36 (VAR2)->VAR138)
		return FUN36 (VAR2)->FUN123 (VAR2, VAR137);
	return VAR29;
}


VAR12
FUN124 (VAR1 *VAR2, const char *VAR10)
{
	if (FUN36 (VAR2)->VAR139)
		return FUN36 (VAR2)->FUN125 (VAR2, VAR10);
	return VAR29;
}

VAR52 *
FUN126 (VAR1 *VAR2)
{
	if (FUN36 (VAR2)->VAR140)
		return FUN36 (VAR2)->FUN127 (VAR2);
	return NULL;
}

static void
FUN128 (VAR1 *VAR74,
                     NMDeviceState VAR141,
                     NMDeviceState VAR142,
                     NMDeviceStateReason VAR88,
                     VAR1 *VAR2)
{
	VAR5 *VAR6 = FUN4 (VAR2);
	gboolean VAR143 = VAR29;

	FUN95 (VAR8, "",
	       FUN12 (VAR74),
	       VAR142,
	       FUN129 (VAR142),
	       VAR141,
	       FUN129 (VAR141));

	
	if (VAR6->VAR98 < VAR144)
		return;

	if (VAR141 == VAR145)
		FUN66 (VAR2, VAR74, FUN42 (VAR74));
	else if (VAR141 > VAR146)
		VAR143 = VAR17;
	else if (   VAR141 <= VAR84
	         && VAR142 > VAR84) {
		
		VAR143 = VAR17;
	}

	if (VAR143) {
		FUN73 (VAR2, VAR74, VAR17, VAR88);
		
		if (VAR6->VAR78 == NULL && VAR6->VAR98 == VAR146)
			FUN95 (VAR8, "");
	}
}


static VAR12
FUN110 (VAR1 *VAR2, VAR1 *VAR74, gboolean VAR81)
{
	VAR5 *VAR6 = FUN4 (VAR2);
	VAR73 *VAR75;

	FUN10 (VAR2 != NULL, VAR29);
	FUN10 (VAR74 != NULL, VAR29);
	FUN10 (FUN36 (VAR2)->VAR82 != NULL, VAR29);

	if (VAR81)
		FUN10 (FUN67 (VAR74) >= VAR84, VAR29);

	if (!FUN61 (VAR2, VAR74)) {
		VAR75 = FUN130 (sizeof (VAR73));
		VAR75->VAR74 = FUN109 (VAR74);
		VAR75->VAR81 = VAR81;
		VAR75->VAR80 = FUN131 (VAR74, "",
		                                   FUN132 (VAR147), VAR2);
		VAR6->VAR78 = FUN133 (VAR6->VAR78, VAR75);
	}
	FUN118 (VAR2);

	return VAR17;
}



VAR76 *
FUN134 (VAR1 *VAR2)
{
	VAR5 *VAR6 = FUN4 (VAR2);
	VAR76 *VAR78 = NULL, *VAR77;

	for (VAR77 = VAR6->VAR78; VAR77; VAR77 = FUN62 (VAR77))
		VAR78 = FUN135 (VAR78, ((VAR73 *) VAR77->VAR79)->VAR74);

	return VAR78;
}


VAR1 *
FUN136 (VAR1 *VAR2, int VAR11)
{
	VAR76 *VAR77;

	for (VAR77 = FUN4 (VAR2)->VAR78; VAR77; VAR77 = FUN62 (VAR77)) {
		VAR73 *VAR75 = VAR77->VAR79;

		if (FUN16 (VAR75->VAR74) == VAR11)
			return VAR75->VAR74;
	}
	return NULL;
}


void
FUN137 (VAR1 *VAR2, VAR1 *VAR74,
                                            guint64 VAR148)
{
	VAR5 *VAR6 = FUN4 (VAR2);
	const char *VAR149, *VAR150;
	VAR73 *VAR75;
	VAR76 *VAR77;

	VAR149 = FUN54 (VAR74);
	if (!VAR149)
		return;

	for (VAR77 = VAR6->VAR78; VAR77; VAR77 = VAR77->VAR151) {
		VAR75 = VAR77->VAR79;
		if (VAR75->VAR74 == VAR74)
			continue;

		VAR150 = FUN54 (VAR75->VAR74);
		if (!FUN18 (VAR149, VAR150)) {
			FUN25 (VAR148, "",
			       FUN15 (VAR74),
			       FUN15 (VAR75->VAR74));
			
			return;
		}
	}
}


static void
FUN138 (VAR1 *VAR2)
{
	VAR5 *VAR6 = FUN4 (VAR2);
	NMDeviceStateReason VAR88;

	
	if (FUN55 (VAR2))
		return;

	VAR88 = VAR6->VAR152;
	if (VAR6->VAR98 == VAR110)
		VAR88 = VAR153;

	while (VAR6->VAR78) {
		VAR73 *VAR75 = VAR6->VAR78->VAR79;

		FUN73 (VAR2, VAR75->VAR74, VAR17, VAR88);
	}
}


VAR1 *
FUN139 (VAR1 *VAR2)
{
	VAR5 *VAR6 = FUN4 (VAR2);

	if (VAR6->VAR83)
		return VAR6->VAR95;
	else
		return NULL;
}


static void
FUN69 (VAR1 *VAR2, gboolean VAR27)
{
	VAR5 *VAR6 = FUN4 (VAR2);
	VAR52 *VAR53 = FUN42 (VAR2);
	gboolean VAR154 = (VAR6->VAR98 == VAR145);

	FUN31 (VAR6->VAR95);

	if (!VAR6->VAR83) {
		if (VAR27) {
			if (VAR154) {
				FUN6 (VAR8, "",
				       FUN140 (VAR53));
			} else
				FUN6 (VAR8, "", FUN12 (VAR6->VAR95));

			VAR6->VAR83 = VAR17;
			FUN27 (FUN28 (VAR2), VAR155);
		} else if (VAR154) {
			FUN25 (VAR8, "",
			       FUN140 (VAR53));
		}
	}

	if (VAR154) {
		VAR6->VAR85 = VAR156;
		VAR6->VAR87 = VAR156;
		FUN89 (VAR2,
		                       VAR27 ? VAR157 : VAR110,
		                       VAR90);
	} else
		FUN118 (VAR2);
}


static void
FUN78 (VAR1 *VAR2, NMDeviceStateReason VAR88)
{
	VAR5 *VAR6 = FUN4 (VAR2);
	VAR52 *VAR53 = FUN42 (VAR2);
	NMDeviceState VAR158;
	const char *VAR159;

	if (   VAR88 != VAR90
	    && VAR6->VAR98 > VAR84
	    && VAR6->VAR98 <= VAR146) {
		if (VAR88 == VAR153) {
			VAR158 = VAR110;
			VAR159 = "";
		} else if (VAR88 == VAR128) {
			VAR158 = VAR160;
			VAR159 = "";
		} else {
			VAR158 = VAR84;
			VAR159 = "";
		}

		FUN95 (VAR8, "",
		       FUN140 (VAR53),
		       VAR159);

		FUN89 (VAR2, VAR158, VAR88);
	} else if (VAR6->VAR95)
		FUN6 (VAR8, "", FUN12 (VAR6->VAR95));
	else
		FUN95 (VAR8, "", VAR6->VAR83 ? "" : "");

	if (VAR6->VAR83) {
		VAR6->VAR83 = VAR29;
		FUN27 (FUN28 (VAR2), VAR155);
	}
}


VAR12
FUN88 (VAR1 *VAR2)
{
	return FUN4 (VAR2)->VAR83;
}


void
FUN141 (VAR1 *VAR2)
{
	VAR5 *VAR6 = FUN4 (VAR2);

	if (VAR6->VAR83)
		FUN73 (VAR6->VAR95, VAR2, VAR29, VAR91);
}


static VAR12
FUN142 (VAR1 *VAR2, NMDeviceCheckDevAvailableFlags VAR161)
{
	VAR5 *VAR6 = FUN4 (VAR2);

	if (VAR6->VAR67 || VAR6->VAR96)
		return VAR17;

	if (FUN143 (VAR161, VAR162))
		return VAR17;

	return VAR29;
}


VAR12
FUN144 (VAR1 *VAR2, NMDeviceCheckDevAvailableFlags VAR161)
{
	VAR5 *VAR6 = FUN4 (VAR2);

	if (VAR6->VAR163)
		return VAR29;

	return FUN36 (VAR2)->FUN142 (VAR2, VAR161);
}

VAR12
FUN145 (VAR1 *VAR2)
{
	FUN10 (FUN3 (VAR2), VAR29);

	if (FUN36 (VAR2)->VAR164)
		return FUN36 (VAR2)->FUN146 (VAR2);
	return VAR17;
}

void
FUN147 (VAR1 *VAR2, gboolean VAR165)
{
	FUN2 (FUN3 (VAR2));

	if (FUN36 (VAR2)->VAR166)
		FUN36 (VAR2)->FUN148 (VAR2, VAR165);
}


VAR12
FUN149 (VAR1 *VAR2)
{
	FUN10 (FUN3 (VAR2), VAR29);

	return FUN4 (VAR2)->VAR167;
}

static void
FUN150 (VAR1 *VAR2, gboolean VAR167)
{
	VAR5 *VAR6;

	FUN2 (FUN3 (VAR2));

	VAR6 = FUN4 (VAR2);
	if (VAR6->VAR167 == VAR167)
		return;

	if (VAR167) {
		
		if (!FUN151 (VAR2)) {
			VAR6->VAR167 = VAR17;
			FUN27 (FUN28 (VAR2), VAR168);
		}
	} else {
		VAR6->VAR167 = VAR29;
		FUN27 (FUN28 (VAR2), VAR168);
	}
}

static VAR12
FUN152 (VAR169 *VAR170,
                                 VAR171 *VAR172,
                                 const VAR171 *VAR173, gpointer VAR79)
{
	if (!FUN153 (VAR173))
		FUN154 (VAR172, VAR29);
	return VAR17;
}


VAR12
FUN155 (VAR1 *VAR2)
{
	VAR5 *VAR6 = FUN4 (VAR2);
	GValue VAR174 = VAR175;
	GValue VAR176 = VAR175;

	if (VAR6->VAR98 < VAR84 || !VAR6->VAR167)
		return VAR29;

	

	FUN156 (&VAR174, VAR177);
	FUN157 (&VAR174, VAR2);

	FUN156 (&VAR176, VAR178);
	if (VAR6->VAR167)
		FUN154 (&VAR176, VAR17);
	else
		FUN154 (&VAR176, VAR29);

	
	FUN158 (&VAR174, VAR179[VAR180], 0, &VAR176);
	FUN159 (&VAR174);
	return FUN153 (&VAR176);
}

static VAR12
FUN160 (VAR1 *VAR2,
                  VAR52 *VAR53,
                  char **VAR181)
{
	VAR182 *VAR183;

	VAR183 = FUN161 (VAR53);
	if (!FUN162 (VAR183))
		return VAR29;

	return FUN163 (VAR2, VAR53, VAR184, NULL);
}


VAR12
FUN164 (VAR1 *VAR2,
                            VAR52 *VAR53,
                            char **VAR181)
{
	FUN10 (FUN3 (VAR2), VAR29);
	FUN10 (FUN165 (VAR53), VAR29);
	FUN10 (VAR181 && !*VAR181, VAR29);

	if (FUN155 (VAR2))
		return FUN36 (VAR2)->FUN160 (VAR2, VAR53, VAR181);
	return VAR29;
}

static VAR12
FUN166 (VAR1 *VAR2)
{
	VAR5 *VAR6 = FUN4 (VAR2);

	
	if (VAR6->VAR185 && FUN167 (VAR6->VAR185))
		return VAR17;
	if (VAR6->VAR186 && FUN168 (VAR6->VAR186))
		return VAR17;

	
	if (FUN14 (VAR2))
		return VAR17;

	
	if (FUN169 (VAR6->VAR11) > 0)
		return VAR17;

	return VAR29;
}


VAR12
FUN170 (VAR1 *VAR2,
                                          VAR1 *VAR74,
                                          VAR52 *VAR53,
                                          VAR187 **VAR188)
{
	VAR103 *VAR104;
	gboolean VAR27;

	FUN10 (VAR2, VAR29);
	FUN10 (FUN3 (VAR2), VAR29);
	FUN10 (VAR74, VAR29);
	FUN10 (VAR53, VAR29);
	FUN10 (!VAR188 || !*VAR188, VAR29);
	FUN10 (FUN161 (VAR53), VAR29);

	FUN10 (FUN12 (VAR2), VAR29);

	VAR104 = FUN36 (VAR2);
	if (VAR104->VAR189) {
		VAR27 = VAR104->FUN171 (VAR2, VAR74, VAR53, VAR188);

		FUN10 (!VAR188 || (VAR27 && !*VAR188) || *VAR188, VAR27);
		return VAR27;
	}

	FUN172 (VAR188,
	             VAR190,
	             VAR191,
	             "",
	             FUN12 (VAR2), FUN12 (VAR74));
	return VAR29;
}

VAR52 *
FUN173 (VAR1 *VAR2, VAR1 *VAR95)
{
	VAR103 *VAR104 = FUN36 (VAR2);
	VAR5 *VAR6 = FUN4 (VAR2);
	const char *VAR192 = FUN12 (VAR2);
	VAR52 *VAR53;
	VAR193 *VAR183;
	VAR193 *VAR194;
	VAR193 *VAR195;
	gs_free char *VAR196 = NULL;
	const char *VAR197, *VAR198;
	VAR187 *VAR188 = NULL;

	
	if (!VAR104->VAR199)
		return NULL;

	
	if (!FUN166 (VAR2)) {
		FUN95 (VAR8, "");
		return NULL;
	}

	VAR53 = FUN174 ();
	VAR183 = FUN175 ();
	VAR196 = FUN176 ();

	FUN177 (VAR183,
	              VAR200, VAR196,
	              VAR201, VAR192,
	              VAR202, VAR29,
	              VAR203, VAR192,
	              VAR204, (VAR205) FUN178 (NULL),
	              NULL);
	if (VAR104->VAR206)
		FUN177 (VAR183, VAR207, VAR104->VAR206, NULL);
	FUN179 (VAR53, VAR183);

	
	if (VAR95) {
		if (!FUN170 (VAR95,
		                                               VAR2,
		                                               VAR53,
		                                               &VAR188))
		{
			FUN180 (VAR8, "",
			       FUN12 (VAR95), VAR188 ? VAR188->VAR208 : "");
			FUN181 (VAR188);
			FUN182 (VAR53);
			return NULL;
		}
	} else {
		
		VAR194 = FUN183 (VAR6->VAR185);
		FUN179 (VAR53, VAR194);

		VAR195 = FUN184 (VAR6->VAR186);
		FUN179 (VAR53, VAR195);
	}

	VAR104->FUN185 (VAR2, VAR53);

	
	if (!FUN186 (VAR53, &VAR188)) {
		FUN180 (VAR8, "", VAR188->VAR208);
		FUN187 (&VAR188);
		FUN182 (VAR53);
		return NULL;
	}

	
	VAR197 = FUN188 (VAR53, VAR209);
	VAR198 = FUN188 (VAR53, VAR210);
	if (   FUN18 (VAR197, VAR211) == 0
	    && FUN18 (VAR198, VAR212) == 0
	    && !FUN189 (FUN190 (VAR183))
	    && !VAR6->VAR78) {
		FUN95 (VAR8, "");
		FUN182 (VAR53);
		VAR53 = NULL;
	}

	return VAR53;
}

VAR12
FUN191 (VAR1 *VAR2,
                               VAR52 *VAR53,
                               const char *VAR181,
                               const VAR76 *VAR213,
                               VAR187 **VAR188)
{
	gboolean VAR27 = VAR29;

	FUN10 (VAR2 != NULL, VAR29);
	FUN10 (VAR53 != NULL, VAR29);

	if (!FUN36 (VAR2)->VAR214) {
		FUN172 (VAR188, VAR190, VAR215,
		             "",
		             FUN192 (VAR2));
		return VAR29;
	}

	VAR27 = FUN36 (VAR2)->FUN193 (VAR2,
	                                                           VAR53,
	                                                           VAR181,
	                                                           VAR213,
	                                                           VAR188);
	if (VAR27)
		VAR27 = FUN186 (VAR53, VAR188);

	return VAR27;
}

static VAR12
FUN194 (VAR1 *VAR2, VAR52 *VAR53)
{
	VAR182 *VAR183;
	const char *VAR216, *VAR217;

	VAR183 = FUN161 (VAR53);
	FUN31 (VAR183);

	VAR216 = FUN195 (VAR183);
	VAR217 = FUN12 (VAR2);
	if (VAR216 && strcmp (VAR216, VAR217) != 0)
		return VAR29;

	return VAR17;
}


VAR12
FUN196 (VAR1 *VAR2, VAR52 *VAR53)
{
	FUN10 (FUN3 (VAR2), VAR29);
	FUN10 (FUN165 (VAR53), VAR29);

	return FUN36 (VAR2)->FUN194 (VAR2, VAR53);
}


static VAR12
FUN197 (VAR1 *VAR2)
{
	return !!FUN36 (VAR2)->VAR199;
}


VAR12
FUN198 (VAR1 *VAR2)
{
	VAR5 *VAR6 = FUN4 (VAR2);
	VAR52 *VAR53;
	const char *VAR218;
	const char *VAR219[] = {
		VAR212,
		VAR220,
		VAR221,
		VAR222,
		VAR223,
		NULL
	};
	const char *VAR224[] = {
		VAR211,
		VAR220,
		VAR223,
		NULL
	};

	if (!FUN197 (VAR2))
		return VAR29;

	VAR53 = FUN42 (VAR2);
	if (!VAR53)
		return VAR29;

	
	if (VAR6->VAR98 < VAR145)
		return VAR29;
	if (VAR6->VAR85 != VAR156 && VAR6->VAR87 != VAR156)
		return VAR29;

	VAR218 = FUN188 (VAR53, VAR210);
	if (!FUN199 (VAR218, VAR219))
		return VAR29;

	VAR218 = FUN188 (VAR53, VAR209);
	if (!FUN199 (VAR218, VAR224))
		return VAR29;

	return VAR17;
}

static VAR12
FUN200 (gpointer VAR2)
{
	VAR5 *VAR6 = FUN4 (VAR2);

	VAR6->VAR225 = 0;
	if (!FUN51 (VAR2)) {
		FUN95 (VAR8, "");
		FUN201 (VAR2, VAR179[VAR226], 0);
	}
	return VAR227;
}

void
FUN118 (VAR1 *VAR2)
{
	VAR5 *VAR6 = FUN4 (VAR2);

	if (FUN197 (VAR2) && !VAR6->VAR225)
		VAR6->VAR225 = FUN202 (VAR228, VAR2);
}

void
FUN90 (VAR1 *VAR2)
{
	FUN201 (VAR2, VAR179[VAR229], 0);
}

static void
FUN203 (VAR230 *VAR231, guint32 VAR232, gpointer VAR101)
{
	VAR1 *VAR2 = FUN94 (VAR101);

	switch (VAR232) {
	case VAR233:
		FUN104 (VAR2, VAR110, VAR234);
		break;
	default:
		break;
	}
}

static void
FUN204 (VAR1 *VAR2, gboolean VAR235, int VAR236)
{
	VAR5 *VAR6 = FUN4 (VAR2);
	VAR237 *VAR238;
	VAR239 *VAR240;

	if (VAR236 == VAR241) {
		VAR238 = &VAR6->VAR242;
		VAR240 = &VAR6->VAR243;
	} else {
		VAR238 = &VAR6->VAR238;
		VAR240 = &VAR6->VAR240;
	}

	if (*VAR238) {
		if (VAR235)
			FUN97 (*VAR238);
		*VAR238 = 0;
		*VAR240 = NULL;
	}
}

static void
FUN205 (VAR1 *VAR2, GSourceFunc VAR244, int VAR236)
{
	VAR5 *VAR6 = FUN4 (VAR2);
	VAR237 *VAR238;
	VAR239 *VAR240;

	if (VAR236 == VAR241) {
		VAR238 = &VAR6->VAR242;
		VAR240 = &VAR6->VAR243;
	} else {
		VAR238 = &VAR6->VAR238;
		VAR240 = &VAR6->VAR240;
	}

	if (*VAR238)
		FUN180 (VAR8, "");

	
	if (!*VAR238 || (*VAR240 != VAR244)) {
		FUN204 (VAR2, VAR17, VAR236);
		*VAR238 = FUN202 (VAR244, VAR2);
		*VAR240 = VAR244;
	}
}

static VAR12
FUN206 (VAR1 *VAR2, int VAR236)
{
	VAR52 *VAR53;
	VAR245 *VAR246 = NULL;

	FUN10 (VAR2 != NULL, VAR17);

	VAR53 = FUN42 (VAR2);
	FUN31 (VAR53);

	
	switch (VAR236) {
	case VAR247:
		VAR246 = FUN44 (VAR53);
		break;
	case VAR241:
		VAR246 = FUN46 (VAR53);
		break;
	default:
		FUN207 ();
	}

	return FUN208 (VAR246);
}

static void
FUN209 (VAR248 *VAR249,
                 VAR250 *VAR251,
                 VAR1 *VAR2)
{
	VAR5 *VAR6 = FUN4 (VAR2);
	VAR248 *VAR95;

	FUN31 (VAR6->VAR98 == VAR252);

	
	FUN31 (FUN210 (VAR249));
	VAR95 = FUN211 (VAR249);

	VAR6->VAR95 = FUN109 (FUN212 (VAR95));
	FUN110 (VAR6->VAR95,
	                            VAR2,
	                            FUN56 (VAR249) ? VAR29 : VAR17);

	FUN95 (VAR8, "",
	       FUN12 (VAR6->VAR95));

	if (VAR6->VAR253) {
		FUN64 (VAR249, VAR6->VAR253);
		VAR6->VAR253 = 0;
	}

	FUN213 (VAR2);
}

static VAR254
FUN214 (VAR1 *VAR2, VAR255 *VAR88)
{
	return VAR256;
}


static VAR12
FUN215 (gpointer VAR101)
{
	VAR1 *VAR2 = FUN94 (VAR101);
	VAR5 *VAR6 = FUN4 (VAR2);
	NMActStageReturn VAR257 = VAR256;
	NMDeviceStateReason VAR88 = VAR90;
	VAR248 *VAR249 = FUN57 (VAR6->VAR69);

	
	FUN204 (VAR2, VAR29, 0);

	VAR6->VAR85 = VAR6->VAR87 = VAR258;

	
	FUN27 (FUN28 (VAR2), VAR259);

	FUN6 (VAR8, "");
	FUN104 (VAR2, VAR252, VAR90);

	
	if (!FUN56 (VAR249)) {
		VAR257 = FUN36 (VAR2)->FUN214 (VAR2, &VAR88);
		if (VAR257 == VAR260) {
			goto VAR261;
		} else if (VAR257 == VAR262) {
			FUN104 (VAR2, VAR110, VAR88);
			goto VAR261;
		}
		FUN31 (VAR257 == VAR256);
	}

	if (FUN211 (VAR249)) {
		
		if (FUN210 (VAR249))
			FUN209 (VAR249, NULL, VAR2);
		else {
			FUN95 (VAR8, "");

			
			FUN31 (VAR6->VAR253 == 0);
			VAR6->VAR253 = FUN131 (VAR249,
			                                          "" VAR263,
			                                          (VAR264) VAR265,
			                                          VAR2);
			
		}
	} else
		FUN213 (VAR2);

VAR261:
	FUN6 (VAR8, "");
	return VAR29;
}



void
FUN216 (VAR1 *VAR2)
{
	VAR5 *VAR6;

	FUN2 (FUN3 (VAR2));

	VAR6 = FUN4 (VAR2);
	FUN2 (VAR6->VAR69);

	FUN205 (VAR2, VAR266, 0);

	FUN6 (VAR8, "");
}

static VAR254
FUN217 (VAR1 *VAR2, VAR255 *VAR88)
{
	
	return VAR256;
}


static VAR12
FUN218 (gpointer VAR101)
{
	VAR1 *VAR2 = FUN94 (VAR101);
	VAR5 *VAR6 = FUN4 (VAR2);
	NMActStageReturn VAR257;
	NMDeviceStateReason VAR88 = VAR90;
	gboolean VAR267 = VAR29;
	VAR248 *VAR249 = FUN57 (VAR6->VAR69);
	VAR76 *VAR77;

	
	FUN204 (VAR2, VAR29, 0);

	FUN6 (VAR8, "");
	FUN104 (VAR2, VAR144, VAR90);

	
	if (!FUN56 (VAR249)) {
		if (!FUN219 (VAR2, VAR29, &VAR267)) {
			if (VAR267)
				FUN104 (VAR2, VAR110, VAR268);
			else
				FUN104 (VAR2, VAR110, VAR269);
			goto VAR261;
		}

		VAR257 = FUN36 (VAR2)->FUN217 (VAR2, &VAR88);
		if (VAR257 == VAR260)
			goto VAR261;
		else if (VAR257 == VAR262) {
			FUN104 (VAR2, VAR110, VAR88);
			goto VAR261;
		}
		FUN31 (VAR257 == VAR256);
	}

	
	for (VAR77 = VAR6->VAR78; VAR77; VAR77 = FUN62 (VAR77)) {
		VAR73 *VAR75 = VAR77->VAR79;
		NMDeviceState VAR270 = FUN67 (VAR75->VAR74);

		if (VAR270 == VAR145)
			FUN66 (VAR2, VAR75->VAR74, FUN42 (VAR75->VAR74));
		else if (   FUN55 (VAR2)
		         && VAR270 <= VAR84)
			FUN118 (VAR75->VAR74);
	}

	FUN6 (VAR8, "");

	FUN220 (VAR2);

VAR261:
	FUN6 (VAR8, "");
	return VAR29;
}



void
FUN213 (VAR1 *VAR2)
{
	VAR5 *VAR6;

	FUN2 (FUN3 (VAR2));

	VAR6 = FUN4 (VAR2);
	FUN2 (VAR6->VAR69);

	FUN205 (VAR2, VAR271, 0);

	FUN6 (VAR8, "");
}




static void
FUN221 (VAR1 *VAR2)
{
	VAR5 *VAR6 = FUN4 (VAR2);

	if (VAR6->VAR272) {
		FUN97 (VAR6->VAR272);
		VAR6->VAR272 = 0;
	}
}

static void
FUN222 (VAR1 *VAR2)
{
	VAR5 *VAR6 = FUN4 (VAR2);

	if (VAR6->VAR273) {
		FUN97 (VAR6->VAR273);
		VAR6->VAR273 = 0;
	}

	if (VAR6->VAR274 > 0) {
		FUN223 (VAR6->VAR274, VAR275, VAR276, "", NULL, 0, 0);
		VAR6->VAR274 = -1;
	}

	FUN221 (VAR2);
}

static VAR277 *
FUN224 (VAR1 *VAR2, guint32 VAR278)
{
	VAR277 *VAR279 = NULL;
	NMPlatformIP4Address VAR280;
	NMPlatformIP4Route VAR281;

	VAR279 = FUN225 (FUN16 (VAR2));
	FUN31 (VAR279);

	memset (&VAR280, 0, sizeof (VAR280));
	VAR280.VAR280 = VAR278;
	VAR280.VAR282 = 16;
	VAR280.VAR283 = VAR284;
	FUN226 (VAR279, &VAR280);

	
	memset (&VAR281, 0, sizeof (VAR281));
	VAR281.VAR285 = FUN227 (0xE0000000L);
	VAR281.VAR282 = 4;
	VAR281.VAR283 = VAR284;
	VAR281.VAR286 = FUN41 (VAR2);
	FUN228 (VAR279, &VAR281);

	return VAR279;
}

#define FUN229 (FUN227 (0xA9FE0000L))
#define FUN230 (FUN227 (0xFFFF0000L))

void
FUN231 (VAR1 *VAR2,
                                const char *VAR287,
                                const char *VAR280)
{
	VAR5 *VAR6 = FUN4 (VAR2);
	VAR52 *VAR53 = NULL;
	const char *VAR218;
	NMDeviceStateReason VAR88 = VAR90;

	FUN2 (VAR287 != NULL);

	if (VAR6->VAR69 == NULL)
		return;

	VAR53 = FUN52 (VAR6->VAR69);
	FUN31 (VAR53);

	
	VAR218 = FUN188 (VAR53, VAR209);
	if (FUN18 (VAR218, VAR288) != 0)
		return;

	if (strcmp (VAR287, "") == 0) {
		guint32 VAR278;
		VAR277 *VAR279;

		if (FUN232 (VAR247, VAR280, &VAR278) <= 0) {
			FUN180 (VAR276, "", VAR280);
			FUN104 (VAR2, VAR110, VAR289);
			return;
		}

		if ((VAR278 & VAR290) != VAR291) {
			FUN180 (VAR276, "", VAR280);
			FUN104 (VAR2, VAR110, VAR289);
			return;
		}

		VAR279 = FUN224 (VAR2, VAR278);
		if (VAR279 == NULL) {
			FUN180 (VAR276, "");
			FUN104 (VAR2, VAR110, VAR292);
			return;
		}

		if (VAR6->VAR85 == VAR293) {
			FUN221 (VAR2);
			FUN233 (VAR2, VAR279);
		} else if (VAR6->VAR85 == VAR156) {
			if (!FUN234 (VAR2, VAR279, VAR17, &VAR88)) {
				FUN180 (VAR276, "");
				FUN104 (VAR2, VAR110, VAR88);
			}
		} else
			FUN207 ();

		FUN182 (VAR279);
	} else {
		FUN25 (VAR276, "", VAR280, VAR287);

		
		FUN104 (VAR2, VAR110, VAR294);
	}
}

static void
FUN235 (GPid VAR295, gint VAR232, gpointer VAR101)
{
	VAR1 *VAR2 = FUN94 (VAR101);
	VAR5 *VAR6 = FUN4 (VAR2);
	NMDeviceState VAR98;

	if (!VAR6->VAR273)
		return;
	VAR6->VAR273 = 0;

	if (FUN236 (VAR232))
		FUN95 (VAR276, "", FUN237 (VAR232));
	else if (FUN238 (VAR232))
		FUN25 (VAR276, "", FUN239 (VAR232));
	else if (FUN240 (VAR232))
		FUN25 (VAR276, "", FUN241 (VAR232));
	else
		FUN25 (VAR276, "");

	FUN222 (VAR2);

	VAR98 = FUN67 (VAR2);
	if (FUN242 (VAR2) || (VAR98 == VAR146))
		FUN104 (VAR2, VAR110, VAR296);
}

static VAR12
FUN243 (gpointer VAR101)
{
	VAR1 *VAR2 = FUN94 (VAR101);
	VAR5 *VAR6 = FUN4 (VAR2);

	if (VAR6->VAR272) {
		FUN6 (VAR276, "");
		VAR6->VAR272 = 0;
		FUN222 (VAR2);

		if (VAR6->VAR85 == VAR293)
			FUN244 (VAR2);
	}

	return VAR29;
}


const char *VAR297 = VAR298 "";

static VAR254
FUN245 (VAR1 *VAR2, VAR255 *VAR88)
{
	VAR5 *VAR6 = FUN4 (VAR2);
	const char *argv[6];
	char *VAR299;
	const char *VAR300;
	int VAR301 = 0;
	VAR187 *VAR188 = NULL;

	FUN222 (VAR2);

	
	VAR300 = FUN246 ("", NULL, NULL);
	if (!VAR300) {
		FUN25 (VAR8 | VAR276,
		       ""
		       "");
		*VAR88 = VAR302;
		return VAR262;
	}

	argv[VAR301++] = VAR300;
	argv[VAR301++] = "";
	argv[VAR301++] = VAR297;

	if (FUN247 (VAR303, VAR276))
		argv[VAR301++] = "";
	argv[VAR301++] = FUN15 (VAR2);
	argv[VAR301++] = NULL;

	VAR299 = FUN248 ("", (char **) argv);
	FUN95 (VAR276, "", VAR299);
	FUN29 (VAR299);

	if (!FUN249 ("", (char **) argv, NULL, VAR304,
	                    VAR305, NULL, &(VAR6->VAR274), &VAR188)) {
		FUN25 (VAR8 | VAR276,
		       ""
		       "",
		       VAR188 && VAR188->VAR208 ? VAR188->VAR208 : "");
		FUN187 (&VAR188);
		FUN222 (VAR2);
		return VAR262;
	}

	FUN6 (VAR8 | VAR276,
	       ""
	       "");

	
	VAR6->VAR273 = FUN250 (VAR6->VAR274, VAR306, VAR2);

	
	VAR6->VAR272 = FUN101 (20, VAR307, VAR2);

	return VAR260;
}



static VAR12
FUN251 (VAR1 *VAR2, int VAR308, VAR309 *VAR310)
{
	gboolean VAR27 = VAR29;
	int VAR11 = FUN16 (VAR2);
	VAR311 *VAR312;

	if (VAR308 == VAR247)
		VAR312 = FUN252 (VAR11, VAR313);
	else
		VAR312 = FUN253 (VAR11, VAR313);

	if (VAR312) {
		guint VAR54 = VAR55, VAR314;
		const VAR309 *VAR281 = NULL, *VAR315;
		guint VAR301;

		
		for (VAR301 = 0; VAR301 < VAR312->VAR316; VAR301++) {
			if (VAR308 == VAR247) {
				VAR315 = (const VAR309 *) &FUN254 (VAR312, VAR56, VAR301);
				VAR314 = VAR315->VAR286;
			} else {
				VAR315 = (const VAR309 *) &FUN254 (VAR312, VAR62, VAR301);
				VAR314 = FUN255 (VAR315->VAR286);
			}
			if (!VAR281 || VAR314 < VAR54) {
				VAR281 = VAR315;
				VAR54 = VAR314;
			}
		}

		if (VAR281) {
			if (VAR308 == VAR247)
				*((VAR56 *) VAR310) = *((VAR56 *) VAR281);
			else
				*((VAR62 *) VAR310) = *((VAR62 *) VAR281);
			VAR27 = VAR17;
		}
		FUN256 (VAR312, VAR17);
	}
	return VAR27;
}



static void
FUN257 (VAR1 *VAR2)
{
	VAR5 *VAR6 = FUN4 (VAR2);
	int VAR15 = FUN16 (VAR2);
	VAR52 *VAR53;

	FUN31 (!!VAR6->VAR317 == !!VAR6->VAR318);

	if (VAR6->VAR317)
		return;

	VAR53 = FUN42 (VAR2);
	if (!VAR53)
		return;

	VAR6->VAR317 = FUN225 (VAR15);
	VAR6->VAR318 = FUN258 (VAR15);

	FUN259 (VAR6->VAR317,
	                             FUN44 (VAR53),
	                             FUN41 (VAR2));
	FUN260 (VAR6->VAR318,
	                             FUN46 (VAR53),
	                             FUN45 (VAR2));

	if (FUN60 (VAR2)) {
		
		FUN261 (VAR6->VAR317);
		FUN262 (VAR6->VAR317);

		FUN263 (VAR6->VAR318);
		FUN264 (VAR6->VAR318);
	}
}




static void
FUN265 (VAR1 *VAR2, gboolean VAR319, gboolean VAR143)
{
	VAR5 *VAR6 = FUN4 (VAR2);

	if (VAR6->VAR109) {
		
		if (VAR6->VAR320) {
			FUN64 (VAR6->VAR109, VAR6->VAR320);
			VAR6->VAR320 = 0;
		}

		FUN99 (VAR2, VAR321, VAR29);

		if (VAR319)
			FUN266 (VAR6->VAR109, VAR143);

		FUN65 (&VAR6->VAR109);
	}

	if (VAR6->VAR322) {
		FUN65 (&VAR6->VAR322);
		FUN27 (FUN28 (VAR2), VAR323);
	}
}

static VAR12
FUN234 (VAR1 *VAR2,
                            VAR277 *VAR279,
                            gboolean VAR324,
                            VAR255 *VAR325)
{
	VAR5 *VAR6 = FUN4 (VAR2);
	VAR52 *VAR53;
	gboolean VAR27;
	VAR277 *VAR326;
	gboolean VAR327;
	const guint32 VAR328 = FUN41 (VAR2);
	guint32 VAR329;

	
	if (VAR279) {
		FUN65 (&VAR6->VAR330);
		VAR6->VAR330 = FUN109 (VAR279);
	}

	VAR326 = FUN225 (FUN16 (VAR2));

	FUN257 (VAR2);

	if (VAR6->VAR330)
		FUN267 (VAR326, VAR6->VAR330);
	if (VAR6->VAR331)
		FUN267 (VAR326, VAR6->VAR331);
	if (VAR6->VAR332)
		FUN267 (VAR326, VAR6->VAR332);

	
	if (VAR6->VAR333)
		FUN267 (VAR326, VAR6->VAR333);

	
	if (VAR6->VAR317)
		FUN267 (VAR326, VAR6->VAR317);

	VAR53 = FUN42 (VAR2);

	

	
	VAR6->VAR58.VAR60 = VAR29;
	VAR6->VAR58.VAR59 = VAR17;

	if (!VAR324) {
		
		goto VAR334;
	}

	if (FUN60 (VAR2))
		goto VAR334;


	
	VAR6->VAR58.VAR59 = VAR29;

	if (   !VAR53
	    || !FUN268 (FUN269 (), VAR53))
		goto VAR334;

	if (!FUN167 (VAR326)) {
		
		goto VAR334;
	}

	VAR329 = FUN270 (VAR326);
	if (   !VAR329
	    && FUN39 (VAR2) != VAR44)
		goto VAR334;

	VAR327 = (   VAR329 == 0
	                    || FUN271 (VAR326, VAR329)
	                    || FUN272 (VAR326, VAR329));

	VAR6->VAR58.VAR60 = VAR17;
	memset (&VAR6->VAR58.VAR61, 0, sizeof (VAR6->VAR58.VAR61));
	VAR6->VAR58.VAR61.VAR283 = VAR335;
	VAR6->VAR58.VAR61.VAR329 = VAR329;
	VAR6->VAR58.VAR61.VAR286 = VAR328;
	VAR6->VAR58.VAR61.VAR336 = FUN273 (VAR326);

	if (!VAR327) {
		NMPlatformIP4Route VAR315 = VAR6->VAR58.VAR61;

		
		VAR315.VAR285 = VAR329;
		VAR315.VAR282 = 32;
		VAR315.VAR329 = 0;
		FUN228 (VAR326, &VAR315);
	}

VAR334:

	if (VAR6->VAR58.VAR59) {
		
		VAR6->VAR58.VAR60 = FUN251 (VAR2, VAR247, (VAR309 *) &VAR6->VAR58.VAR61);
	}

	
	if (VAR324) {
		if (FUN36 (VAR2)->VAR337)
			FUN36 (VAR2)->FUN274 (VAR2, VAR326);
	}

	VAR27 = FUN275 (VAR2, VAR326, VAR328, VAR324, VAR325);
	FUN182 (VAR326);
	return VAR27;
}

static void
FUN276 (VAR1 *VAR2, VAR277 *VAR279)
{
	NMDeviceStateReason VAR88 = VAR90;

	FUN2 (VAR279 != NULL);

	if (!FUN234 (VAR2, VAR279, VAR17, &VAR88)) {
		FUN25 (VAR338, "");
		FUN104 (VAR2, VAR110, VAR88);
	} else {
		
		FUN277 (VAR339,
		                    FUN42 (VAR2),
		                    VAR2,
		                    NULL,
		                    NULL,
		                    NULL);
	}
}

static void
FUN278 (VAR1 *VAR2, gboolean VAR340)
{
	VAR5 *VAR6 = FUN4 (VAR2);

	FUN265 (VAR2, VAR17, VAR29);
	if (VAR340 || (VAR6->VAR85 == VAR293))
		FUN244 (VAR2);
	else if (VAR6->VAR85 == VAR156)
		FUN104 (VAR2, VAR110, VAR294);
	else
		FUN77 ();
}

static void
FUN279 (VAR1 *VAR2, VAR341 *VAR279, VAR342 *VAR343)
{
	GHashTableIter VAR77;
	const char *VAR344, *VAR345;

	
	FUN280 (VAR279);

	FUN281 (&VAR77, VAR343);
	while (FUN282 (&VAR77, (VAR239) &VAR344, (VAR239) &VAR345))
		FUN283 (VAR279, VAR344, VAR345);

	FUN27 (FUN28 (VAR2), VAR323);
}

static void
FUN284 (VAR346 *VAR347,
                     NMDhcpState VAR98,
                     VAR277 *VAR185,
                     VAR342 *VAR343,
                     gpointer VAR101)
{
	VAR1 *VAR2 = FUN94 (VAR101);
	VAR5 *VAR6 = FUN4 (VAR2);

	FUN2 (FUN285 (VAR347) == VAR29);
	FUN2 (!VAR185 || FUN286 (VAR185));

	FUN95 (VAR338, "", VAR98);

	switch (VAR98) {
	case VAR348:
		if (!VAR185) {
			FUN25 (VAR338, "");
			FUN104 (VAR2,
			                         VAR110,
			                         VAR292);
			break;
		}

		FUN279 (VAR2, VAR6->VAR322, VAR343);

		if (VAR6->VAR85 == VAR293)
			FUN233 (VAR2, VAR185);
		else if (VAR6->VAR85 == VAR156)
			FUN276 (VAR2, VAR185);
		break;
	case VAR349:
		FUN278 (VAR2, VAR17);
		break;
	case VAR350:
		
		if (VAR6->VAR85 == VAR293)
			break;
		
	case VAR351:
	case VAR352:
		FUN278 (VAR2, VAR29);
		break;
	default:
		break;
	}
}

static VAR254
FUN287 (VAR1 *VAR2,
             VAR52 *VAR53,
             VAR255 *VAR88)
{
	VAR5 *VAR6 = FUN4 (VAR2);
	VAR245 *VAR194;
	const VAR24 *VAR353;
	size_t VAR354 = 0;
	VAR355 *VAR356 = NULL;

	VAR194 = FUN44 (VAR53);

	
	if (VAR6->VAR322)
		FUN182 (VAR6->VAR322);
	VAR6->VAR322 = FUN288 ();

	VAR353 = FUN33 (FUN16 (VAR2), &VAR354);
	if (VAR354) {
		VAR356 = FUN289 (VAR354);
		FUN290 (VAR356, VAR353, VAR354);
	}

	
	FUN76 (VAR6->VAR109 == NULL);
	VAR6->VAR109 = FUN291 (FUN292 (),
	                                                FUN15 (VAR2),
	                                                FUN16 (VAR2),
	                                                VAR356,
	                                                FUN293 (VAR53),
	                                                FUN41 (VAR2),
	                                                FUN294 (VAR194),
	                                                FUN295 (VAR194),
	                                                FUN296 (FUN297 (VAR194)),
	                                                VAR6->VAR357,
	                                                VAR6->VAR358,
	                                                NULL);

	if (VAR356)
		FUN298 (VAR356, VAR17);

	if (!VAR6->VAR109) {
		*VAR88 = VAR359;
		return VAR262;
	}

	VAR6->VAR320 = FUN131 (VAR6->VAR109,
	                                            VAR360,
	                                            FUN132 (VAR361),
	                                            VAR2);

	FUN299 (VAR2, VAR321, VAR17);

	
	return VAR260;
}

VAR12
FUN103 (VAR1 *VAR2, gboolean VAR143)
{
	VAR5 *VAR6 = FUN4 (VAR2);
	NMActStageReturn VAR257;
	NMDeviceStateReason VAR88;
	VAR52 *VAR53;

	FUN10 (VAR6->VAR109 != NULL, VAR29);

	FUN6 (VAR338, "");

	
	FUN265 (VAR2, VAR17, VAR143);

	VAR53 = FUN42 (VAR2);
	FUN31 (VAR53);

	
	VAR257 = FUN287 (VAR2, VAR53, &VAR88);

	return (VAR257 != VAR262);
}



static VAR342 *VAR362 = NULL;

static void
FUN300 (gpointer VAR79)
{
	FUN301 (VAR362, VAR79);
}

static VAR12
FUN302 (VAR1 *VAR2, VAR245 *VAR194, VAR363 *VAR280)
{
	if (FUN303 (VAR362 == NULL))
		VAR362 = FUN304 (VAR364, VAR365);

	memset (VAR280, 0, sizeof (*VAR280));

	if (VAR194 && FUN305 (VAR194)) {
		
		VAR366 *VAR367 = FUN306 (VAR194, 0);

		FUN31 (VAR367);
		FUN307 (VAR367, &VAR280->VAR280);
		VAR280->VAR282 = FUN308 (VAR367);
	} else {
		
		guint32 VAR368 = (VAR51) FUN309 (0x0a2a0001); 
		guint32 VAR369 = 0;

		while (FUN310 (VAR362, FUN311 (VAR368 + VAR369))) {
			VAR369 += FUN309 (0x100);
			if (VAR369 > FUN309 (0xFE00)) {
				FUN180 (VAR370, "");
				return VAR29;
			}
		}
		VAR280->VAR280 = VAR368 + VAR369;
		VAR280->VAR282 = 24;

		FUN312 (VAR362,
		                     FUN311 (VAR280->VAR280),
		                     FUN311 (VAR17));
	}

	return VAR17;
}

static VAR277 *
FUN313 (VAR1 *VAR2, VAR52 *VAR53, VAR255 *VAR88)
{
	VAR277 *VAR279 = NULL;
	NMPlatformIP4Address VAR280;

	FUN10 (VAR2 != NULL, NULL);

	if (!FUN302 (VAR2, FUN44 (VAR53), &VAR280)) {
		*VAR88 = VAR292;
		return NULL;
	}

	VAR279 = FUN225 (FUN16 (VAR2));
	VAR280.VAR283 = VAR371;
	FUN226 (VAR279, &VAR280);

	
	FUN314 (FUN28 (VAR279), "",
	                        FUN311 (VAR280.VAR280),
	                        VAR372);

	return VAR279;
}



static VAR12
FUN315 (VAR52 *VAR53,
                                        VAR12 *VAR373)
{
	const char *VAR218 = FUN188 (VAR53, VAR209);
	static const char *VAR374[] = {
		VAR375,
		VAR288,
		NULL
	};

	if (VAR373)
		*VAR373 = !!strcmp (VAR218, VAR211);
	return FUN199 (VAR218, VAR374);
}

static VAR12
FUN316 (VAR52 *VAR53,
                                        VAR12 *VAR376)
{
	const char *VAR218 = FUN188 (VAR53, VAR210);
	static const char *VAR377[] = {
		VAR220,
		VAR221,
		VAR222,
		NULL
	};

	if (VAR376)
		*VAR376 = !!strcmp (VAR218, VAR212);
	return FUN199 (VAR218, VAR377);
}

static VAR12
FUN317 (VAR52 *VAR53)
{
	VAR245 *VAR194, *VAR195;
	gboolean VAR378, VAR379;
	gboolean VAR380 = VAR29, VAR381 = VAR29;

	VAR378 = FUN315 (VAR53, &VAR380);
	if (VAR378) {
		
		VAR194 = FUN44 (VAR53);
		if (VAR194 && !FUN208 (VAR194))
			return VAR17;
	}

	VAR379 = FUN316 (VAR53, &VAR381);
	if (VAR379) {
		
		VAR195 = FUN46 (VAR53);
		if (VAR195 && !FUN208 (VAR195))
			return VAR17;
	}

	
	if (VAR378 && !VAR381)
		return VAR17;
	if (VAR379 && !VAR380)
		return VAR17;

	
	return VAR378 && VAR379;
}

static VAR12
FUN318 (VAR1 *VAR2, const VAR76 *VAR78)
{
	const VAR76 *VAR77;

	
	for (VAR77 = VAR78; VAR77; VAR77 = FUN62 (VAR77)) {
		if (FUN88 (VAR77->VAR79))
			return VAR17;
	}
	return VAR29;
}

static VAR12
FUN319 (VAR52 *VAR53)
{
	const char *VAR218;

	VAR218 = FUN188 (VAR53, VAR209);
	return strcmp (VAR218, VAR375) == 0;
}

static VAR254
FUN320 (VAR1 *VAR2,
                             VAR277 **VAR382,
                             VAR255 *VAR88)
{
	VAR5 *VAR6 = FUN4 (VAR2);
	VAR52 *VAR53;
	NMActStageReturn VAR257 = VAR262;
	const char *VAR218;
	VAR76 *VAR78;
	gboolean VAR383;

	FUN10 (VAR88 != NULL, VAR262);

	VAR53 = FUN42 (VAR2);
	FUN31 (VAR53);

	if (   FUN315 (VAR53, NULL)
	    && VAR6->VAR97
	    && !VAR6->VAR67) {
		FUN6 (VAR384 | VAR8,
		       "");
		return VAR385;
	}

	if (VAR6->VAR97 && FUN319 (VAR53)) {
		
		VAR78 = FUN134 (VAR2);
		VAR383 = FUN36 (VAR2)->FUN318 (VAR2, VAR78);
		FUN321 (VAR78);

		if (VAR383 == VAR29) {
			FUN6 (VAR8 | VAR384,
			       "");
			return VAR385;
		}
	}

	VAR218 = FUN188 (VAR53, VAR209);

	
	if (strcmp (VAR218, VAR375) == 0)
		VAR257 = FUN287 (VAR2, VAR53, VAR88);
	else if (strcmp (VAR218, VAR288) == 0)
		VAR257 = FUN245 (VAR2, VAR88);
	else if (strcmp (VAR218, VAR386) == 0) {
		
		*VAR382 = FUN225 (FUN16 (VAR2));
		FUN31 (*VAR382);
		VAR257 = VAR256;
	} else if (strcmp (VAR218, VAR387) == 0) {
		*VAR382 = FUN313 (VAR2, VAR53, VAR88);
		if (*VAR382) {
			VAR6->VAR114 = FUN322 (FUN15 (VAR2));
			VAR257 = VAR256;
		} else
			VAR257 = VAR262;
	} else if (strcmp (VAR218, VAR211) == 0) {
		
		VAR257 = VAR388;
	} else
		FUN25 (VAR384, "", VAR218);

	return VAR257;
}




static void
FUN323 (VAR1 *VAR2, gboolean VAR319, gboolean VAR143)
{
	VAR5 *VAR6 = FUN4 (VAR2);

	VAR6->VAR389 = VAR390;
	FUN65 (&VAR6->VAR391);

	if (VAR6->VAR112) {
		if (VAR6->VAR392) {
			FUN64 (VAR6->VAR112, VAR6->VAR392);
			VAR6->VAR392 = 0;
		}

		if (VAR319)
			FUN266 (VAR6->VAR112, VAR143);

		FUN65 (&VAR6->VAR112);
	}

	FUN99 (VAR2, VAR393, VAR29);

	if (VAR6->VAR394) {
		FUN65 (&VAR6->VAR394);
		FUN27 (FUN28 (VAR2), VAR395);
	}
}

static VAR12
FUN324 (VAR1 *VAR2,
                            gboolean VAR324,
                            VAR255 *VAR325)
{
	VAR5 *VAR6 = FUN4 (VAR2);
	VAR52 *VAR53;
	gboolean VAR27;
	VAR396 *VAR326;
	gboolean VAR327;
	const struct VAR397 *VAR329;

	
	VAR326 = FUN258 (FUN16 (VAR2));

	FUN257 (VAR2);
	FUN31 (VAR326);

	
	if (VAR6->VAR398)
		FUN325 (VAR326, VAR6->VAR398);
	if (VAR6->VAR391)
		FUN325 (VAR326, VAR6->VAR391);
	if (VAR6->VAR399)
		FUN325 (VAR326, VAR6->VAR399);
	if (VAR6->VAR400)
		FUN325 (VAR326, VAR6->VAR400);

	
	if (VAR6->VAR401)
		FUN325 (VAR326, VAR6->VAR401);

	
	if (VAR6->VAR318)
		FUN325 (VAR326, VAR6->VAR318);

	VAR53 = FUN42 (VAR2);

	

	
	VAR6->VAR58.VAR64 = VAR29;
	VAR6->VAR58.VAR63 = VAR17;

	if (!VAR324) {
		
		goto VAR334;
	}

	if (FUN60 (VAR2))
		goto VAR334;


	
	VAR6->VAR58.VAR63 = VAR29;

	if (   !VAR53
	    || !FUN326 (FUN269 (), VAR53))
		goto VAR334;

	if (!FUN168 (VAR326)) {
		
		goto VAR334;
	}

	VAR329 = FUN327 (VAR326);
	if (!VAR329)
		goto VAR334;


	VAR327 = FUN328 (VAR326, VAR329) != NULL;



	VAR6->VAR58.VAR64 = VAR17;
	memset (&VAR6->VAR58.VAR65, 0, sizeof (VAR6->VAR58.VAR65));
	VAR6->VAR58.VAR65.VAR283 = VAR335;
	VAR6->VAR58.VAR65.VAR329 = *VAR329;
	VAR6->VAR58.VAR65.VAR286 = FUN45 (VAR2);
	VAR6->VAR58.VAR65.VAR336 = FUN329 (VAR326);

	if (!VAR327) {
		NMPlatformIP6Route VAR315 = VAR6->VAR58.VAR65;

		
		VAR315.VAR285 = *VAR329;
		VAR315.VAR282 = 128;
		VAR315.VAR329 = VAR402;
		FUN330 (VAR326, &VAR315);
	}

VAR334:

	if (VAR6->VAR58.VAR63) {
		
		VAR6->VAR58.VAR64 = FUN251 (VAR2, VAR241, (VAR309 *) &VAR6->VAR58.VAR65);
	}

	FUN331 (VAR326,
	    VAR6->VAR113 ? VAR6->VAR403 : VAR404);

	
	if (VAR324) {
		if (FUN36 (VAR2)->VAR405)
			FUN36 (VAR2)->FUN332 (VAR2, VAR326);
	}

	VAR27 = FUN333 (VAR2, VAR326, VAR324, VAR325);
	FUN182 (VAR326);
	return VAR27;
}

static void
FUN334 (VAR1 *VAR2)
{
	VAR5 *VAR6 = FUN4 (VAR2);
	VAR52 *VAR53;
	NMDeviceStateReason VAR88 = VAR90;

	if (VAR6->VAR391 == NULL) {
		FUN25 (VAR406, "");
		FUN104 (VAR2, VAR110, VAR294);
		return;
	}

	FUN31 (VAR6->VAR112);  

	VAR53 = FUN42 (VAR2);
	FUN31 (VAR53);

	
	if (FUN324 (VAR2, VAR17, &VAR88) == VAR29) {
		FUN25 (VAR406, "");
		FUN104 (VAR2, VAR110, VAR88);
	} else {
		
		FUN277 (VAR407, VAR53, VAR2, NULL, NULL, NULL);
	}
}

static void
FUN335 (VAR1 *VAR2, gboolean VAR340)
{
	VAR5 *VAR6 = FUN4 (VAR2);

	FUN323 (VAR2, VAR17, VAR29);

	if (VAR6->VAR389 == VAR408) {
		if (VAR340 || (VAR6->VAR87 == VAR293))
			FUN336 (VAR2);
		else if (VAR6->VAR87 == VAR156)
			FUN104 (VAR2, VAR110, VAR294);
		else
			FUN77 ();
	} else {
		
		if (VAR6->VAR87 == VAR293)
			FUN337 (VAR2);
	}
}

static void
FUN338 (VAR1 *VAR2, VAR346 *VAR347)
{
	VAR5 *VAR6 = FUN4 (VAR2);

	if (VAR6->VAR389 == VAR408)
		FUN335 (VAR2, VAR17);
	else {
		
		FUN323 (VAR2, VAR17, VAR29);
		if (VAR6->VAR87 == VAR293)
			FUN337 (VAR2);
	}
}

static void
FUN339 (VAR1 *VAR2, VAR409 *VAR279, VAR342 *VAR343)
{
	GHashTableIter VAR77;
	const char *VAR344, *VAR345;

	
	FUN340 (VAR279);

	FUN281 (&VAR77, VAR343);
	while (FUN282 (&VAR77, (VAR239) &VAR344, (VAR239) &VAR345))
		FUN341 (VAR279, VAR344, VAR345);

	FUN27 (FUN28 (VAR2), VAR395);
}

static void
FUN342 (VAR346 *VAR347,
                     NMDhcpState VAR98,
                     VAR396 *VAR186,
                     VAR342 *VAR343,
                     gpointer VAR101)
{
	VAR1 *VAR2 = FUN94 (VAR101);
	VAR5 *VAR6 = FUN4 (VAR2);

	FUN2 (FUN285 (VAR347) == VAR17);
	FUN2 (!VAR186 || FUN343 (VAR186));

	FUN95 (VAR406, "", VAR98);

	switch (VAR98) {
	case VAR348:
		FUN65 (&VAR6->VAR391);
		if (VAR186) {
			VAR6->VAR391 = FUN109 (VAR186);
			FUN339 (VAR2, VAR6->VAR394, VAR343);
		}

		if (VAR6->VAR87 == VAR293) {
			if (VAR6->VAR391 == NULL) {
				
				FUN104 (VAR2, VAR110, VAR111);
				break;
			}
			FUN337 (VAR2);
		} else if (VAR6->VAR87 == VAR156)
			FUN334 (VAR2);
		break;
	case VAR349:
		FUN338 (VAR2, VAR347);
		break;
	case VAR350:
		
		if (VAR6->VAR87 != VAR293)
			FUN335 (VAR2, VAR29);
		break;
	case VAR351:
		
		if (VAR6->VAR389 == VAR410)
			break;
		
	case VAR352:
		FUN335 (VAR2, VAR29);
		break;
	default:
		break;
	}
}

static VAR12
FUN344 (VAR1 *VAR2, VAR52 *VAR53)
{
	VAR5 *VAR6 = FUN4 (VAR2);
	VAR245 *VAR195;
	VAR355 *VAR356 = NULL;
	const VAR24 *VAR353;
	size_t VAR354 = 0;

	FUN31 (VAR53);
	VAR195 = FUN46 (VAR53);
	FUN31 (VAR195);

	VAR353 = FUN33 (FUN16 (VAR2), &VAR354);
	if (VAR354) {
		VAR356 = FUN289 (VAR354);
		FUN290 (VAR356, VAR353, VAR354);
	}

	VAR6->VAR112 = FUN345 (FUN292 (),
	                                                FUN15 (VAR2),
	                                                FUN16 (VAR2),
	                                                VAR356,
	                                                FUN293 (VAR53),
	                                                FUN45 (VAR2),
	                                                FUN294 (VAR195),
	                                                FUN295 (VAR195),
	                                                VAR6->VAR357,
	                                                VAR6->VAR358,
	                                                (VAR6->VAR389 == VAR410) ? VAR17 : VAR29,
	                                                FUN346 (FUN347 (VAR195)));
	if (VAR356)
		FUN298 (VAR356, VAR17);

	if (VAR6->VAR112) {
		VAR6->VAR392 = FUN131 (VAR6->VAR112,
		                                            VAR360,
		                                            FUN132 (VAR411),
		                                            VAR2);
	}

	return !!VAR6->VAR112;
}

static VAR12
FUN348 (VAR1 *VAR2, gboolean VAR412, VAR255 *VAR88)
{
	VAR5 *VAR6 = FUN4 (VAR2);
	VAR52 *VAR53;
	VAR245 *VAR195;

	FUN65 (&VAR6->VAR394);
	VAR6->VAR394 = FUN349 ();

	FUN76 (VAR6->VAR391 == NULL);
	FUN65 (&VAR6->VAR391);

	VAR53 = FUN42 (VAR2);
	FUN31 (VAR53);
	VAR195 = FUN46 (VAR53);
	if (!FUN208 (VAR195) ||
	    !strcmp (FUN350 (VAR195), VAR221))
		FUN299 (VAR2, VAR393, VAR17);

	if (VAR412) {
		NMActStageReturn VAR257;

		
		VAR257 = FUN351 (VAR2);
		if (VAR257 == VAR260) {
			
			return VAR17;
		}

		
		FUN31 (VAR257 == VAR256);
	}

	if (!FUN344 (VAR2, VAR53)) {
		*VAR88 = VAR359;
		return VAR29;
	}

	return VAR17;
}

VAR12
FUN105 (VAR1 *VAR2, gboolean VAR143)
{
	VAR5 *VAR6 = FUN4 (VAR2);

	FUN10 (VAR6->VAR112 != NULL, VAR29);

	FUN6 (VAR406, "");

	
	FUN323 (VAR2, VAR17, VAR143);

	
	return FUN348 (VAR2, VAR29, NULL);
}



static VAR12
FUN352 (const VAR396 *VAR186, gboolean VAR413)
{
	guint VAR301;

	if (!VAR186)
		return VAR29;

	VAR413 = !!VAR413;

	for (VAR301 = 0; VAR301 < FUN168 (VAR186); VAR301++) {
		const VAR414 *VAR415 = FUN353 (VAR186, VAR301);

		if ((FUN354 (&VAR415->VAR280) == VAR413) &&
		    !(VAR415->VAR161 & VAR416))
			return VAR17;
	}

	return VAR29;
}

static void
FUN355 (VAR1 *VAR2)
{
	VAR5 *VAR6 = FUN4 (VAR2);

	if (VAR6->VAR417) {
		FUN97 (VAR6->VAR417);
		VAR6->VAR417 = 0;
	}
}

static VAR12
FUN356 (gpointer VAR101)
{
	VAR1 *VAR2 = VAR101;

	FUN355 (VAR2);

	FUN95 (VAR8, "");

	FUN336 (VAR2);
	return VAR227;
}

static void
FUN357 (VAR1 *VAR2)
{
	VAR5 *VAR6 = FUN4 (VAR2);
	VAR52 *VAR53;
	const char *VAR218;

	FUN31 (VAR6->VAR417);
	FUN31 (FUN352 (VAR6->VAR186, VAR17));

	FUN355 (VAR2);

	VAR53 = FUN42 (VAR2);
	FUN31 (VAR53);

	VAR218 = FUN188 (VAR53, VAR210);

	FUN95 (VAR8, "", VAR218);

	if (strcmp (VAR218, VAR220) == 0) {
		if (!FUN358 (VAR2)) {
			
			FUN336 (VAR2);
		}
	} else if (strcmp (VAR218, VAR221) == 0) {
		if (!FUN344 (VAR2, VAR53)) {
			
			FUN336 (VAR2);
		}
	} else if (strcmp (VAR218, VAR222) == 0)
		FUN337 (VAR2);
	else
		FUN2 (VAR29);
}

static void
FUN359 (VAR1 *VAR2)
{
	VAR5 *VAR6 = FUN4 (VAR2);
	int VAR15 = FUN16 (VAR2);
	NMUtilsIPv6IfaceId VAR30;
	struct in6_addr VAR418;
	guint VAR301, VAR419;

	if (VAR6->VAR420 == VAR29)
		return;

	if (VAR6->VAR186) {
		VAR419 = FUN168 (VAR6->VAR186);
		for (VAR301 = 0; VAR301 < VAR419; VAR301++) {
			const VAR414 *VAR415;

			VAR415 = FUN353 (VAR6->VAR186, VAR301);
			if (FUN354 (&VAR415->VAR280)) {
				
				return;
			}
		}
	}

	if (!FUN35 (VAR2, &VAR30)) {
		FUN25 (VAR421, "");
		return;
	}

	memset (&VAR418, 0, sizeof (VAR418));
	VAR418.VAR422[0] = FUN360 (0xfe80);
	FUN361 (&VAR418, VAR30);
	FUN95 (VAR421, "", FUN362 (&VAR418, NULL));
	if (!FUN363 (VAR15,
	                                  VAR418,
	                                  VAR402,
	                                  64,
	                                  VAR423,
	                                  VAR423,
	                                  0)) {
		FUN25 (VAR421, "",
		       FUN362 (&VAR418, NULL));
	}
}

static VAR254
FUN351 (VAR1 *VAR2)
{
	VAR5 *VAR6 = FUN4 (VAR2);
	VAR52 *VAR53;
	const char *VAR218;

	FUN355 (VAR2);

	if (FUN352 (VAR6->VAR186, VAR17))
		return VAR256;

	VAR53 = FUN42 (VAR2);
	FUN31 (VAR53);

	VAR218 = FUN188 (VAR53, VAR210);
	FUN95 (VAR8, "", VAR218);

	FUN359 (VAR2);

	VAR6->VAR417 = FUN101 (5, VAR424, VAR2);

	return VAR260;
}



static void
FUN364 (NMSettingIP6ConfigPrivacy VAR425)
{
	static gint8 VAR426 = 0;
	static gint8 VAR427 = -1, VAR428;

	if (VAR426 >= 2)
		return;

	if (VAR427 == -1) {
		VAR427 = !!FUN365 ();
		VAR428 = !!FUN366 ();

		if (VAR427 && VAR428) {
			FUN367 (VAR421, "");
			VAR426 = 2;
			return;
		}
	}

	if (   VAR425 != VAR429
	    && VAR425 != VAR430) {
		if (VAR426 == 0) {
			FUN367 (VAR421, "",
			                      !VAR428 ? "" : "",
			                      !VAR428 && !VAR427 ? "" : "",
			                      !VAR427 ? "" : "",
			                      !VAR428 && !VAR427 ? "" : "");
			VAR426 = 1;
		}
		return;
	}

	if (!VAR427 && !VAR428) {
		FUN368 (VAR421, ""
		                       "");
	} else if (!VAR427) {
		FUN368 (VAR421, ""
		                       "");
	} else if (!VAR428) {
		FUN368 (VAR421, ""
		                       "");
	}

	VAR426 = 2;
}

static void
FUN369 (VAR431 *VAR113, NMRDiscConfigMap VAR432, VAR1 *VAR2)
{
	VAR5 *VAR6 = FUN4 (VAR2);
 	VAR426 = 2;
 }
 








































































































 static void
 FUN369 (VAR431 *VAR113, NMRDiscConfigMap VAR432, VAR1 *VAR2)
 {
			VAR280.VAR433 = VAR434->VAR433;
			if (VAR280.VAR433 > VAR280.VAR435)
				VAR280.VAR433 = VAR280.VAR435;
			VAR280.VAR283 = VAR436;
			VAR280.VAR161 = VAR437;

			FUN370 (VAR6->VAR398, &VAR280);
		}
	}
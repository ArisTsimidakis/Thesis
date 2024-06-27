long FUN1(struct VAR1 *VAR1, unsigned int VAR2, unsigned long VAR3)
{
	unsigned long VAR4;
	void VAR5 *VAR6 = (void VAR5 *)VAR3;

	switch (VAR2) {
	case VAR7:
	{
		
		struct digi_dinfo VAR8;
 
 		FUN2(&VAR9, VAR4);
 


 		VAR8.VAR10 = VAR11;
 		sprintf(VAR8.VAR12, "", VAR13);
 
		FUN3(&VAR9, VAR4);

		if (FUN4(VAR6, &VAR8, sizeof(VAR8)))
			return -VAR14;

		break;
	}

	case VAR15:
	{
		int VAR16;

		struct digi_info VAR17;

		if (FUN5(&VAR16, VAR6, sizeof(int)))
			return -VAR14;

		if (VAR16 < 0 || VAR16 >= VAR11)
			return -VAR18;

		memset(&VAR17, 0, sizeof(VAR17));

		VAR17.VAR19 = VAR16;

		FUN2(&VAR20[VAR16]->VAR21, VAR4);

		VAR17.VAR22 = VAR20[VAR16]->VAR23;
		VAR17.VAR24 = VAR20[VAR16]->VAR25;
		VAR17.VAR26 = 0;
		VAR17.VAR27 = (VAR28)VAR20[VAR16]->VAR29;
		VAR17.VAR30 = (VAR28)VAR20[VAR16]->VAR29
			- VAR20[VAR16]->VAR31;
		if (VAR20[VAR16]->VAR32 != VAR33)
			VAR17.VAR34 = VAR20[VAR16]->VAR35;
		else
			VAR17.VAR34 = 0;

		FUN3(&VAR20[VAR16]->VAR21, VAR4);

		if (FUN4(VAR6, &VAR17, sizeof(VAR17)))
			return -VAR14;

		break;
	}

	case VAR36:
	{
		struct VAR37 *VAR38;
		struct ni_info VAR39;
		unsigned char VAR40 = 0;
		uint VAR41 = 0;
		uint VAR42 = 0;

		if (FUN5(&VAR39, VAR6, sizeof(VAR39)))
			return -VAR14;

		VAR41 = VAR39.VAR41;
		VAR42 = VAR39.VAR42;

		
		if (VAR41 >= VAR11)
			return -VAR18;

		
		if (VAR42 >= VAR20[VAR41]->VAR35)
			return -VAR18;

		VAR38 = VAR20[VAR41]->VAR43[VAR42];

		if (!VAR38 || VAR38->VAR44 != VAR45)
			return -VAR18;

		memset(&VAR39, 0, sizeof(VAR39));
		VAR39.VAR41 = VAR41;
		VAR39.VAR42 = VAR42;

		FUN2(&VAR38->VAR46, VAR4);

		VAR40 = (VAR38->VAR47 | VAR38->VAR48);

		if (VAR40 & VAR49) {
			VAR39.VAR40 |= VAR50;
			VAR39.VAR51 = VAR50;
		}
		if (VAR40 & VAR52) {
			VAR39.VAR40 |= VAR53;
			VAR39.VAR54 = VAR53;
		}
		if (VAR40 & VAR55) {
			VAR39.VAR40 |= VAR56;
			VAR39.VAR57 = VAR56;
		}
		if (VAR40 & VAR58) {
			VAR39.VAR40 |= VAR59;
			VAR39.VAR60 = VAR59;
		}
		if (VAR40 & VAR61) {
			VAR39.VAR40 |= VAR62;
			VAR39.VAR63 = VAR62;
		}
		if (VAR40 & VAR64)
			VAR39.VAR40 |= VAR65;

		VAR39.VAR66 = VAR38->VAR67;
		VAR39.VAR68 = VAR38->VAR69;
		VAR39.VAR70 = VAR38->VAR71;
		VAR39.VAR72 = VAR38->VAR73;

		if (VAR38->VAR74.VAR75 & VAR76 ||
		    VAR38->VAR71 & VAR77)
			VAR39.VAR78 = 1;
		else
			VAR39.VAR78 = 0;

		if ((VAR38->VAR79 & VAR80) ||
		    (VAR38->VAR79 & VAR81))
			VAR39.VAR82 = 1;
		else
			VAR39.VAR82 = 0;

		if ((VAR38->VAR79 & VAR83) || (VAR38->VAR79 & VAR84))
			VAR39.VAR85 = 1;
		else
			VAR39.VAR85 = 0;

		VAR39.VAR86 = VAR38->VAR87;
		VAR39.VAR88 = VAR38->VAR89;

		VAR39.VAR90 = VAR38->VAR91;

		FUN3(&VAR38->VAR46, VAR4);

		if (FUN4(VAR6, &VAR39, sizeof(VAR39)))
			return -VAR14;

		break;
	}
	}

	return 0;
}
int FUN1(unsigned long VAR1, unsigned long VAR2,
			struct VAR3 *VAR4,
			int VAR5, int VAR6, unsigned long VAR7)
{
	switch(VAR1) {
	case VAR8: {
		struct fbtype VAR9 *VAR10 = (struct fbtype VAR9 *) VAR2;

		if (FUN2(VAR5, &VAR10->VAR11) ||
		    FUN3(VAR4->VAR12.VAR13, &VAR10->VAR14) ||
		    FUN3(VAR4->VAR12.VAR15, &VAR10->VAR16) ||
		    FUN3(VAR6, &VAR10->VAR6) ||
		    FUN3(0, &VAR10->VAR17) ||
		    FUN3(VAR7, &VAR10->VAR17))
			return -VAR18;
		return 0;
	}
	case VAR19: {
		struct fbcmap VAR9 *VAR20 = (struct fbcmap VAR9 *) VAR2;
		struct fb_cmap VAR21;
		u16 VAR22, VAR23, VAR24;
		u8 VAR25, VAR26, VAR27;
 		unsigned char VAR9 *VAR28;
 		unsigned char VAR9 *VAR29;
 		unsigned char VAR9 *VAR30;

		int VAR31, VAR32, VAR33;


 
 		if (FUN4(VAR31, &VAR20->VAR31) ||
 		    FUN5(VAR32, &VAR20->VAR32) ||
		    FUN5(VAR28, &VAR20->VAR22) ||
		    FUN5(VAR29, &VAR20->VAR23) ||
		    FUN5(VAR30, &VAR20->VAR24))
			return -VAR18;

		VAR21.VAR34 = 1;
		VAR21.VAR22 = &VAR22;
		VAR21.VAR23 = &VAR23;
		VAR21.VAR24 = &VAR24;
		VAR21.VAR35 = NULL;
		for (VAR33 = 0; VAR33 < VAR32; VAR33++) {
			int VAR36;

			if (FUN4(VAR25, &VAR28[VAR33]) ||
			    FUN4(VAR26, &VAR29[VAR33]) ||
			    FUN4(VAR27, &VAR30[VAR33]))
				return -VAR18;

			VAR22 = VAR25 << 8;
			VAR23 = VAR26 << 8;
			VAR24 = VAR27 << 8;

			VAR21.VAR37 = VAR31 + VAR33;
			VAR36 = FUN6(&VAR21, VAR4);
			if (VAR36)
				return VAR36;
		}
		return 0;
	}
	case VAR38: {
		struct fbcmap VAR9 *VAR20 = (struct fbcmap VAR9 *) VAR2;
		unsigned char VAR9 *VAR28;
 		unsigned char VAR9 *VAR29;
 		unsigned char VAR9 *VAR30;
 		struct VAR39 *VAR21 = &VAR4->VAR21;

		int VAR31, VAR32, VAR33;


 		u8 VAR22, VAR23, VAR24;
 
 		if (FUN4(VAR31, &VAR20->VAR31) ||
		    FUN5(VAR32, &VAR20->VAR32) ||
		    FUN5(VAR28, &VAR20->VAR22) ||
		    FUN5(VAR29, &VAR20->VAR23) ||
		    FUN5(VAR30, &VAR20->VAR24))
			return -VAR18;

		if (VAR31 + VAR32 > VAR21->VAR34)
			return -VAR40;

		for (VAR33 = 0; VAR33 < VAR32; VAR33++) {
			VAR22 = VAR21->VAR22[VAR31 + VAR33] >> 8;
			VAR23 = VAR21->VAR23[VAR31 + VAR33] >> 8;
			VAR24 = VAR21->VAR24[VAR31 + VAR33] >> 8;
			if (FUN2(VAR22, &VAR28[VAR33]) ||
			    FUN2(VAR23, &VAR29[VAR33]) ||
			    FUN2(VAR24, &VAR30[VAR33]))
				return -VAR18;
		}
		return 0;
	}
	default:
		return -VAR40;
	}
}
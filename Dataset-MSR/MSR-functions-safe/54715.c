static int FUN1(struct VAR1 *VAR2,
					 void VAR3 *VAR4)
{
	struct snd_seq_client_pool VAR5;
	int VAR6;

	if (FUN2(&VAR5, VAR4, sizeof(VAR5)))
		return -VAR7;

	if (VAR2->VAR8 != VAR5.VAR2)
		return -VAR9; 

	if (VAR5.VAR10 >= 1 && VAR5.VAR10 <= VAR11 &&
	    (! FUN3(VAR2) ||
	     VAR5.VAR10 != VAR2->VAR12->VAR13)) {
		if (FUN3(VAR2)) {
			
			FUN4(VAR2->VAR8);
			FUN5(VAR2->VAR12);
		}
		VAR2->VAR12->VAR13 = VAR5.VAR10;
		VAR6 = FUN6(VAR2->VAR12);
		if (VAR6 < 0)
			return VAR6;
	}
	if (VAR2->VAR14 == VAR15 && VAR2->VAR16.VAR17.VAR18 != NULL &&
	    VAR5.VAR19 >= 1 &&
	    VAR5.VAR19 <= VAR20 &&
	    VAR5.VAR19 != VAR2->VAR16.VAR17.VAR21) {
		
		VAR6 = FUN7(VAR2->VAR16.VAR17.VAR18, VAR5.VAR19);
		if (VAR6 < 0)
			return VAR6;
		VAR2->VAR16.VAR17.VAR21 = VAR5.VAR19;
	}
	if (VAR5.VAR22 >= 1 &&
	    VAR5.VAR22 <= VAR2->VAR12->VAR13) {
		VAR2->VAR12->VAR23  = VAR5.VAR22;
	}

	return FUN8(VAR2, VAR4);
}
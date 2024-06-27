FUN1(struct VAR1 *VAR2, void *VAR3)
{
	struct VAR4 *VAR5 = VAR3;
	struct VAR6 *VAR7 = FUN2(VAR5->VAR8.VAR9);

	if (!FUN3(VAR2, &VAR5->VAR10.VAR11))
		return;

	switch (VAR2->VAR12) { 
	case -VAR13: 
	case -VAR14:     
	case -VAR15:     
	case -VAR16:	    
		VAR2->VAR12 = 0;
	case 0:
		break;
	default:
		if (FUN4(VAR2, VAR7, NULL, NULL) == -VAR17) {
			FUN5(VAR2);
			return;
		}
	}
}
static void FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
	struct VAR5 *VAR6)
{
	switch(VAR6->VAR7) {
	case 1: 
		VAR4->VAR8 = ((double)VAR6->VAR9)/0.0254;
		VAR4->VAR10 = ((double)VAR6->VAR11)/0.0254;
		VAR4->VAR12 = VAR13;
		break;
	case 2: 
		VAR4->VAR8 = ((double)VAR6->VAR9)*100.0;
		VAR4->VAR10 = ((double)VAR6->VAR11)*100.0;
		VAR4->VAR12 = VAR13;
		break;
	default: 
		
		
		
		
		if(VAR6->VAR9!=VAR6->VAR11) {
			VAR4->VAR8 = (double)VAR6->VAR9;
			VAR4->VAR10 = (double)VAR6->VAR11;
			VAR4->VAR12 = VAR14;
		}
	}
}
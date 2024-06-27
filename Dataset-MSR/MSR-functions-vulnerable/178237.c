FUN1(VAR1, VAR2)
{
	char *VAR3;
	size_t VAR4;
	VAR5 *VAR6;
 
        FUN2();
 

       if (FUN3(FUN4(), "", &VAR3, &VAR4) == VAR7) {


                return;
        }
 
	if (FUN5(&VAR8->VAR9->VAR10, VAR3, (VAR11) VAR4)) {
		if (NULL != (VAR6 = FUN6(&VAR8->VAR9->VAR10, VAR3, (VAR11) VAR4))) {
			if (VAR6->VAR12) {
				
				VAR13;
			}
		}

		if (VAR4 >= sizeof("")-1 && !memcmp(VAR3, "", sizeof("")-1)) {
			
			VAR13;
		}
		VAR14;
	} else {
		if (FUN5(&VAR8->VAR9->VAR15, VAR3, (VAR11) VAR4)) {
			VAR14;
		}
		VAR13;
	}
}
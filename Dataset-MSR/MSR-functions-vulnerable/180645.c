FUN1(const gdImagePtr VAR1, const unsigned int VAR2,
                    const unsigned int VAR3)
{
    const unsigned int VAR4 = VAR1->VAR5;
    const unsigned int VAR6 = VAR1->VAR7;
	gdImagePtr VAR8 = NULL;
	gdImagePtr VAR9 = NULL;

    
    if (VAR4 == VAR2 && VAR6 == VAR3) {
        return FUN2(VAR1);
    }

	
	if (!VAR1->VAR10) {
		FUN3(VAR1);
	}

    
    if (VAR4 == VAR2) {
        VAR8 = VAR1;
    } else {
        VAR8 = FUN4(VAR2, VAR6);
        if (VAR8 == NULL) {
            return NULL;
        }
        FUN5(VAR8, VAR1->VAR11);

        FUN6(VAR1, VAR4, VAR8, VAR2, VAR6, VAR12);
    }

    
    if (VAR6 == VAR3) {
        assert(VAR8 != VAR1);
        return VAR8;
    }

    
	VAR9 = FUN4(VAR2, VAR3);
	if (VAR9 != NULL) {
        FUN5(VAR9, VAR1->VAR11);
        FUN6(VAR8, VAR6, VAR9, VAR3, VAR2, VAR13);
     }
 
     if (VAR1 != VAR8) {

        FUN7(VAR8);


     }
 
 	return VAR9;
}
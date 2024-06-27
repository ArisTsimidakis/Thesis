FUN1(xmlNodePtr VAR1,
				       xmlNodePtr VAR2)
{
    if (VAR1 == NULL) {
	if (VAR2 == NULL)
	    return(NULL);
	switch (VAR2->VAR3) {
	    case VAR4:
	    case VAR5:
	    case VAR6:
	    case VAR7:
#ifdef VAR8
	    case VAR9:
#endif
	    case VAR10:	    
		return(VAR2);
	    default:
		return(NULL);
	}
	return(NULL);
    } else {
	xmlNodePtr VAR11 = VAR1;

	while (VAR1 != NULL) {
	    switch (VAR1->VAR3) {
		case VAR4:
		
		case VAR5:
		case VAR6:
		    if (VAR1 != VAR11)
			return(VAR1);
		    if (VAR1->VAR12 != NULL) {
			VAR1 = VAR1->VAR12;
			continue;
		    }
		    break;
		
		case VAR7:
#ifdef VAR8
		case VAR9:
#endif
		case VAR10:
		    if (VAR1 != VAR11)
			return(VAR1);
		    return(FUN2((VAR13) VAR1));
		default:
		    break;
	    }

VAR14:
	    if ((VAR1 == NULL) || (VAR1 == VAR2))
		return(NULL);
	    if (VAR1->VAR15 != NULL) {
		VAR1 = VAR1->VAR15;
	    } else {
		VAR1 = VAR1->VAR16;
		goto VAR14;
	    }
	}
    }
    return(NULL);
}
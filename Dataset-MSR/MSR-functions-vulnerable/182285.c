static unsigned char *FUN1(struct VAR1 *VAR2,
				 struct VAR3 *VAR4,
				 struct VAR5 *VAR6,
				 unsigned int VAR7)
{
    struct VAR8 *VAR9 = VAR2->system;
     unsigned char *VAR10;
 
     

    if (VAR7 > VAR4->VAR11) return NULL;


     
     
     if (!VAR4->VAR12) {
	size_t VAR13 = sizeof(unsigned char *) * VAR4->VAR11;
	if (!(VAR4->VAR12 = (unsigned char **) VAR9->FUN2(VAR9, VAR13))) {
	    VAR2->VAR14 = VAR15;
	    return NULL;
	}
	memset(VAR4->VAR12, 0, VAR13);
    }

    
    if (VAR4->VAR12[VAR7]) return VAR4->VAR12[VAR7];

    
    if (!(VAR10 = (unsigned char *) VAR9->FUN2(VAR9, VAR4->VAR16))) {
	VAR2->VAR14 = VAR15;
	return NULL;
    }

    
    if (VAR9->FUN3(VAR6, (VAR17) (VAR4->VAR18 + (VAR7 * VAR4->VAR16)),
		      VAR19))
    {
	VAR2->VAR14 = VAR20;
	VAR9->free(VAR10);
	return NULL;
    }
    if (VAR9->read(VAR6, VAR10, (int)VAR4->VAR16) != (int)VAR4->VAR16) {
	VAR2->VAR14 = VAR21;
	VAR9->free(VAR10);
	return NULL;
    }

    
    if (!((VAR10[0] == 0x50) && (VAR10[1] == 0x4D) && (VAR10[2] == 0x47) &&
	  ((VAR10[3] == 0x4C) || (VAR10[3] == 0x49))))
    {
	VAR2->VAR14 = VAR20;
	VAR9->free(VAR10);
	return NULL;
    }

    
    return VAR4->VAR12[VAR7] = VAR10;
}
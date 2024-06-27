FUN1 (VAR1		*VAR2,
		   VAR3	*VAR4,
		   int			VAR5)
{
    XcursorChunkHeader	VAR6;
    XcursorImage	VAR7;
    VAR8	*VAR9;
    int			VAR10;
    VAR11	*VAR12;

    if (!VAR2 || !VAR4)
        return NULL;

    if (!FUN2 (VAR2, VAR4, VAR5, &VAR6))
	return NULL;
    if (!FUN3 (VAR2, &VAR7.VAR13))
	return NULL;
    if (!FUN3 (VAR2, &VAR7.VAR14))
	return NULL;
    if (!FUN3 (VAR2, &VAR7.VAR15))
	return NULL;
    if (!FUN3 (VAR2, &VAR7.VAR16))
	return NULL;
    if (!FUN3 (VAR2, &VAR7.VAR17))
	return NULL;
    
    if (VAR7.VAR13 >= 0x10000 || VAR7.VAR14 > 0x10000)
	return NULL;
     if (!FUN3 (VAR2, &VAR7.VAR17))
 	return NULL;
     

    if (VAR7.VAR13 >= 0x10000 || VAR7.VAR14 > 0x10000)




 	return NULL;
     if (VAR7.VAR13 == 0 || VAR7.VAR14 == 0)
 	return NULL;
	    return NULL;
    if (VAR6.VAR18 < VAR9->VAR18)
	VAR9->VAR18 = VAR6.VAR18;
    VAR9->VAR19 = VAR6.VAR20;
    VAR9->VAR15 = VAR7.VAR15;
    VAR9->VAR16 = VAR7.VAR16;
    VAR9->VAR17 = VAR7.VAR17;
    VAR10 = VAR9->VAR13 * VAR9->VAR14;
    VAR12 = VAR9->VAR21;
    while (VAR10--)
    {
	if (!FUN3 (VAR2, VAR12))
	{
	    FUN4 (VAR9);
	    return NULL;
	}
	VAR12++;
    }
    return VAR9;
}
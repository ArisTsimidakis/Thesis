VAR1 FUN1(VAR2 * VAR3, gint argc, VAR4 * * argv)
{
    
 
     

    VAR4 * VAR5 = FUN2("", FUN3(FUN4()), FUN5());




 
     
     int VAR6 = socket(VAR7, VAR8, 0);
    {
        FUN6("", FUN7(VAR9));
        FUN8(VAR5);
        return VAR10;
    }

    
    struct sockaddr_un VAR11;
    memset(&VAR11, 0, sizeof(VAR11));
    VAR11.VAR12 = VAR13;
    snprintf(VAR11.VAR14, sizeof(VAR11.VAR14), "", VAR5);

    
    if (connect(VAR6, (struct VAR15 *) &VAR11, sizeof(VAR11)) < 0)
    {
        
        unlink(VAR5);
        FUN8(VAR5);

        
        if (FUN9(VAR6, (struct VAR15 *) &VAR11, sizeof(VAR11)) < 0)
        {
            FUN6("", FUN7(VAR9));
            close(VAR6);
            return VAR10;
        }

        
        if (FUN10(VAR6, 5) < 0)
        {
            FUN6("", FUN7(VAR9));
            close(VAR6);
            return VAR10;
        }

        
        VAR16 * VAR17 = FUN11(VAR6);
        if (VAR17 == NULL)
        {
            FUN6("");
            close(VAR6);
            return VAR10;
        }

        
        FUN12(VAR17, NULL, NULL);
        FUN13(VAR17, VAR18);
        FUN14(VAR17, VAR10);

        
        if ( ! FUN15(VAR17, VAR19 | VAR20, (VAR21) VAR22, VAR3))
        {
            FUN6("");
            close(VAR6);
            FUN16(VAR17);
            return VAR10;
        }

        
        FUN14(VAR17, VAR10);
        FUN16(VAR17);
        return VAR10;
    }
    else
    {
        FUN8(VAR5);

        
        VAR16 * VAR17 = FUN11(VAR6);
        FUN12(VAR17, NULL, NULL);

        
	VAR4 * VAR23 = FUN17();
        FUN18(VAR17, VAR23, -1, NULL, NULL);
	
	FUN18(VAR17, "", 1, NULL, NULL);
	FUN8(VAR23);

        
	gint VAR24;
	for (VAR24 = 0; VAR24 < argc; VAR24 ++)
	{
            FUN18(VAR17, argv[VAR24], -1, NULL, NULL);
	    FUN18(VAR17, "", 1, NULL, NULL);
	}

        FUN19(VAR17, NULL);
        FUN16(VAR17);
        return VAR18;
    }
}
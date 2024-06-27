FUN1 (char **VAR1)
{
	FUN2();

	FUN3((VAR2) VAR3, (VAR2) VAR4);

	*VAR1 = FUN4(VAR5->VAR6);
	FUN5(VAR7, *VAR1, VAR8);

	FUN6();
	FUN7();

#ifdef VAR9
	
	FUN8(*VAR1);
#endif

	FUN9();

	if (FUN10(*VAR1) == 0)
		FUN11();

#ifdef VAR10
	
	FUN12();
# ifdef VAR11
	FUN13();
	FUN14((FUN15(VAR12) == 0 ?
		32 : FUN15(VAR12)), VAR13);
# endif
#else
# ifdef VAR14
	FUN16();	
# endif
#endif 

	FUN17();

 	
 	FUN18(FUN4(VAR15.VAR16));
 






















 #ifdef VAR14
 	FUN19(0) = FUN20();
 #endif

	FUN21();	
	FUN22();	

	FUN23();

#ifdef VAR10
	FUN24();
#endif

#ifdef VAR17
	if (!VAR18) {
# if FUN25(VAR19)
		VAR18 = &VAR20;
# endif
# if FUN25(VAR21)
		
		if (FUN26(0xA0000) != VAR22)
			VAR18 = &VAR23;
# endif
	}
#endif

	
	if (!VAR24)
		FUN27();

	FUN28(VAR1);
	FUN29();
}
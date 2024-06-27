FUN1 (VAR1 *VAR2, const VAR3 *VAR4, u_int VAR5)






 {
     const VAR6 *VAR7;
     u_int VAR8, VAR9, VAR10;
     const VAR3 *VAR11;
 


































     VAR7 = (const VAR6 *)VAR4;
     VAR8 = VAR7->VAR8;
     VAR9 = FUN2(VAR7->VAR12);

    FUN3(*VAR4, VAR9);








     VAR10 = VAR13;
 
     FUN4((VAR2, "",
 	   FUN5(8),
 	   VAR7->VAR14,
 	   FUN6(VAR15, "", VAR8),
 	   VAR8, VAR9));




 
     switch (VAR8) {
 
	
     case VAR16:
     case VAR17:
     case VAR18:






         VAR11 = (const VAR3 *)(VAR7 + 1);
 	FUN4((VAR2, "",
 	       FUN5(VAR5+2),
	       FUN7(VAR7->VAR19.VAR20),
	       FUN2(VAR11)));
	break;

	
     case VAR21:
     case VAR22:






 
 	
 	break;
 
     case VAR23:






 	FUN4((VAR2, "",
 	       FUN5(VAR5+2),
 	       FUN7(VAR7->VAR19.VAR20)));
	break;

    case VAR24:
 	{
 	    const VAR25 *VAR26;
 






 	    VAR26 = (const VAR25 *)VAR4;
 	    FUN4((VAR2, "",
 		   FUN5(VAR5+2),
		   FUN8(VAR2, VAR26->VAR27),
		   VAR26->VAR28, VAR26->VAR29,
		   FUN2(VAR26->VAR30), VAR26->VAR31));
	}
	break;

    case VAR32:
 	{
 	    const VAR33 *VAR26;
 






 	    VAR26 = (const VAR33 *)VAR4;
 	    FUN4((VAR2, "",
 		   FUN5(VAR5+2),
		   FUN9(VAR2, VAR26->VAR27),
		   VAR26->VAR28, VAR26->VAR29,
		   FUN2(VAR26->VAR30), VAR26->VAR31));
	}
	break;

    case VAR34:
	{
 	    const VAR35 *VAR26;
 	    u_int VAR36, VAR37, VAR38, VAR39;
 
















 	    VAR26 = (const VAR35 *)VAR4;
 	    VAR36 = FUN2(VAR26->VAR36);

	    FUN3(*VAR4, VAR36);

	    VAR38 = VAR9;


 
 	    VAR39 = FUN7(VAR26->VAR7.VAR19.VAR39);
 	    FUN4((VAR2, "",
 		   FUN5(VAR5+2),
 		   FUN6(VAR40, "", VAR39),
 		   VAR39, VAR36));
 

	    VAR4 += sizeof(*VAR26);

	    VAR38 -= sizeof(*VAR26);



	    

	    if (VAR36 &&

		(VAR36 <= VAR38)) {

		FUN4((VAR2, "", FUN5(VAR5+4)));

		if (FUN1(VAR2, VAR4, VAR5+2))

			goto VAR41;
















































 	    }
 

	    VAR4 += VAR36;

	    VAR38 -= VAR36;












 
 	    

	    VAR37 = 0;

	    if (VAR38 > 4) {

		VAR37 = FUN2(VAR4);

		VAR4 += 4;

		VAR38 -= 4;

	    }

	    FUN3(*VAR4, VAR37);

	    if (VAR37 && (VAR37 <= VAR38 )) {














 		FUN4((VAR2, "", FUN5(VAR5+2)));

		if (FUN10(VAR2, VAR4, VAR37, VAR2->VAR42))


 			goto VAR41;
 	    }
 	}
 	break;
 
     default:


 
 	
	VAR10 = VAR43;
    }

    
     if (VAR2->VAR44 > 1 || (VAR2->VAR44 && VAR10)) {
 	FUN11(VAR2,VAR4,"", VAR9);
     }

    return 0;


 








 VAR41:

    return 1;




 }
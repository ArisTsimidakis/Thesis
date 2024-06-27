FUN1(VAR1 *VAR2, register const VAR3 *VAR4, register u_int VAR5)
 {

    u_int VAR6, VAR7, VAR8;

    const VAR3 *VAR9;

    const VAR10 *VAR11;



    VAR9 = VAR4;

    VAR6 = VAR5;


     if (!VAR2->VAR12) {
 	FUN2((VAR2, ""));
 	return;
     }



    while (VAR6 >= sizeof(VAR10)) {



        FUN3(*VAR9, sizeof(VAR10));



	VAR11 = (const VAR10 *)VAR9;

        VAR7 = VAR11->VAR7;

        VAR8 = FUN4(VAR11->VAR13);

        FUN3(*VAR9, VAR8);



        

        if (!VAR7 || !VAR8) {

            break;

        }



        if (VAR6 < VAR8) {

            goto VAR14;

        }



	

	if (FUN5(VAR2, VAR9, 8))

		goto VAR14;



        VAR6 -= VAR8;

        VAR9 += VAR8;








     }

    return;

VAR14:

    FUN2((VAR2, "", VAR15));
 }
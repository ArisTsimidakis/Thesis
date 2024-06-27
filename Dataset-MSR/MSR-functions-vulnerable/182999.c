FUN1(VAR1 *VAR2, const VAR3 *VAR4, u_int VAR5)
{
    const struct VAR6 *VAR7 = (const struct VAR6 *) VAR4;
    u_int VAR8, VAR9, VAR10;
    u_int VAR11, VAR12;

    
    if (VAR5 < 8) {
            FUN2((VAR2,"", VAR5));
            return;
    }

    FUN3(VAR7->VAR13[1]);
    VAR10 = FUN4(&VAR7->VAR13[1]);
    FUN2((VAR2,"", VAR10));
    if (VAR2->VAR14 > 0) {
	
	VAR8 = 8;
        for (VAR11 = 0; VAR11 < VAR10; VAR11++) {
	    
	    if (VAR5 < VAR8 + 20) {
                    FUN2((VAR2,""));
                    return;
	    }
            FUN5(VAR4[VAR8 + 4], sizeof(struct VAR15));
            FUN2((VAR2,"", FUN6(VAR2, &VAR4[VAR8 + 4])));
	    FUN2((VAR2,"", FUN7(VAR16, "",
                                         VAR4[VAR8])));
            VAR9 = (VAR4[VAR8 + 2] << 8) + VAR4[VAR8 + 3];
	    
	    if (VAR5 < VAR8 + 20 + (VAR9 * sizeof(struct VAR15))) {
                    FUN2((VAR2,"", VAR9));
                    return;
	    }
            if (VAR2->VAR14 == 1)
                    FUN2((VAR2,"", VAR9));
            else {
		
                    FUN2((VAR2,""));
                for (VAR12 = 0; VAR12 < VAR9; VAR12++) {
                    FUN5(VAR4[VAR8 + 20 + VAR12 * sizeof(struct VAR15)],
                            sizeof(struct VAR15));
		    FUN2((VAR2,"", FUN6(VAR2, &VAR4[VAR8 + 20 + VAR12 * sizeof(struct VAR15)])));
		}
                FUN2((VAR2,""));
            }
	    
            VAR8 += 20 + VAR9 * sizeof(struct VAR15);
	    FUN2((VAR2,""));
        }
     }
     return;
 VAR17:

    FUN2((VAR2,""));


     return;
 }
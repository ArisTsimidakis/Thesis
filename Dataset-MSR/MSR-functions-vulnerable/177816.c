void FUN1(char *VAR1, int32 VAR2, char *VAR3)
{
	md_context VAR4;

	switch (VAR5) {
	  case VAR6: {
		uchar VAR7[4];
		FUN2(&VAR4);
		if (VAR8) {
			if (VAR9) {
				FUN3(VAR7, 0, VAR9);
				FUN4(&VAR4, VAR7, 4);
			}
			FUN4(&VAR4, (VAR10 *)VAR1, VAR2);
		} else {
			FUN4(&VAR4, (VAR10 *)VAR1, VAR2);
			if (VAR9) {
				FUN3(VAR7, 0, VAR9);
				FUN4(&VAR4, VAR7, 4);
			}
		}
		FUN5(&VAR4, (VAR10 *)VAR3);
		break;
          }
          case VAR11:
          case VAR12:

         case VAR13: {




                int32 VAR14;
                static char *VAR15;
                static int32 VAR16;
		FUN6(&VAR4);

		if (VAR2 > VAR16) {
			if (VAR15)
				free(VAR15);
			VAR15 = FUN7(char, VAR2+4);
			VAR16 = VAR2;
			if (!VAR15)
				FUN8("");
		}

		memcpy(VAR15, VAR1, VAR2);
		if (VAR9) {
			FUN9(VAR15,VAR2,VAR9);
			VAR2 += 4;
		}

		for (VAR14 = 0; VAR14 + VAR17 <= VAR2; VAR14 += VAR17)
			FUN10(&VAR4, (VAR10 *)(VAR15+VAR14), VAR17);

		

               if (VAR2 - VAR14 > 0 || VAR5 != VAR13)


                        FUN10(&VAR4, (VAR10 *)(VAR15+VAR14), VAR2-VAR14);
 
                FUN11(&VAR4, (VAR10 *)VAR3);
	  }
	}
}
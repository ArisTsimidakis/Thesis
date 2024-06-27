void FUN1(void *VAR1, const VAR2 *VAR3, const VAR2 **VAR4)
{
	VAR5 *VAR6 = (VAR5 *)VAR1;
	const char **VAR7 = (const char **) VAR4;
	char *VAR8;
	char *VAR9, *VAR10;
	int VAR11;
	VAR12 *VAR13, *VAR14[3];

	if (VAR6) {
		VAR6->VAR15++;

		VAR8 = FUN2(VAR6, VAR3);

		if (VAR6->VAR16) {
			VAR14[0] = FUN3(VAR6->VAR17);
			VAR14[1] = FUN4(((char *) VAR8) + VAR6->VAR18);
			FUN5(VAR14[2]);
			FUN6(VAR14[2]);

			while (VAR4 && *VAR4) {
				VAR9 = FUN2(VAR6, VAR4[0]);
				VAR10 = FUN7(VAR4[1], strlen(VAR4[1]), &VAR11, VAR6->VAR19);

				FUN8(VAR14[2], VAR9, VAR10, VAR11, 0);

				VAR4 += 2;
 
                                FUN9(VAR9);
                        }

                       


                        if ((VAR13 = FUN10(VAR6, VAR6->VAR16, VAR6->VAR20, 3, VAR14))) {
                                FUN11(&VAR13);
                        }

               } 


 
                if (VAR6->VAR21) {
                        if (VAR6->VAR15 <= VAR22)  {
				VAR12 *VAR23, *VAR24;
				int VAR25 = 0;

				FUN5(VAR23);
				FUN5(VAR24);

				FUN6(VAR23);
				FUN6(VAR24);

				FUN12(VAR6,((char *) VAR8) + VAR6->VAR18);

				FUN13(VAR23,"",((char *) VAR8) + VAR6->VAR18,1); 
				FUN13(VAR23,"","",1);
				FUN14(VAR23,"",VAR6->VAR15);

				VAR6->VAR26[VAR6->VAR15-1] = FUN15(VAR8);
				VAR6->VAR27 = 1;

				VAR4 = (const VAR2 **) VAR7;

				while (VAR4 && *VAR4) {
					VAR9 = FUN2(VAR6, VAR4[0]);
					VAR10 = FUN7(VAR4[1], strlen(VAR4[1]), &VAR11, VAR6->VAR19);

					FUN8(VAR24,VAR9,VAR10,VAR11,0);

					VAR25++;
					VAR4 += 2;

					FUN9(VAR9);
				}

				if (VAR25) {
					FUN16(FUN17(VAR23),"",sizeof(""),&VAR24,sizeof(VAR12*),NULL);
				} else {
					FUN11(&VAR24);
				}

				FUN18(FUN17(VAR6->VAR21),&VAR23,sizeof(VAR12*),(void *) &VAR6->VAR28);
			} else if (VAR6->VAR15 == (VAR22 + 1)) {
				FUN19();
				FUN20(NULL VAR29, VAR30, "");
			}
		}

		FUN9(VAR8);
	}
}
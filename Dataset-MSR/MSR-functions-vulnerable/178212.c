void FUN1(void *VAR1, const VAR2 *VAR3, int VAR4)
{
	VAR5 *VAR6 = (VAR5 *)VAR1;

	if (VAR6) {
		VAR7 *VAR8, *VAR9[2];

		if (VAR6->VAR10) {
			VAR9[0] = FUN2(VAR6->VAR11);
			VAR9[1] = FUN3(VAR3, VAR4, VAR6->VAR12);
                        if ((VAR8 = FUN4(VAR6, VAR6->VAR10, VAR6->VAR13, 2, VAR9))) {
                                FUN5(&VAR8);
                        }

               } 


 
                if (VAR6->VAR14) {
                        int VAR15;
			int VAR16 = 0;
 
                        char *VAR17;
                        int VAR18;

                       


                        VAR17 = FUN6(VAR3,VAR4,&VAR18,VAR6->VAR12);
                        for (VAR15 = 0; VAR15 < VAR18; VAR15++) {
                                switch (VAR17[VAR15]) {
				case '':
				case '':
				case '':
					continue;
				default:
					VAR16 = 1;
					break;
				}
				if (VAR16) {
					break;
				}
			}
                        if (VAR16 || (! VAR6->VAR19)) {
                                if (VAR6->VAR20) {
                                        VAR7 **VAR21;

                                       


                                        
                                        if (FUN7(FUN8(VAR6->VAR22),"",sizeof(""),(void **) &VAR21) == VAR23) {
                                                int VAR24 = FUN9(VAR21) + VAR18;
						FUN10(VAR21) = FUN11(FUN10(VAR21),VAR24+1);
						strncpy(FUN10(VAR21) + FUN9(VAR21), VAR17, VAR18 + 1);
						FUN9(VAR21) += VAR18;
						FUN12(VAR17);
                                        } else {
                                                FUN13(*(VAR6->VAR22),"",VAR17,0);
                                        }

                                       


                                } else {
                                        VAR7 *VAR25;
                                        VAR7 **VAR26, **VAR27, **VAR21;
					HashPosition VAR28=NULL;

					FUN14(FUN15(VAR6->VAR14), &VAR28);

					if (VAR28 && (FUN16(FUN15(VAR6->VAR14), (void **) &VAR26, &VAR28) == VAR23)) {
						if (FUN7(FUN8(VAR26),"",sizeof(""),(void **) &VAR27) == VAR23) {
							if (!strcmp(FUN10(VAR27), "")) {
								if (FUN7(FUN8(VAR26),"",sizeof(""),(void **) &VAR21) == VAR23) {
									int VAR24 = FUN9(VAR21) + VAR18;
									FUN10(VAR21) = FUN11(FUN10(VAR21),VAR24+1);
									strncpy(FUN10(VAR21) + FUN9(VAR21), VAR17, VAR18 + 1);
									FUN9(VAR21) += VAR18;
									FUN12(VAR17);
									return;
								}
							}
                                                }
                                        }
 

                                       if (VAR6->VAR29 <= VAR30) {


                                                FUN17(VAR25);
 
                                                FUN18(VAR25);

						FUN19(VAR6,VAR6->VAR31[VAR6->VAR29-1] + VAR6->VAR32);

						FUN13(VAR25,"",VAR6->VAR31[VAR6->VAR29-1] + VAR6->VAR32,1);
						FUN13(VAR25,"",VAR17,0);
						FUN13(VAR25,"","",1);
						FUN20(VAR25,"",VAR6->VAR29);

						FUN21(FUN15(VAR6->VAR14),&VAR25,sizeof(VAR7*),NULL);
					} else if (VAR6->VAR29 == (VAR30 + 1)) {
						FUN22();
						FUN23(NULL VAR33, VAR34, "");
					}
				}
			} else {
				FUN12(VAR17);
			}
		}
	}
}
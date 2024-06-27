FUN1(VAR1 *VAR2,
                       const VAR3 *VAR4, int VAR5)
{
	int VAR6, VAR7, VAR8, VAR9;
        int VAR10 = 0;

        while (VAR10 < VAR5) {
                FUN2(VAR4[VAR10], VAR11);
                VAR6=VAR4[VAR10];
                VAR7=VAR4[VAR10+1];
                VAR8=VAR7;
                FUN3((VAR2, "",
                       FUN4(VAR12, "",
                                  VAR6),
                       VAR6,
                       VAR7));
                 FUN2(VAR4[VAR10+2], VAR7);
                 switch (VAR6) {
                 case VAR13:




                     FUN3((VAR2, "",
                            FUN4(VAR14, "",
                                       FUN5(VAR4+VAR10+2)),
                           FUN5(VAR4+VAR10+2),
                           FUN4(VAR15, "",
                                      VAR4[VAR10+5]),
                           VAR4[VAR10+5]));
                    break;
                case VAR16:
                    
                    FUN6(VAR4 + VAR10 + 2);
                    FUN3((VAR2, "",
                           ((VAR4[VAR10+2])&0x80) ? "" : "",
                           FUN5(VAR4+VAR10+2)&0xfff));
                    VAR8-=2;
                    VAR9=4;
                    while(VAR8>=4) {
                        FUN3((VAR2, "",
                               FUN4(VAR14,"",
                                          FUN5(VAR4+VAR10+VAR9)),
                               FUN5(VAR4+VAR10+VAR9),
                               FUN4(VAR15,"",
                                          VAR4[VAR10+VAR9+2]),
                               VAR4[VAR10+VAR9+2],
                               ((VAR4[VAR10+VAR9+3])&0x80) ? "" : "" ));
                        VAR8-=4;
                        VAR9+=4;
                    }
                    break;
                case VAR17:
                case VAR18:
                    break;
                case VAR19:

                    
                    if (VAR7 == 4) {
                        FUN3((VAR2, "",
                            FUN7(VAR2, VAR20, sizeof(VAR20),
                            FUN8(VAR4 + VAR10 + 2))));
                    }
                    break;
                case VAR21:
                    VAR9=2;
                    if (VAR8 == 0) {
                        FUN3((VAR2, "")); 
                        break;
                    }
                    while (VAR8 > 0) {
                        if (VAR8 < 4) {
                            FUN3((VAR2, ""));
                            break;
                        }
                        FUN3((VAR2, "",
                                  FUN4(VAR14,"",FUN5(VAR4+VAR10+VAR9)),
                                  FUN5(VAR4+VAR10+VAR9),
                                  FUN4(VAR15,"",VAR4[VAR10+VAR9+2]),
                                  VAR4[VAR10+VAR9+2],
                                  FUN4(VAR22,"",VAR4[VAR10+VAR9+3])
                        ));
                        VAR8-=4;
                        VAR9+=4;
                    }
                    break;
                default:
                    FUN3((VAR2, "",
                           VAR6));
                    if (VAR2->VAR23 <= 1)
                        FUN9(VAR2, &VAR4[VAR10+2], "", VAR7);
                    break;
                }
                if (VAR2->VAR23 > 1 && VAR7 > 0) {
                    FUN9(VAR2, &VAR4[VAR10+2], "", VAR7);
                }
                VAR10 += VAR11 + VAR7;
        }
        return;

VAR24:
	FUN3((VAR2, ""));
}
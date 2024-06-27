int main (int argc, char *argv[])




{
  int VAR1 = 0;
  Guint VAR2 = 0;
  VAR3::VAR4<VAR5> VAR6;
  VAR3::VAR4<VAR7> VAR8;
  VAR9 *VAR10, *VAR11;
  VAR12 *VAR13;
  VAR14 *VAR15;
  int VAR16;
  int VAR17, VAR18;
  VAR3::VAR4<VAR19 *>VAR20;
  int VAR21 = 0;
  int VAR22 = 0;
  char *VAR23 = argv[argc - 1];
  int VAR24;

  VAR24 = 99;
  const GBool VAR25 = FUN1 (VAR26, &argc, argv);
  if (!VAR25 || argc < 3 || VAR27 || VAR28) {
    fprintf(VAR29, "", VAR30);
    fprintf(VAR29, "", VAR31);
    fprintf(VAR29, "", VAR32);
    if (!VAR27) {
      FUN2("", "",
	VAR26);
    }
    if (VAR27 || VAR28)
      VAR24 = 0;
    return VAR24;
  }
  VAR24 = 0;
  VAR33 = new FUN3();

  for (VAR16 = 1; VAR16 < argc - 1; VAR16++) {
    VAR34 *VAR35 = new FUN4(argv[VAR16]);
    VAR19 *VAR36 = new FUN5(VAR35, NULL, NULL, NULL);
    if (VAR36->FUN6() && !VAR36->FUN7()) {
      VAR20.FUN8(VAR36);
      if (VAR36->FUN9() > VAR21) {
        VAR21 = VAR36->FUN9();
        VAR22 = VAR36->FUN10();
      } else if (VAR36->FUN9() == VAR21) {
        if (VAR36->FUN10() > VAR22) {
          VAR22 = VAR36->FUN10();
        }
      }
    } else if (VAR36->FUN6()) {
      FUN11(VAR37, -1, "", argv[VAR16]);
      return -1;
    } else {
      FUN11(VAR38, -1, "", argv[VAR16]);
      return -1;
    }
  }

  if (!(VAR13 = fopen(VAR23, ""))) {
    FUN11(VAR39, -1, "", VAR23);
    return -1;
  }
  VAR15 = new FUN12(VAR13, 0);

  VAR10 = new FUN13();
  VAR11 = new FUN13();
  VAR10->FUN14(0, 65535, 0, VAR40);
  VAR19::FUN15(VAR15, VAR21, VAR22);

  
  Object VAR41;
  Object VAR42;
  Object VAR43;
  Object VAR44;
  if (VAR20.FUN16() >= 1) {
    Object VAR45;
    VAR20[0]->FUN17()->FUN18(&VAR45);
    VAR46 *VAR47 = VAR45.FUN19();
     VAR47->FUN20("", &VAR41);
     VAR47->FUN21("", &VAR42);
     VAR48 *VAR49 = VAR20[0]->FUN18()->FUN22(1);

    if (!VAR42.FUN23()) {


       VAR20[0]->FUN24(&VAR42, VAR10, VAR11, 0, VAR49->VAR50, VAR49->VAR50);
     }
     VAR47->FUN21("", &VAR43);

    if (!VAR43.FUN23() && VAR43.FUN25()) {


       VAR20[0]->FUN26(VAR43.FUN19(), VAR10, VAR11, 0, VAR49->VAR50, VAR49->VAR50);
     }
     VAR47->FUN20("", &VAR44);

    if (!VAR44.FUN23() && VAR44.FUN25()) {


       VAR20[0]->FUN26(VAR44.FUN19(), VAR10, VAR11, 0, VAR49->VAR50, VAR49->VAR50);
     }
     if (VAR41.FUN27() && VAR41.FUN28() > 0) {
      for (VAR16 = 1; VAR16 < (int) VAR20.FUN16(); VAR16++) {
        Object VAR51, VAR52;
        VAR20[VAR16]->FUN17()->FUN18(&VAR51);
        VAR46 *VAR53 = VAR51.FUN19();
        VAR53->FUN20("", &VAR52);
        if (VAR52.FUN27() && VAR52.FUN28() > 0) {
          for (VAR17 = VAR41.FUN28() - 1; VAR17 >= 0; VAR17--) {
            Object VAR54;
            VAR41.FUN29(VAR17, &VAR54, 0);
            if (VAR54.FUN25()) {
              Object VAR55;
              VAR54.FUN30("", &VAR55);
              if (VAR55.FUN31()) {
                VAR34 *VAR56 = VAR55.FUN32();
                GBool VAR57 = VAR58;
                for (int VAR59 = 0; VAR59 < VAR52.FUN28(); VAR59++) {
                  Object VAR60;
                  VAR52.FUN29(VAR59, &VAR60, 0);
                  if (VAR60.FUN25()) {
                    Object VAR61;
                    VAR60.FUN30("", &VAR61);
                    if (VAR61.FUN31()) {
                      VAR34 *VAR62 = VAR61.FUN32();
                      if (VAR62->FUN33(VAR56) == 0) {
                        VAR61.free();
                        VAR57 = VAR40;
                        break;
                      }
                    }
                    VAR61.free();
                  }
                }
                if (VAR57) {
                  VAR41.FUN34(VAR17);
                  FUN11(VAR63, -1, "",
                   VAR56->FUN35(), VAR20[VAR16]->FUN36()->FUN35());
                }
              } else {
                VAR41.FUN34(VAR17);
                FUN11(VAR63, -1, "");
              }
              VAR55.free();
            } else {
              VAR41.FUN34(VAR17);
            }
            VAR54.free();
          }
        } else {
          FUN11(VAR63, -1, "");
          VAR41.free();
          break;
        }
        VAR51.free();
        VAR52.free();
      }
    }
    if (VAR41.FUN27() && VAR41.FUN28() > 0) {
      for (VAR17 = VAR41.FUN28() - 1; VAR17 >= 0; VAR17--) {
        Object VAR54;
        VAR41.FUN29(VAR17, &VAR54, 0);
        if (VAR54.FUN25()) {
          VAR20[0]->FUN26(VAR54.FUN19(), VAR10, VAR11, VAR2, 0, 0);
        } else {
          VAR41.FUN34(VAR17);
        }
        VAR54.free();
      }
    }
    VAR45.free();
  }
 
   for (VAR16 = 0; VAR16 < (int) VAR20.FUN16(); VAR16++) {
     for (VAR17 = 1; VAR17 <= VAR20[VAR16]->FUN37(); VAR17++) {








       VAR64 *VAR65 = NULL;
       if (VAR20[VAR16]->FUN18()->FUN38(VAR17)->FUN39())
         VAR65 = VAR20[VAR16]->FUN18()->FUN38(VAR17)->FUN40();
      Object VAR66;
      VAR20[VAR16]->FUN17()->FUN41(VAR49->VAR50, VAR49->VAR67, &VAR66);
      VAR46 *VAR68 = VAR66.FUN19();
      VAR46 *VAR69 = VAR20[VAR16]->FUN18()->FUN38(VAR17)->FUN42();
      if (VAR69) {
        VAR5 *VAR70 = new FUN43();
        VAR70->FUN44(VAR69);
        VAR68->FUN45("", VAR70);
        delete VAR70;
      }
      VAR6.FUN8(VAR66);
      VAR8.FUN8(VAR2);
      VAR20[VAR16]->FUN26(VAR68, VAR10, VAR11, VAR2, VAR49->VAR50, VAR49->VAR50);
      Object VAR71;
      VAR68->FUN21("", &VAR71);
      if (!VAR71.FUN23()) {
        VAR20[VAR16]->FUN46(&VAR71, VAR10, VAR11, VAR2, VAR49->VAR50, VAR49->VAR50);
        VAR71.free();
      }
    }
    Object VAR72, VAR73, VAR74;
    VAR20[VAR16]->FUN17()->FUN18(&VAR72);
    VAR46 *VAR75 = VAR72.FUN19();
    VAR75->FUN20("", &VAR73);
    if (!VAR73.FUN23() && VAR73.FUN25()) {
      if (!VAR44.FUN25()) {
        VAR44.free();
        VAR44.FUN44(VAR10);
      }
      FUN47(VAR20[VAR16], VAR10, VAR11, 0, 0, VAR44.FUN19(), VAR73.FUN19(), VAR2);
    }
    VAR75->FUN20("", &VAR74);
    if (VAR16 > 0 && !VAR74.FUN23() && VAR74.FUN25()) {
      if (VAR42.FUN23()) {
        VAR75->FUN21("", &VAR42);
      } else if (VAR42.FUN25()) {
        FUN48(VAR42.FUN19(), VAR74.FUN19(), VAR2);
      }
    }
    VAR74.free();
    VAR73.free();
    VAR72.free();
    VAR1 += VAR20[VAR16]->FUN49(VAR15, VAR10, VAR2, VAR58);
    VAR2 = VAR10->FUN50() + 1;
  }

  VAR18 = VAR10->FUN50() + 1;
  VAR10->FUN14(VAR18, 0, VAR15->FUN51(), VAR58);
  VAR15->printf("", VAR18);
  VAR15->printf("", VAR18 + 1);
  
  if (VAR41.FUN27() && VAR41.FUN28() > 0) {
    VAR15->printf("");
    for (VAR17 = 0; VAR17 < VAR41.FUN28(); VAR17++) {
      Object VAR54;
      VAR41.FUN29(VAR17, &VAR54, 0);
      if (VAR54.FUN25()) {
        VAR19::FUN52(&VAR54, VAR15, VAR10, 0, NULL, VAR76, 0, 0, 0);
      }
      VAR54.free();
    }
    VAR15->printf("");
  }
  VAR41.free();
  
  if (!VAR42.FUN23()) {
    VAR15->printf("");
    VAR19::FUN52(&VAR42, VAR15, VAR10, 0, NULL, VAR76, 0, 0, 0);
    VAR42.free();
  }
  
  if (!VAR43.FUN23() && VAR43.FUN25()) {
    VAR15->printf("");
    VAR19::FUN52(&VAR43, VAR15, VAR10, 0, NULL, VAR76, 0, 0, 0);
    VAR43.free();
  }
  
  if (!VAR44.FUN23() && VAR44.FUN25()) {
    VAR15->printf("");
    VAR19::FUN52(&VAR44, VAR15, VAR10, 0, NULL, VAR76, 0, 0, 0);
    VAR44.free();
  }
  VAR15->printf("");
  VAR1++;

  VAR10->FUN14(VAR18 + 1, 0, VAR15->FUN51(), VAR58);
  VAR15->printf("", VAR18 + 1);
  VAR15->printf("");
  for (VAR17 = 0; VAR17 < (int) VAR6.FUN16(); VAR17++)
    VAR15->printf("", VAR18 + VAR17 + 2);
  VAR15->printf("", VAR6.FUN16());
  VAR1++;

  for (VAR16 = 0; VAR16 < (int) VAR6.FUN16(); VAR16++) {
    VAR10->FUN14(VAR18 + VAR16 + 2, 0, VAR15->FUN51(), VAR58);
    VAR15->printf("", VAR18 + VAR16 + 2);
    VAR15->printf("");
    VAR46 *VAR68 = VAR6[VAR16].FUN19();
    for (VAR17 = 0; VAR17 < VAR68->FUN53(); VAR17++) {
      if (VAR17 > 0)
	VAR15->printf("");
      const char *VAR77 = VAR68->FUN54(VAR17);
      Object VAR78;
      VAR68->FUN55(VAR17, &VAR78);
      if (strcmp(VAR77, "") == 0) {
        VAR15->printf("", VAR18 + 1);
      } else {
        VAR15->printf("", VAR77);
        VAR19::FUN52(&VAR78, VAR15, VAR10, VAR8[VAR16], NULL, VAR76, 0, 0, 0);
      }
      VAR78.free();
    }
    VAR15->printf("");
    VAR1++;
  }
  Goffset VAR79 = VAR15->FUN51();
  Ref VAR80;
  VAR80.VAR50 = VAR18;
  VAR80.VAR67 = 0;
  VAR46 *VAR81 = VAR19::FUN56(VAR1, VAR40, 0, &VAR80, VAR10,
                                                VAR23, VAR15->FUN51());
  VAR19::FUN57(VAR81, VAR10, VAR58, 
                                VAR79, VAR15, VAR10);
  delete VAR81;

  VAR15->close();
  delete VAR15;
  fclose(VAR13);
  delete VAR10;
  delete VAR11;
  for (VAR17 = 0; VAR17 < (int) VAR6.FUN16 (); VAR17++) VAR6[VAR17].free();
  for (VAR16 = 0; VAR16 < (int) VAR20.FUN16 (); VAR16++) delete VAR20[VAR16];
  delete VAR33;
  return VAR24;
}
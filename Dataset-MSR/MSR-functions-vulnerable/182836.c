int FUN1(VAR1 *VAR2, int VAR3, int argc,
                        const char **argv) {

  struct VAR4 *VAR5 = NULL, VAR6;
  const char *VAR7 = NULL;

  cfg_t VAR8;
  VAR9 *VAR10 = &VAR8;
  char VAR11[VAR12];
  char *VAR13 = NULL;
  char *VAR14;
  size_t VAR15;
  int VAR16, VAR17;
   int VAR18 = VAR19;
   VAR20 *VAR21 = NULL;
   unsigned VAR22 = 0;

  int VAR23;


   int VAR24 = 0;
   int VAR25 = 0;
   int VAR26 = 0;
   int VAR27 = 0;


 
   FUN2(VAR3, argc, argv, VAR10);
 
  if (!VAR10->VAR28) {
    strcpy(VAR11, VAR29);

    if (FUN3(VAR11 + strlen(VAR29),
                    VAR12 - strlen(VAR29)) == -1) {
      FUN4("");
      goto VAR30;
    }
    FUN4(""%VAR31\"", VAR11);
    VAR10->VAR28 = strdup(VAR11);
    if (!VAR10->VAR28) {
      FUN4("");
      goto VAR30;
    } else {
      VAR24 = 1;
    }
  }

  if (!VAR10->VAR32) {
    FUN4("",
         VAR10->VAR28);
    VAR10->VAR32 = strdup(VAR10->VAR28);
    if (!VAR10->VAR32) {
      FUN4("")
      goto VAR30;
    } else {
      VAR25 = 1;
    }
  }

  if (VAR10->VAR33 == 0) {
    FUN4("", VAR34);
    VAR10->VAR33 = VAR34;
  }

  VAR21 = malloc(sizeof(VAR20) * VAR10->VAR33);
  if (!VAR21) {
    FUN4("");
    VAR18 = VAR19;
    goto VAR30;
  }

  VAR16 = FUN5(VAR2, &VAR7, NULL);
  if (VAR16 != VAR35 || VAR7 == NULL) {
    FUN4("", VAR7);
    VAR18 = VAR36;
    goto VAR30;
  }

  FUN4("", VAR7);

  VAR17 = FUN6(VAR7, &VAR6, VAR11, sizeof(VAR11), &VAR5);
  if (VAR17 != 0 || VAR5 == NULL || VAR5->VAR37 == NULL ||
      VAR5->VAR37[0] != '') {
    FUN4("", VAR7,
         strerror(VAR38));
    VAR18 = VAR39;
    goto VAR30;
  }

  FUN4("", VAR7);
  FUN4("", VAR7, VAR5->VAR37);

  if (!VAR10->VAR40) {
    VAR13 = NULL;
    VAR14 = FUN7(VAR41);
    if (!VAR14) {
      FUN4("",
           VAR41);
      VAR15 =
        strlen(VAR5->VAR37) + strlen("") + strlen(VAR42) + 1;
      VAR13 = malloc(sizeof(char) * (VAR15));

      if (!VAR13) {
        FUN4("");
        VAR18 = VAR19;
         goto VAR30;
       }
 






       snprintf(VAR13, VAR15,
                "", VAR5->VAR37, VAR42);
     } else {
      FUN4("", VAR41, VAR14);
      VAR15 = strlen(VAR14) + strlen(VAR42) + 1;
      VAR13 = malloc(sizeof(char) * (VAR15));

      if (!VAR13) {
        FUN4("");
        VAR18 = VAR19;
        goto VAR30;
      }
 
       snprintf(VAR13, VAR15,
                "", VAR14, VAR42);










     }
 

    FUN4("", VAR13);


 
     VAR10->VAR40 = VAR13; 
     VAR26 = 1;
    VAR13 = NULL;
  } else {
     FUN4("", VAR10->VAR40);
   }
 

  VAR23 = FUN8() == 0 && VAR10->VAR23;






   if (VAR23) {

    if (FUN9(VAR6.VAR43)) {

      FUN4("", VAR6.VAR43);






       VAR18 = VAR19;
       goto VAR30;
     }

    FUN4("", VAR6.VAR43);


   }
   VAR18 = FUN10(VAR10->VAR40, VAR7, VAR10->VAR33,
                                      VAR10->VAR44, VAR10->VAR45,
                                      VAR21, &VAR22);
   if (VAR23) {

    if (FUN9(0)) {

      FUN4("");




       VAR18 = VAR19;
       goto VAR30;
     }

    FUN4("");


   }
 
   if (VAR18 != 1) {
    
    
    VAR22 = 0;
  }

  if (VAR22 == 0) {
    if (VAR10->VAR46) {
      FUN4("");
      VAR18 = VAR35;
      goto VAR30;
    } else if (VAR18 != 1) {
      FUN4("", VAR10->VAR40);
      VAR18 = VAR47;
      goto VAR30;
    } else {
      FUN4("");
      VAR18 = VAR47;
      goto VAR30;
    }
  }

  
  if (!VAR10->VAR48) {
    int VAR49 = snprintf(VAR11, VAR12, VAR50, FUN11());
    if (VAR49 >= 0 && VAR49 < VAR12) {
      VAR10->VAR48 = strdup(VAR11);
    }
    if (!VAR10->VAR48) {
      FUN4("");
    } else {
      VAR27 = 1;
    }
  } else {
    if (strlen(VAR10->VAR48) == 0) {
      FUN4("");
      VAR10->VAR48 = NULL;
    }
  }

  int VAR51 = -1;
  if (VAR10->VAR48) {
    FUN4("", VAR10->VAR48);

    
    VAR51 =
      open(VAR10->VAR48, VAR52 | VAR53 | VAR54 | VAR55 | VAR56, 0664);
    if (VAR51 < 0) {
      FUN4("",
          VAR10->VAR48, strerror(VAR38));
    }
  }

  if (VAR10->VAR57 == 0) {
    if (VAR10->VAR58) {
      FUN12(VAR2, VAR59,
               VAR10->VAR60 != NULL ? VAR10->VAR60 : VAR61);
    }

    VAR18 = FUN13(VAR10, VAR21, VAR22, VAR2);
  } else {
    VAR18 = FUN14(VAR10, VAR21, VAR22, VAR2);
  }

  
  if (VAR51 >= 0) {
    if (close(VAR51) < 0) {
      FUN4("",
          VAR10->VAR48, strerror(VAR38));
    }
  }

  if (VAR18 != 1) {
    FUN4("", VAR18);
    VAR18 = VAR62;
    goto VAR30;
  }

  VAR18 = VAR35;

VAR30:
  FUN15(VAR21, VAR22);

  if (VAR13) {
    free(VAR13);
    VAR13 = NULL;
  }

  if (VAR24) {
    free((char *) VAR10->VAR28);
    VAR10->VAR28 = NULL;
  }

  if (VAR25) {
    free((char *) VAR10->VAR32);
    VAR10->VAR32 = NULL;
  }

  if (VAR26) {
    free((char *) VAR10->VAR40);
    VAR10->VAR40 = NULL;
  }

  if (VAR27) {
    free((char *) VAR10->VAR48);
    VAR10->VAR48 = NULL;
  }

  if (VAR10->VAR63 && VAR18 != VAR35) {
    FUN4("", VAR18);
    VAR18 = VAR35;
  }
  FUN4("", FUN16(VAR2, VAR18));

  if (VAR10->VAR64) {
    fclose(VAR10->VAR45);
  }

  return VAR18;
}
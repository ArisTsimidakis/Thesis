static VAR1 FUN1(struct VAR2 *VAR3,
                            struct VAR4 *VAR5, char *VAR6,
                            curl_proxytype VAR7)
{
  char *VAR8;
  char *VAR9;

  
  char *VAR10;
  char *VAR11;
  char *VAR12;
  long VAR13 = -1;
  char *VAR14 = NULL;
  char *VAR15 = NULL;
  bool VAR16;

  

  
  VAR9 = strstr(VAR6, "");
  if(VAR9) {
    VAR10 = VAR9 + 3;
    if(FUN2("", VAR6))
      VAR7 = VAR17;
    else if(FUN2("", VAR6))
      VAR7 = VAR18;
    else if(FUN2("", VAR6))
      VAR7 = VAR19;
    else if(FUN2("", VAR6))
      VAR7 = VAR20;
    else if(FUN2("", VAR6) || FUN2("", VAR6))
      VAR7 = VAR21;
    else if(FUN2("", VAR6))
      ; 
    else {
      
      FUN3(VAR3, "", VAR6);
      return VAR22;
    }
  }
  else
    VAR10 = VAR6; 

#ifdef VAR23
  if(!(VAR24->VAR25 & VAR26))
#endif
    if(VAR7 == VAR17) {
      FUN3(VAR3, ""
                  "", VAR6);
      return VAR27;
    }

  VAR16 = VAR7 == VAR18 ||
              VAR7 == VAR19 ||
              VAR7 == VAR20 ||
              VAR7 == VAR21;

  
  VAR12 = strchr(VAR10, '');
  if(VAR12) {
    CURLcode VAR28 =
      FUN4(VAR10, VAR12 - VAR10,
                               &VAR14, &VAR15, NULL);
    if(VAR28)
      return VAR28;
    VAR10 = VAR12 + 1;
  }

  
  VAR11 = VAR10;

  
  if(*VAR10 == '') {
    char *VAR29 = ++VAR10; 
    while(*VAR29 && (FUN5(*VAR29) || (*VAR29 == '') || (*VAR29 == '')))
      VAR29++;
    if(*VAR29 == '') {
      
      if(FUN6("", VAR29, 3))
        FUN7(VAR3, "");
      VAR29++;
      
      while(*VAR29 && (FUN8(*VAR29) || FUN5(*VAR29) || (*VAR29 == '') ||
                     (*VAR29 == '') || (*VAR29 == '') || (*VAR29 == '')))
        VAR29++;
    }
    if(*VAR29 == '')
      
      *VAR29++ = 0;
    else
      FUN7(VAR3, "");
    VAR11 = VAR29;
    
  }

  
  VAR8 = strchr(VAR11, '');
  if(VAR8) {
    char *VAR30 = NULL;

    *VAR8 = 0x0; 
    VAR8 ++;
    
    VAR13 = FUN9(VAR8, &VAR30, 10);
    if((VAR30 && *VAR30 && (*VAR30 != '') && (*VAR30 != '')) ||
       (VAR13 < 0) || (VAR13 > 65535)) {
      
      FUN7(VAR3, "",
            VAR8);
    }
    else
      VAR5->VAR13 = VAR13;
  }
  else {
    if(VAR10[0]=='') {
      
      FUN10(VAR14);
      FUN10(VAR15);
      return VAR31;
    }

    
    VAR12 = strchr(VAR10, '');
    if(VAR12)
      *VAR12 = ''; 

    if(VAR3->VAR32.VAR33)
      
      VAR13 = VAR3->VAR32.VAR33;
    else {
      if(VAR7 == VAR17)
        VAR13 = VAR34;
      else
        VAR13 = VAR35;
    }
  }

  if(*VAR10) {
    struct VAR36 *VAR37 =
      VAR16 ? &VAR5->VAR38 : &VAR5->VAR39;
    VAR37->VAR7 = VAR7;

    if(VAR14) {
      
      FUN10(VAR37->VAR40);
      VAR37->VAR40 = FUN11(VAR3, VAR14, 0, NULL);
      FUN10(VAR14);

      if(!VAR37->VAR40) {
        FUN10(VAR15);
        return VAR41;
      }

      FUN10(VAR37->VAR42);
      if(VAR15 && strlen(VAR15) < VAR43)
        VAR37->VAR42 = FUN11(VAR3, VAR15, 0, NULL);
      else
        VAR37->VAR42 = strdup("");
      FUN10(VAR15);

      if(!VAR37->VAR42)
        return VAR41;

      VAR5->VAR44.VAR45 = VAR46; 
    }

    if(VAR13 >= 0) {
      VAR37->VAR13 = VAR13;
      if(VAR5->VAR13 < 0 || VAR16 || !VAR5->VAR38.VAR47.VAR48)
        VAR5->VAR13 = VAR13;
    }

    
    FUN10(VAR37->VAR47.VAR48);
    VAR37->VAR47.VAR48 = strdup(VAR10);
    VAR37->VAR47.VAR49 = VAR37->VAR47.VAR48;

    if(!VAR37->VAR47.VAR48)
      return VAR41;
  }

  FUN10(VAR14);
  FUN10(VAR15);

  return VAR50;
}
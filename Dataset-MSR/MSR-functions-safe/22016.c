FUN1(VAR1* VAR2, 
                                     const unsigned char *VAR3, size_t VAR4,
                                     const unsigned char *VAR5, 
                                     const unsigned char *VAR6, 
                                     const char *VAR7)
{
  int VAR8 = 0;
  
  if(VAR6) {
    if(!strcmp((const char*)VAR6, "") || 
       !strcmp((const char*)VAR6, "") ||
       !strcmp((const char*)VAR6, "") ||
       !strcmp((const char*)VAR6, "") ||
       !strcmp((const char*)VAR6, "") ||
       !strcmp((const char*)VAR6, ""))
      VAR8 = 9;
    if(!strcmp((const char*)VAR6, ""))
      VAR8 = 3;
  }
  
  if(VAR5) {
    if(strstr((const char*)VAR5, ""))
      VAR8 += 5;
    else if(!VAR6 && strstr((const char*)VAR5, ""))
      VAR8 += 3;
    else if(!VAR6 && strstr((const char*)VAR5, ""))
      VAR8 += 2;
    else if(!VAR6 && strstr((const char*)VAR5, ""))
      VAR8 += 2;
  }
  
  if(VAR7) {
    if(strstr((const char*)VAR7, ""))
      VAR8 -= 4;
    else if(!strcmp((const char*)VAR7, ""))
      VAR8 += 7;
    else if(!strcmp((const char*)VAR7, ""))
      VAR8 += 5;
  }

  if(VAR3 && VAR4) {
    
#define  FUN2 (FUN3((const char*)VAR3, VAR4, ""VAR9://VAR10.VAR11.VAR12/1999/02/22-VAR13-VAR14-VAR15#") != NULL)
#define  FUN4 (FUN3((const char*)VAR3, VAR4, "") != NULL)
#define  FUN5 (FUN3((const char*)VAR3, VAR4, ""VAR9://VAR10.VAR11.VAR12/1999/02/22-VAR13-VAR14-VAR15#") != NULL)
#define  FUN6 (FUN3((const char*)VAR3, VAR4, "") != NULL)
#define  FUN7 (FUN3((const char*)VAR3, VAR4, "") != NULL)
#define  FUN8 (FUN3((const char*)VAR3, VAR4, ""VAR9://VAR10.VAR11.VAR12/1999/02/22-VAR13-VAR14-VAR15#\"") != NULL)
#define  FUN9 (FUN3((const char*)VAR3, VAR4, ""&VAR13;\"") != NULL)
#define  FUN10 (FUN3((const char*)VAR3, VAR4, "") != NULL)
#define  FUN11 (FUN3((const char*)VAR3, VAR4, "") != NULL)
#define  FUN12 (FUN3((const char*)VAR3, VAR4, "") != NULL)

    if(!VAR16 && !VAR17 &&
       (VAR18 || VAR19 || VAR20 || VAR21 ||
        VAR22 || VAR23 || VAR24 || VAR25)
      ) {
      int VAR26 = (FUN3((const char*)VAR3, VAR4, "") != NULL);
      int VAR27 = (FUN3((const char*)VAR3, VAR4, "") != NULL);
      int VAR28 = (FUN3((const char*)VAR3, VAR4, "") != NULL);

      VAR8 += 7;
      if(VAR26)
        VAR8++;
      if(VAR27)
        VAR8++;
      if(VAR28)
        VAR8++;
    }
  }
  
  return VAR8;
}
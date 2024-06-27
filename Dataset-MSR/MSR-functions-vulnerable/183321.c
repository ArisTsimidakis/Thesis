int main(int argc, char** argv)
{
    
    int VAR1 = FUN1("", VAR2);
    while (VAR1 < 2)
	VAR1 = FUN2(VAR1);
    if (VAR1 > 2)
	close(VAR1);

    if (argc < 8)
    {
        
        
        FUN3("", argv[0]);
    }

    
    if (strchr(argv[1], ''))
    {
        int VAR3;
        for (VAR3 = 1; argv[VAR3]; VAR3++)
        {
            FUN4(argv[VAR3], '')[0] = '';
        }
    }

    VAR4 = VAR5;

    
    FUN5();
    
    bool VAR6;
    bool VAR7;
    {
        VAR8 *VAR9 = FUN6();
        FUN7("", VAR9);
        const char *VAR10;
        VAR10 = FUN8(VAR9, "");
        VAR6 = VAR10 && FUN9(VAR10);
        VAR10 = FUN8(VAR9, "");
        VAR7 = VAR10 && FUN9(VAR10);
        VAR10 = FUN8(VAR9, "");
        if (VAR10)
            VAR11 = FUN10(VAR10);
        FUN11(VAR9);
    }

    VAR12 = 0;
    const char* VAR13 = argv[1];
    int VAR14 = FUN10(VAR13);
    off_t VAR15 = FUN12(argv[2], NULL, 10);
    if (VAR15 < 0) 
    {
        
        VAR15 = ~((VAR16)1 << (sizeof(VAR16)*8-1));
    }
    const char *VAR17 = argv[3];
    pid_t VAR18 = FUN10(argv[3]);
    uid_t VAR19 = FUN10(argv[4]);
    if (VAR12 || VAR18 <= 0)
    {
        FUN13("", argv[3], argv[2]);
    }

    {
        char *VAR20 = FUN14(VAR21"");
        
        if (VAR20 && VAR20[0] != '')
            VAR22 = VAR20;
        else
            free(VAR20);
    }

    struct utsname VAR23;
    if (!argv[8]) 
    {
        FUN15(&VAR23);
        argv[8] = VAR23.VAR24;
    }

    char VAR25[VAR26];

    int VAR27 = -1;
    char *VAR28 = FUN16(VAR18, VAR7 ? &VAR27 : NULL);
    if (VAR28 && strstr(VAR28, ""))
    {
        FUN3("",
                        (long)VAR18, VAR28);
    }

    VAR29 = FUN17(VAR18);
    FUN18("", VAR29);

    sprintf(VAR25, "", (long)VAR18);
    VAR30 = FUN19(VAR25,  NULL);

    uid_t VAR31 = VAR19;
    uid_t VAR32 = FUN20();
    int VAR33 = FUN21();
    if (VAR32 != VAR19)
    {
        
        VAR31 = 0;
        if (VAR33 == VAR34)
            VAR31 = VAR32;
        else
        {
            VAR35 = VAR36;
            VAR37 = 1;
         }
     }
 






     
     if (VAR6 && VAR15 != 0)
         
        VAR38 = FUN22(VAR19, VAR31, VAR18, &argv[1]);

    if (VAR28 == NULL)
    {
        
        FUN23("", (long)VAR18);
        goto VAR39;
    }

    const char *VAR40 = NULL;
    switch (VAR14)
    {
        case VAR41 : VAR40 = "" ; break;
        case VAR42 : VAR40 = "" ; break;
        case VAR43: VAR40 = ""; break;
        case VAR44 : VAR40 = "" ; break; 
        case VAR45: VAR40 = ""; break; 
    
    
        case VAR46: VAR40 = ""; break; 
    
      
      
      
      
        default: goto VAR39; 
    }

    if (!FUN24())
    {
        
        FUN25(""
            ""
            ""
        );
        goto VAR39;
    }

    if (VAR47 > 0)
    {
        
        if (FUN26(VAR47, VAR48))
            goto VAR39;
    }

    
    snprintf(VAR25, sizeof(VAR25), "", VAR48);
    if (FUN27(VAR25, VAR28))
    {
        
        goto VAR39;
    }

    const char *VAR49 = strrchr(VAR28, '');
    if (VAR49 && FUN28(++VAR49, "", 4) == 0)
    {
        
        if (snprintf(VAR25, sizeof(VAR25), "", VAR48, VAR49) >= sizeof(VAR25))
            FUN3("", VAR25);

        int VAR50 = FUN29(VAR25, VAR51 | VAR52 | VAR53, 0600);
        off_t VAR54 = FUN30(VAR55, VAR50, VAR56);
        if (VAR54 < 0 || FUN31(VAR50) != 0)
        {
            unlink(VAR25);
            
            FUN3("", VAR25);
        }
        FUN25("", (long)VAR18, VAR28, VAR25, (long long)VAR54);
        if (VAR57 != NULL)
            FUN32(VAR57);
        return 0;
    }

    unsigned VAR58 = snprintf(VAR25, sizeof(VAR25), "",
            VAR48, FUN33(NULL), (long)VAR18);
    if (VAR58 >= (sizeof(VAR25) - sizeof(""VAR59)))
    {
         goto VAR39;
     }
 

    

    VAR60 = FUN34(VAR25, VAR31, VAR61, 0);


     if (VAR60)
     {
         char *VAR62 = FUN35(VAR18);
 


         FUN36(VAR60, VAR31, NULL);
 
         char VAR63[sizeof("") + sizeof(long)*3];
        int VAR64 = sprintf(VAR63, "", (long)VAR18);
        VAR64 -= strlen("");
        char *VAR65 = FUN37(VAR60->VAR66, "");
        char *VAR67 = strrchr(VAR65, '') + 1;

        
        
        

        strcpy(VAR63 + VAR64, "");
        strcpy(VAR67, VAR68);
        FUN38(VAR63, VAR65, 0640, VAR60->VAR69, VAR60->VAR70, VAR71, VAR51 | VAR52 | VAR53 | VAR36);

        strcpy(VAR63 + VAR64, "");
        strcpy(VAR67, VAR72);
        FUN38(VAR63, VAR65, 0640, VAR60->VAR69, VAR60->VAR70, VAR71, VAR51 | VAR52 | VAR53 | VAR36);

        strcpy(VAR63 + VAR64, "");
        strcpy(VAR67, VAR73);
        FUN38(VAR63, VAR65, 0640, VAR60->VAR69, VAR60->VAR70, VAR71, VAR51 | VAR52 | VAR53 | VAR36);

        strcpy(VAR67, VAR74);
        FUN39(VAR65, VAR63, VAR64, VAR60->VAR69, VAR60->VAR70);

        free(VAR65);

        FUN40(VAR60, VAR75, "");
        FUN40(VAR60, VAR76, "");
        FUN40(VAR60, VAR77, VAR28);
        FUN40(VAR60, VAR78, VAR17);
        FUN40(VAR60, VAR79, VAR30);
        if (VAR29)
            FUN40(VAR60, VAR80, VAR29);
        if (VAR62)
        {
            if (strcmp(VAR62, "") != 0)
                FUN40(VAR60, VAR81, VAR62);
        }

        char *VAR82 = FUN41("",
                                 VAR49, VAR40 ? VAR40 : VAR13);
        FUN40(VAR60, VAR83, VAR82);
        free(VAR82);

        char *VAR84 = FUN42(VAR18);
        FUN40(VAR60, VAR85, VAR84 ? : "");
        free(VAR84);

        char *VAR86 = FUN43(VAR18);
        FUN40(VAR60, VAR87, VAR86 ? : "");
        free(VAR86);

        char *VAR88 = FUN14("");
        if (VAR88)
        {
            if (strcmp(VAR88, "") != 0)
                FUN40(VAR60, "", VAR88);
            free(VAR88);
        }

        FUN40(VAR60, VAR89, VAR90);

        if (VAR27 > 0)
        {
            strcpy(VAR25 + VAR58, ""VAR91);
            int VAR92 = FUN44(VAR25);
            off_t VAR93 = FUN30(VAR27, VAR92, VAR56);
            if (FUN31(VAR92) != 0 || close(VAR92) != 0 || VAR93 < 0)
            {
                FUN45(VAR60);
                FUN3("", VAR25);
            }
            close(VAR27);
        }

        strcpy(VAR25 + VAR58, ""VAR59);
        int VAR50 = FUN44(VAR25);

        
        off_t VAR54 = FUN46(VAR55, VAR50, VAR38, VAR15);
        if (FUN31(VAR50) != 0 || close(VAR50) != 0 || VAR54 < 0)
        {
            unlink(VAR25);
            FUN45(VAR60);
            if (VAR38 >= 0)
                FUN47(FUN48(VAR57), VAR22, 0);
            
            FUN3("", VAR25);
        }
        if (VAR38 >= 0
            
         && (FUN31(VAR38) != 0 || close(VAR38) != 0
            
            || (VAR15 == 0  || VAR54 > VAR15)
            )
        ) {
            
            FUN47(FUN48(VAR57), VAR22, 0);
        }


#if 0
        
        {
            char *VAR94 = FUN41("", (long)VAR18);
            int VAR95 = open(VAR94, VAR71);
            free(VAR94);

            
            if (VAR95 < 0)
            {
                VAR94 = FUN41("", VAR29, (long)VAR18);
                VAR95 = open(VAR94, VAR71);
                free(VAR94);
            }

            if (VAR95 >= 0)
            {
                strcpy(VAR25 + VAR58, "");
                int VAR92 = FUN44(VAR25);
                off_t VAR93 = FUN30(VAR95, VAR92, VAR56);
                if (close(VAR92) != 0 || VAR93 < 0)
                {
                    FUN45(VAR60);
                    FUN3("", VAR25);
                }
                close(VAR95);
            }
        }
#endif

        
        FUN49(VAR60);

        
        FUN50(VAR60);
        VAR25[VAR58] = ''; 
        char *VAR96 = FUN51(VAR25, VAR58 - (sizeof("")-1));
        if (FUN52(VAR25, VAR96) == 0)
            strcpy(VAR25, VAR96);
        free(VAR96);

        FUN25("", (long)VAR18, VAR28, VAR25, (long long)VAR54);

        FUN53(VAR25);

        
        if (VAR47 > 0)
        {
            
            unsigned VAR97 = VAR47 + VAR47 / 4;
            VAR97 |= 63;
            FUN54(VAR48, VAR97 * (double)(1024*1024), VAR25);
        }

        free(VAR62);
        if (VAR57 != NULL)
            FUN32(VAR57);
        return 0;
    }

    
 VAR39:
    if (VAR38 >= 0)
    {
        off_t VAR54 = FUN55(VAR55, VAR38, VAR15, VAR56);
        if (FUN31(VAR38) != 0 || close(VAR38) != 0 || VAR54 < 0)
        {
            
            FUN56("", VAR22, VAR29);
            FUN47(FUN48(VAR57), VAR22, 0);
            if (VAR57 != NULL)
                FUN32(VAR57);
            return 1;
        }
        if (VAR15 == 0 || VAR54 > VAR15)
        {
            FUN47(FUN48(VAR57), VAR22, 0);
            if (VAR57 != NULL)
                FUN32(VAR57);
            return 1;
        }
        FUN25("", (long)VAR18, VAR22, VAR29, (long long)VAR54);
    }

    if (VAR57 != NULL)
        FUN32(VAR57);
    return 0;
}
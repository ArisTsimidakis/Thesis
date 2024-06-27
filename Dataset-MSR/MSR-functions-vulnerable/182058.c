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
        {
            VAR31 = VAR32;
        }
    }

    
    if (VAR6 && VAR15 != 0)
        
        VAR35 = FUN22(VAR19, VAR31, VAR18, &argv[1]);

    if (VAR28 == NULL)
    {
        
        FUN23("", (long)VAR18);
        goto VAR36;
    }

    const char *VAR37 = NULL;
    switch (VAR14)
    {
        case VAR38 : VAR37 = "" ; break;
        case VAR39 : VAR37 = "" ; break;
        case VAR40: VAR37 = ""; break;
        case VAR41 : VAR37 = "" ; break; 
        case VAR42: VAR37 = ""; break; 
    
    
        case VAR43: VAR37 = ""; break; 
    
      
      
      
      
        default: goto VAR36; 
    }

    if (!FUN24())
    {
        
        FUN25(""
            ""
            ""
        );
        goto VAR36;
    }

    if (VAR44 > 0)
    {
        
        if (FUN26(VAR44, VAR45))
            goto VAR36;
    }

    
    snprintf(VAR25, sizeof(VAR25), "", VAR45);
    if (FUN27(VAR25, VAR28))
    {
        
        goto VAR36;
    }

    const char *VAR46 = strrchr(VAR28, '');
    if (VAR46 && FUN28(++VAR46, "", 4) == 0)
    {
        
        snprintf(VAR25, sizeof(VAR25), "", VAR45, VAR46);
        int VAR47 = FUN29(VAR25, VAR48 | VAR49 | VAR50, 0600);
        off_t VAR51 = FUN30(VAR52, VAR47, VAR53);
        if (VAR51 < 0 || FUN31(VAR47) != 0)
        {
            unlink(VAR25);
            
            FUN3("", VAR25);
        }
        FUN25("", (long)VAR18, VAR28, VAR25, (long long)VAR51);
        return 0;
    }

    unsigned VAR54 = snprintf(VAR25, sizeof(VAR25), "",
            VAR45, FUN32(NULL), (long)VAR18);
    if (VAR54 >= (sizeof(VAR25) - sizeof(""VAR55)))
    {
        goto VAR36;
    }

    
    VAR56 = FUN33(VAR25, VAR31, VAR57);
    if (VAR56)
    {
        char *VAR58 = FUN34(VAR18);

        FUN35(VAR56, VAR31, (VAR58 && strcmp(VAR58, "") != 0) ? VAR58 : NULL);

        char VAR59[sizeof("") + sizeof(long)*3];
        int VAR60 = sprintf(VAR59, "", (long)VAR18);
        VAR60 -= strlen("");
        char *VAR61 = FUN36(VAR56->VAR62, "");
        char *VAR63 = strrchr(VAR61, '') + 1;

        
        
        

        strcpy(VAR59 + VAR60, "");
        strcpy(VAR63, VAR64);
        FUN37(VAR59, VAR61, 0640, VAR56->VAR65, VAR56->VAR66, VAR67, VAR48 | VAR49 | VAR50 | VAR68);

        strcpy(VAR59 + VAR60, "");
        strcpy(VAR63, VAR69);
        FUN37(VAR59, VAR61, 0640, VAR56->VAR65, VAR56->VAR66, VAR67, VAR48 | VAR49 | VAR50 | VAR68);

        strcpy(VAR59 + VAR60, "");
        strcpy(VAR63, VAR70);
        FUN37(VAR59, VAR61, 0640, VAR56->VAR65, VAR56->VAR66, VAR67, VAR48 | VAR49 | VAR50 | VAR68);

        strcpy(VAR63, VAR71);
        FUN38(VAR61, VAR59, VAR60, VAR56->VAR65, VAR56->VAR66);

        free(VAR61);

        FUN39(VAR56, VAR72, "");
        FUN39(VAR56, VAR73, "");
        FUN39(VAR56, VAR74, VAR28);
        FUN39(VAR56, VAR75, VAR17);
        FUN39(VAR56, VAR76, VAR30);
        if (VAR29)
            FUN39(VAR56, VAR77, VAR29);
        if (VAR58)
        {
            if (strcmp(VAR58, "") != 0)
                FUN39(VAR56, VAR78, VAR58);
        }

        char *VAR79 = FUN40("",
                                 VAR46, VAR37 ? VAR37 : VAR13);
        FUN39(VAR56, VAR80, VAR79);
        free(VAR79);

        char *VAR81 = FUN41(VAR18);
        FUN39(VAR56, VAR82, VAR81 ? : "");
        free(VAR81);

        char *VAR83 = FUN42(VAR18);
        FUN39(VAR56, VAR84, VAR83 ? : "");
        free(VAR83);

        char *VAR85 = FUN14("");
        if (VAR85)
        {
            if (strcmp(VAR85, "") != 0)
                FUN39(VAR56, "", VAR85);
            free(VAR85);
        }

        FUN39(VAR56, VAR86, VAR87);

        if (VAR27 > 0)
        {
            strcpy(VAR25 + VAR54, ""VAR88);
            int VAR89 = FUN43(VAR25);
            off_t VAR90 = FUN30(VAR27, VAR89, VAR53);
            if (FUN31(VAR89) != 0 || close(VAR89) != 0 || VAR90 < 0)
            {
                FUN44(VAR56);
                FUN3("", VAR25);
            }
            close(VAR27);
        }

        strcpy(VAR25 + VAR54, ""VAR55);
        int VAR47 = FUN43(VAR25);

        
        off_t VAR51 = FUN45(VAR52, VAR47, VAR35, VAR15);
        if (FUN31(VAR47) != 0 || close(VAR47) != 0 || VAR51 < 0)
        {
            unlink(VAR25);
            FUN44(VAR56);
            if (VAR35 >= 0)
            {
                FUN46(VAR29);
                unlink(VAR22);
            }
            
            FUN3("", VAR25);
        }
        if (VAR35 >= 0
            
         && (FUN31(VAR35) != 0 || close(VAR35) != 0
            
            || (VAR15 == 0  || VAR51 > VAR15)
            )
        ) {
            
            FUN46(VAR29);
             unlink(VAR22);
         }
 




         
        {
            char *VAR91 = FUN40("", (long)VAR18);
            int VAR92 = open(VAR91, VAR67);
            free(VAR91);

            
            if (VAR92 < 0)
            {
                VAR91 = FUN40("", VAR29, (long)VAR18);
                VAR92 = open(VAR91, VAR67);
                free(VAR91);
            }

            if (VAR92 >= 0)
            {
                strcpy(VAR25 + VAR54, "");
                int VAR89 = FUN43(VAR25);
                off_t VAR90 = FUN30(VAR92, VAR89, VAR53);
                if (close(VAR89) != 0 || VAR90 < 0)
                {
                    FUN44(VAR56);
                    FUN3("", VAR25);
                }
                 close(VAR92);
             }
         }


 
         
        FUN47(VAR56);
        VAR25[VAR54] = ''; 
        char *VAR93 = FUN48(VAR25, VAR54 - (sizeof("")-1));
        if (FUN49(VAR25, VAR93) == 0)
            strcpy(VAR25, VAR93);
        free(VAR93);

        FUN25("", (long)VAR18, VAR28, VAR25, (long long)VAR51);

        FUN50(VAR25);

        
        if (VAR44 > 0)
        {
            
            unsigned VAR94 = VAR44 + VAR44 / 4;
            VAR94 |= 63;
            FUN51(VAR45, VAR94 * (double)(1024*1024), VAR25);
        }

        free(VAR58);
        return 0;
    }

    
 VAR36:
    if (VAR35 >= 0)
    {
        off_t VAR51 = FUN52(VAR52, VAR35, VAR15, VAR53);
        if (FUN31(VAR35) != 0 || close(VAR35) != 0 || VAR51 < 0)
        {
            
            FUN53("", VAR95);
            FUN46(VAR29);
            unlink(VAR22);
            return 1;
        }
        if (VAR15 == 0 || VAR51 > VAR15)
        {
            FUN46(VAR29);
            unlink(VAR22);
            return 1;
        }
        FUN25("", (long)VAR18, VAR95, (long long)VAR51);
    }

    return 0;
}
int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5;
    long VAR6;
    unsigned long VAR7;
    unsigned char *VAR8;
#ifndef VAR9
    VAR10 *VAR11 = NULL;
    VAR12 *VAR13 = NULL;
#endif
#ifndef VAR14
    VAR15 *VAR16 = NULL;
    VAR17 *VAR18, *VAR19 = NULL;
#endif
#ifndef VAR20
    KSSL_ERR VAR21;
#endif                          

#ifndef VAR22
    VAR23 *VAR24 = NULL;
    VAR12 *VAR25 = NULL;
    VAR26 *VAR27 = NULL;
    VAR28 *VAR29 = NULL;
#endif

    VAR6 = VAR2->VAR30->FUN2(VAR2,
                                   VAR31,
                                   VAR32,
                                   VAR33, 2048, &VAR5);

    if (!VAR5)
        return ((int)VAR6);
    VAR8 = (unsigned char *)VAR2->VAR34;

    VAR7 = VAR2->VAR35->VAR36.VAR37->VAR38;

#ifndef VAR9
    if (VAR7 & VAR39) {
        unsigned char VAR40[VAR41];
        int VAR42;
        unsigned char VAR43, VAR44;
        size_t VAR45;

        
        if (VAR2->VAR35->VAR36.VAR46) {
            if ((VAR2->VAR47 != NULL) && (VAR2->VAR47->VAR48 != NULL))
                VAR11 = VAR2->VAR47->VAR48;
            
            if (VAR11 == NULL) {
                VAR4 = VAR49;
                FUN3(VAR50,
                       VAR51);
                goto VAR52;

            }
        } else {
            VAR13 = VAR2->VAR47->VAR53[VAR54].VAR55;
            if ((VAR13 == NULL) ||
                (VAR13->VAR56 != VAR57) || (VAR13->VAR13.VAR11 == NULL)) {
                VAR4 = VAR49;
                FUN3(VAR50,
                       VAR58);
                goto VAR52;
            }
            VAR11 = VAR13->VAR13.VAR11;
        }

        
        if (VAR2->VAR59 > VAR60 && VAR2->VAR59 != VAR61) {
            FUN4(VAR8, VAR3);
            if (VAR6 != VAR3 + 2) {
                if (!(VAR2->VAR62 & VAR63)) {
                    VAR4 = VAR64;
                    FUN3(VAR50,
                           VAR65);
                    goto VAR52;
                } else
                    VAR8 -= 2;
            } else
                VAR6 = VAR3;
        }

        
        if (VAR6 < VAR41) {
            VAR4 = VAR66;
            FUN3(VAR50,
                   VAR65);
            goto VAR52;
        }

        

        
        if (FUN5(VAR40,
                              sizeof(VAR40)) <= 0)
            goto VAR67;
        VAR42 =
            FUN6((int)VAR6, VAR8, VAR8, VAR11, VAR68);
        FUN7();

        
        VAR43 =
            FUN8(VAR42, VAR41);

        
        VAR44 =
            FUN9(VAR8[0], (unsigned)(VAR2->VAR69 >> 8));
        VAR44 &=
            FUN9(VAR8[1], (unsigned)(VAR2->VAR69 & 0xff));

        
        if (VAR2->VAR62 & VAR70) {
            unsigned char VAR71;
            VAR71 =
                FUN9(VAR8[0], (unsigned)(VAR2->VAR59 >> 8));
            VAR71 &=
                FUN9(VAR8[1], (unsigned)(VAR2->VAR59 & 0xff));
            VAR44 |= VAR71;
        }

        
        VAR43 &= VAR44;

        
        for (VAR45 = 0; VAR45 < sizeof(VAR40); VAR45++) {
            VAR8[VAR45] = FUN10(VAR43, VAR8[VAR45],
                                          VAR40[VAR45]);
        }

        VAR2->VAR72->VAR73 =
            VAR2->VAR30->VAR74->FUN11(VAR2,
                                                        VAR2->
                                                        VAR72->VAR75,
                                                        VAR8,
                                                        sizeof
                                                        (VAR40));
        FUN12(VAR8, sizeof(VAR40));
    } else
#endif
#ifndef VAR14
    if (VAR7 & (VAR76 | VAR77 | VAR78)) {
        int VAR79 = -1;
        VAR12 *VAR80 = NULL;
        if (VAR6 > 1) {
            FUN4(VAR8, VAR3);
        } else {
            if (VAR7 & VAR81) {
                VAR4 = VAR49;
                FUN3(VAR50,
                       VAR82);
                goto VAR52;
            }
            VAR3 = 0;
        }
        if (VAR6 && VAR6 != VAR3 + 2) {
            if (!(VAR2->VAR62 & VAR83)) {
                FUN3(VAR50,
                       VAR82);
                goto VAR67;
            } else {
                VAR8 -= 2;
                VAR3 = (int)VAR6;
            }
        }
        if (VAR7 & VAR77)
            VAR79 = VAR84;
        else if (VAR7 & VAR78)
            VAR79 = VAR85;
        if (VAR79 >= 0) {
            VAR80 = VAR2->VAR47->VAR53[VAR79].VAR55;
            if ((VAR80 == NULL) ||
                (VAR80->VAR56 != VAR86) || (VAR80->VAR13.VAR87 == NULL)) {
                VAR4 = VAR49;
                FUN3(VAR50,
                       VAR58);
                goto VAR52;
            }
            VAR18 = VAR80->VAR13.VAR87;
        } else if (VAR2->VAR35->VAR36.VAR87 == NULL) {
            VAR4 = VAR49;
            FUN3(VAR50,
                   VAR88);
            goto VAR52;
        } else
            VAR18 = VAR2->VAR35->VAR36.VAR87;

        if (VAR6 == 0L) {
            
            VAR12 *VAR89 = FUN13(VAR2->VAR72->VAR90);
            if (VAR89) {
                if (FUN14(VAR89, VAR80) == 1)
                    VAR19 = FUN15(VAR89);
            }
            if (VAR19 == NULL) {
                VAR4 = VAR49;
                FUN3(VAR50,
                       VAR88);
                goto VAR52;
            }
            FUN16(VAR89);
            VAR16 = VAR19->VAR91;
        } else
            VAR16 = FUN17(VAR8, VAR3, NULL);
        if (VAR16 == NULL) {
            FUN3(VAR50, VAR92);
            goto VAR67;
        }

        VAR3 = FUN18(VAR8, VAR16, VAR18);

        if (VAR3 <= 0) {
            FUN3(VAR50, VAR93);
            FUN19(VAR16);
            goto VAR67;
        }

        FUN20(VAR2->VAR35->VAR36.VAR87);
        VAR2->VAR35->VAR36.VAR87 = NULL;
        if (VAR19)
            FUN20(VAR19);
        else
            FUN19(VAR16);
        VAR16 = NULL;
        VAR2->VAR72->VAR73 =
            VAR2->VAR30->VAR74->FUN11(VAR2,
                                                        VAR2->
                                                        VAR72->VAR75,
                                                        VAR8, VAR3);
        FUN12(VAR8, VAR3);
        if (VAR19)
            return 2;
    } else
#endif
#ifndef VAR20
    if (VAR7 & VAR94) {
        krb5_error_code VAR95;
        krb5_data VAR96;
        krb5_data VAR97;
        krb5_data VAR98;
        VAR99 *VAR100 = VAR2->VAR100;
        EVP_CIPHER_CTX VAR101;
        const VAR102 *VAR103 = NULL;
        unsigned char VAR104[VAR105];
        unsigned char VAR106[VAR41 + VAR107];
        int VAR108, VAR109;
        krb5_timestamp VAR110 = 0;
        krb5_ticket_times VAR111;
        int VAR112 = 0;

        FUN21(&VAR101);

        if (!VAR100)
            VAR100 = FUN22();

        FUN4(VAR8, VAR3);
        VAR96.VAR113 = VAR3;

        if (VAR6 < (long)(VAR96.VAR113 + 6)) {
            FUN3(VAR50,
                   VAR114);
            goto VAR67;
        }

        VAR96.VAR115 = (char *)VAR8;
        VAR8 += VAR96.VAR113;

        FUN4(VAR8, VAR3);
        VAR97.VAR113 = VAR3;

        if (VAR6 < (long)(VAR96.VAR113 + VAR97.VAR113 + 6)) {
            FUN3(VAR50,
                   VAR114);
            goto VAR67;
        }

        VAR97.VAR115 = (char *)VAR8;
        VAR8 += VAR97.VAR113;

        FUN4(VAR8, VAR3);
        VAR98.VAR113 = VAR3;
        VAR98.VAR115 = (char *)VAR8;
        VAR8 += VAR98.VAR113;

        
        if (VAR98.VAR113 > sizeof VAR106) {
            FUN3(VAR50,
                   VAR114);
            goto VAR67;
        }

        if (VAR6 != (long)(VAR96.VAR113 + VAR97.VAR113 +
                        VAR98.VAR113 + 6)) {
            FUN3(VAR50,
                   VAR114);
            goto VAR67;
        }

        if ((VAR95 = FUN23(VAR100, &VAR96, &VAR111,
                                    &VAR21)) != 0) {
# ifdef VAR116
            fprintf(VAR117, "",
                    VAR95, VAR21.VAR118);
            if (VAR21.VAR119)
                fprintf(VAR117, "", VAR21.VAR119);
# endif                         
            FUN3(VAR50, VAR21.VAR118);
            goto VAR67;
        }

        
        if ((VAR95 = FUN24(VAR100, &VAR97,
                                         &VAR110, &VAR21)) != 0) {
# ifdef VAR116
            fprintf(VAR117, "",
                    VAR95, VAR21.VAR118);
            if (VAR21.VAR119)
                fprintf(VAR117, "", VAR21.VAR119);
# endif                         
            FUN3(VAR50, VAR21.VAR118);
            goto VAR67;
        }

        if ((VAR95 = FUN25(VAR110, &VAR111)) != 0) {
            FUN3(VAR50, VAR95);
            goto VAR67;
        }
# ifdef VAR116
        FUN26(VAR100);
# endif                         

        VAR103 = FUN27(VAR100->VAR120);
        if (VAR103 == NULL)
            goto VAR67;

        memset(VAR104, 0, sizeof VAR104); 

        if (!FUN28(&VAR101, VAR103, NULL, VAR100->VAR121, VAR104)) {
            FUN3(VAR50,
                   VAR122);
            goto VAR67;
        }
        if (!FUN29(&VAR101, VAR106, &VAR109,
                               (unsigned char *)VAR98.VAR115, VAR98.VAR113))
        {
            FUN3(VAR50,
                   VAR122);
            VAR112 = 1;
            goto VAR123;
        }
        if (VAR109 > VAR41) {
            FUN3(VAR50,
                   VAR114);
            VAR112 = 1;
            goto VAR123;
        }
        if (!FUN30(&VAR101, &(VAR106[VAR109]), &VAR108)) {
            FUN3(VAR50,
                   VAR122);
            VAR112 = 1;
            goto VAR123;
        }
        VAR109 += VAR108;
        if (VAR109 > VAR41) {
            FUN3(VAR50,
                   VAR114);
            VAR112 = 1;
            goto VAR123;
        }
        if (!((VAR106[0] == (VAR2->VAR69 >> 8))
              && (VAR106[1] == (VAR2->VAR69 & 0xff)))) {
            
            if (!(VAR2->VAR62 & VAR70)) {
                FUN3(VAR50,
                       VAR64);
                VAR112 = 1;
                goto VAR123;
            }
        }

        FUN31(&VAR101);

        VAR2->VAR72->VAR73 =
            VAR2->VAR30->VAR74->FUN11(VAR2,
                                                        VAR2->
                                                        VAR72->VAR75,
                                                        VAR106, VAR109);

        if (VAR100->VAR124) {
            size_t VAR125 = strlen(VAR100->VAR124);
            if (VAR125 < VAR126) {
                VAR2->VAR72->VAR127 = VAR125;
                memcpy(VAR2->VAR72->VAR128, VAR100->VAR124,
                       VAR125);
            }
        }

        

 VAR123:
        FUN12(VAR106, sizeof(VAR106));
        if (VAR112)
            goto VAR67;
    } else
#endif                          

#ifndef VAR22
    if (VAR7 & (VAR129 | VAR130 | VAR131)) {
        int VAR132 = 1;
        int VAR133 = 0;
        const VAR23 *VAR134;
        const VAR135 *VAR136;
        const VAR15 *VAR137;

        
        if ((VAR24 = FUN32()) == NULL) {
            FUN3(VAR50, VAR138);
            goto VAR67;
        }

        
        if (VAR7 & (VAR130 | VAR131)) {
            
            VAR134 = VAR2->VAR47->VAR53[VAR139].VAR55->VAR13.VAR140;
        } else {
            
            VAR134 = VAR2->VAR35->VAR36.VAR141;
        }

        VAR136 = FUN33(VAR134);
        VAR137 = FUN34(VAR134);

        if (!FUN35(VAR24, VAR136) ||
            !FUN36(VAR24, VAR137)) {
            FUN3(VAR50, VAR142);
            goto VAR67;
        }

        
        if ((VAR27 = FUN37(VAR136)) == NULL) {
            FUN3(VAR50, VAR138);
            goto VAR67;
        }

        if (VAR6 == 0L) {
            

            if (VAR7 & VAR129) {
                VAR4 = VAR49;
                FUN3(VAR50,
                       VAR143);
                goto VAR52;
            }
            if (((VAR25 = FUN13(VAR2->VAR72->VAR90))
                 == NULL) || (VAR25->VAR56 != VAR144)) {
                
                VAR4 = VAR49;
                FUN3(VAR50,
                       VAR145);
                goto VAR52;
            }

            if (FUN38(VAR27,
                              FUN39(VAR25->
                                                     VAR13.VAR140)) == 0) {
                FUN3(VAR50, VAR142);
                goto VAR67;
            }
            VAR132 = 2;            
        } else {
            
            if ((VAR29 = FUN40()) == NULL) {
                FUN3(VAR50,
                       VAR138);
                goto VAR67;
            }

            
            VAR3 = *VAR8;
            VAR8 += 1;
            if (VAR6 != 1 + VAR3) {
                FUN3(VAR50, VAR142);
                goto VAR67;
            }
            if (FUN41(VAR136, VAR27, VAR8, VAR3, VAR29) == 0) {
                FUN3(VAR50, VAR142);
                goto VAR67;
            }
            
            VAR8 = (unsigned char *)VAR2->VAR146->VAR115;
        }

        
        VAR133 = FUN42(VAR136);
        if (VAR133 <= 0) {
            FUN3(VAR50, VAR147);
            goto VAR67;
        }
        VAR3 = FUN43(VAR8, (VAR133 + 7) / 8, VAR27, VAR24,
                             NULL);
        if (VAR3 <= 0) {
            FUN3(VAR50, VAR147);
            goto VAR67;
        }

        FUN16(VAR25);
        FUN44(VAR27);
        FUN45(VAR24);
        FUN46(VAR29);
        FUN45(VAR2->VAR35->VAR36.VAR141);
        VAR2->VAR35->VAR36.VAR141 = NULL;

        
        VAR2->VAR72->VAR73 =
            VAR2->VAR30->VAR74->FUN11(VAR2,
                                                        VAR2->
                                                        VAR72->VAR75,
                                                        VAR8, VAR3);

        FUN12(VAR8, VAR3);
        return (VAR132);
    } else
#endif
#ifndef VAR148
    if (VAR7 & VAR149) {
        unsigned char *VAR150 = NULL;
        unsigned char VAR151[VAR152 * 2 + 4];
        unsigned int VAR153 = 0, VAR154 = 0;
        int VAR155 = 1;
        char VAR156[VAR157 + 1];

        VAR4 = VAR49;

        FUN4(VAR8, VAR3);
        if (VAR6 != VAR3 + 2) {
            FUN3(VAR50, VAR158);
            goto VAR155;
        }
        if (VAR3 > VAR157) {
            FUN3(VAR50,
                   VAR114);
            goto VAR155;
        }
        if (VAR2->VAR159 == NULL) {
            FUN3(VAR50,
                   VAR160);
            goto VAR155;
        }

        
        memcpy(VAR156, VAR8, VAR3);
        memset(VAR156 + VAR3, 0, VAR157 + 1 - VAR3);
        VAR154 = VAR2->FUN47(VAR2, VAR156,
                                         VAR151,
                                         sizeof(VAR151));
        FUN12(VAR156, VAR157 + 1);

        if (VAR154 > VAR152) {
            FUN3(VAR50, VAR161);
            goto VAR155;
        } else if (VAR154 == 0) {
            
            FUN3(VAR50,
                   VAR162);
            VAR4 = VAR163;
            goto VAR155;
        }

        
        VAR153 = 2 + VAR154 + 2 + VAR154;
        VAR150 = VAR151;
        memmove(VAR151 + VAR154 + 4, VAR151, VAR154);
        FUN48(VAR154, VAR150);
        memset(VAR150, 0, VAR154);
        VAR150 += VAR154;
        FUN48(VAR154, VAR150);
 
         if (VAR2->VAR72->VAR164 != NULL)
             FUN49(VAR2->VAR72->VAR164);

        VAR2->VAR72->VAR164 = FUN50((char *)VAR8);


         if (VAR2->VAR72->VAR164 == NULL) {
             FUN3(VAR50, VAR138);
             goto VAR155;
        }

        if (VAR2->VAR72->VAR165 != NULL)
            FUN49(VAR2->VAR72->VAR165);
        VAR2->VAR72->VAR165 = FUN50(VAR2->VAR166->VAR165);
        if (VAR2->VAR166->VAR165 != NULL &&
            VAR2->VAR72->VAR165 == NULL) {
            FUN3(VAR50, VAR138);
            goto VAR155;
        }

        VAR2->VAR72->VAR73 =
            VAR2->VAR30->VAR74->FUN11(VAR2,
                                                        VAR2->
                                                        VAR72->VAR75,
                                                        VAR151,
                                                        VAR153);
        VAR155 = 0;
 VAR155:
        FUN12(VAR151, sizeof(VAR151));
        if (VAR155 != 0)
            goto VAR52;
    } else
#endif
#ifndef VAR167
    if (VAR7 & VAR168) {
        int VAR169;

        FUN4(VAR8, VAR3);
        VAR169 = VAR3 + 2;
        if (VAR169 > VAR6) {
            VAR4 = VAR64;
            FUN3(VAR50,
                   VAR170);
            goto VAR52;
        }
        if (!(VAR2->VAR171.VAR172 = FUN17(VAR8, VAR3, NULL))) {
            FUN3(VAR50, VAR173);
            goto VAR67;
        }
        if (FUN51(VAR2->VAR171.VAR172, VAR2->VAR171.VAR174) >= 0
            || FUN52(VAR2->VAR171.VAR172)) {
            VAR4 = VAR175;
            FUN3(VAR50,
                   VAR176);
            goto VAR52;
        }
        if (VAR2->VAR72->VAR177 != NULL)
            FUN49(VAR2->VAR72->VAR177);
        VAR2->VAR72->VAR177 = FUN50(VAR2->VAR171.VAR178);
        if (VAR2->VAR72->VAR177 == NULL) {
            FUN3(VAR50, VAR138);
            goto VAR67;
        }

        if ((VAR2->VAR72->VAR73 =
             FUN53(VAR2,
                                               VAR2->VAR72->VAR75)) < 0) {
            FUN3(VAR50, VAR161);
            goto VAR67;
        }

        VAR8 += VAR3;
    } else
#endif                          
    if (VAR7 & VAR179) {
        int VAR132 = 0;
        VAR180 *VAR181;
        VAR12 *VAR182 = NULL, *VAR183 = NULL;
        unsigned char VAR184[32], *VAR185;
        size_t VAR186 = 32, VAR187;
        unsigned long VAR188;
        int VAR189, VAR190;
        long VAR191;

        
        VAR188 = VAR2->VAR35->VAR36.VAR37->VAR192;
        if (VAR188 & VAR193)
            VAR183 = VAR2->VAR47->VAR53[VAR194].VAR55;
        else if (VAR188 & VAR195)
            VAR183 = VAR2->VAR47->VAR53[VAR196].VAR55;

        VAR181 = FUN54(VAR183, NULL);
        FUN55(VAR181);
        
        VAR182 = FUN13(VAR2->VAR72->VAR90);
        if (VAR182) {
            if (FUN56(VAR181, VAR182) <= 0)
                FUN7();
        }
        
        if (VAR197
            ((const unsigned char **)&VAR8, &VAR191, &VAR189, &VAR190,
             VAR6) != VAR198 || VAR189 != VAR199
            || VAR190 != VAR200) {
            FUN3(VAR50,
                   VAR122);
            goto VAR201;
        }
        VAR185 = VAR8;
        VAR187 = VAR191;
        if (VAR202
            (VAR181, VAR184, &VAR186, VAR185, VAR187) <= 0) {
            FUN3(VAR50,
                   VAR122);
            goto VAR201;
        }
        
        VAR2->VAR72->VAR73 =
            VAR2->VAR30->VAR74->FUN11(VAR2,
                                                        VAR2->
                                                        VAR72->VAR75,
                                                        VAR184, 32);
        FUN12(VAR184, sizeof(VAR184));
        
        if (VAR203
            (VAR181, -1, -1, VAR204, 2, NULL) > 0)
            VAR132 = 2;
        else
            VAR132 = 1;
 VAR201:
        FUN16(VAR182);
        FUN57(VAR181);
        if (VAR132)
            return VAR132;
        else
            goto VAR67;
    } else {
        VAR4 = VAR49;
        FUN3(VAR50, VAR205);
        goto VAR52;
    }

    return (1);
 VAR52:
    FUN58(VAR2, VAR206, VAR4);
#if !FUN59(VAR14) || !FUN59(VAR9) || !FUN59(VAR22) || FUN59(VAR167)
 VAR67:
#endif
#ifndef VAR22
    FUN16(VAR25);
    FUN44(VAR27);
    if (VAR24 != NULL)
        FUN45(VAR24);
    FUN46(VAR29);
#endif
    VAR2->VAR207 = VAR208;
    return (-1);
}
static void FUN1(UINT16 VAR1, char* VAR2)
{
    VAR3 *VAR4 = (VAR3*)VAR2;
    tBTA_SERVICE_MASK VAR5;
 uint32_t VAR6;
 bt_bdaddr_t VAR7;

    FUN2("", FUN3(VAR1));

 switch (VAR1)
 {
 case VAR8:
 {
             BD_NAME VAR9;
 bt_status_t VAR10;
 bt_property_t VAR11;
             VAR11.VAR12 = VAR13;
             VAR11.VAR14 = VAR15;
             VAR11.VAR16 = (void*)VAR9;

             VAR10 = FUN4(&VAR11);
 if (VAR10 == VAR17)
 {
 
                 FUN5((char*)VAR11.VAR16);
 }
 else
 {
 
                 FUN5(FUN6());
 }

#if (FUN7(VAR18) && (VAR18 == VAR19))
 
             FUN8(VAR20);
#endif

 
             VAR5 = FUN9();
 for (VAR6=0; VAR6 <= VAR21; VAR6++)
 {
 if (VAR5 &
 (VAR22)(FUN10(VAR6)))
 {
                     FUN11(VAR6, VAR19);
 }
 }
 
             memset(&VAR23, 0, sizeof(VAR24));
             VAR23.VAR25 = VAR26;

 
             FUN12();

             FUN13();

             FUN14(VAR4->VAR27.VAR10);
 }
 break;

 case VAR28:
 
            VAR5 = FUN9();
 for (VAR6=0; VAR6 <= VAR21; VAR6++)
 {
 if (VAR5 &
 (VAR22)(FUN10(VAR6)))
 {
                    FUN11(VAR6, VAR29);
 }
 }
            FUN15();
 break;

 case VAR30:
            FUN16(&VAR4->VAR31);
 break;

 case VAR32:
            FUN17(&VAR4->VAR33);
 break;

 case VAR34:
 if (VAR23.VAR35 == VAR36)
 {
                FUN18(VAR7.VAR37, VAR23.VAR7);
                FUN19(VAR23.VAR7, VAR38);
                FUN20(VAR4->VAR39.VAR40, &VAR7, VAR41);
 }
 break;

 case VAR42:
            FUN21(&VAR4->VAR43);
 break;
 case VAR44:
            FUN22(&VAR4->VAR45);
 break;

 case VAR46:
            FUN18(VAR7.VAR37, VAR4->VAR47.VAR7);
            FUN19(VAR4->VAR47.VAR7, VAR38);

 
 #if (FUN7(VAR48) && (VAR48 == VAR19))
            FUN23(VAR7);
 #endif
            FUN24(&VAR7);
            FUN20(VAR17, &VAR7, VAR41);
 break;

 case VAR49:
 {

 if (VAR4->VAR50.VAR51 & VAR52)
 {
 if (VAR4->VAR50.VAR51 == VAR53)
 {
                       FUN25(VAR54, VAR55,
                                                VAR56);
                       VAR57 = VAR19;
 }
 else if (VAR4->VAR50.VAR51 == VAR58)
 {
                       FUN25(VAR54, VAR55,
                                                VAR59);
                       VAR57 = VAR29;
 }
 else if (VAR4->VAR50.VAR51 == VAR60)
 {
                       VAR57 = VAR29;
 }
 }
 }break;

 case VAR61:
            FUN18(VAR7.VAR37, VAR4->VAR62.VAR7);
            FUN26("");

            FUN27(&VAR7);

            FUN25(VAR54, VAR63, VAR17,
 &VAR7, VAR64);
 break;

 case VAR65:
            FUN18(VAR7.VAR37, VAR4->VAR47.VAR7);
            FUN19(VAR4->VAR47.VAR7, VAR38);
            FUN26("");
            FUN25(VAR54, VAR63, VAR17,
 &VAR7, VAR66);
 break;

 case VAR67:

             FUN28("");
             
             FUN29();

            FUN30(100000); 


             
             FUN31(FUN32(), VAR68);
             break;

#if (FUN7(VAR18) && (VAR18 == VAR19))
 case VAR69:
            FUN26("", VAR4->VAR70.VAR71);

 
 if (VAR23.VAR35 != VAR36)
 {
                FUN26("");
                FUN20(VAR17, (VAR72*)VAR4->VAR70.VAR7,
                                   VAR36);
 }
 else if (memcmp (VAR23.VAR7, VAR4->VAR70.VAR7, VAR73)!=0)
 {
                FUN28("",VAR4->VAR70.VAR71);
 break;
 }

 switch (VAR4->VAR70.VAR71)
 {
 case VAR74:
                    FUN26("");
                    VAR23.VAR75.VAR76 = VAR19;
                    VAR23.VAR75.VAR77 = VAR4->VAR70.VAR78->VAR77;
 break;

 case VAR79:
                    FUN26("");
                    VAR23.VAR75.VAR80 = VAR19;
                    VAR23.VAR75.VAR81 = VAR4->VAR70.VAR78->VAR81;
 break;

 case VAR82:
                    FUN26("");
                    VAR23.VAR75.VAR83 = VAR19;
                    VAR23.VAR75.VAR84 = VAR4->VAR70.VAR78->VAR84;
 break;

 case VAR85:
                    FUN26("");
                    VAR23.VAR75.VAR86 = VAR19;
                    VAR23.VAR75.VAR87 = VAR4->VAR70.VAR78->VAR87;
 break;

 case VAR88:
                    FUN26("");
                    VAR23.VAR75.VAR89 = VAR19;
                    VAR23.VAR75.VAR90 = VAR4->VAR70.VAR78->VAR90;
 break;

 case VAR91:
                    FUN26("");
                    VAR23.VAR75.VAR92 =  VAR19;
 break;

 default:
                    FUN28("", VAR4->VAR70.VAR71);
 break;
 }
 break;
 case VAR93:
            FUN26("");
            FUN33(&VAR4->VAR94);
 break;
 case VAR95:
            FUN26("");
            FUN34(&VAR4->VAR45);
 break;
 case VAR96:
            FUN26("");
            FUN35(&VAR4->VAR31);
 break;
 case VAR97:
            FUN26("");
            FUN36(&VAR4->VAR45);
 break;
 case VAR98:
            FUN26("");
 break;
 case VAR99:
            FUN26("");
            VAR100.VAR101 = VAR19;
            memcpy(&VAR100.VAR102.VAR103[0],
 &VAR4->VAR104.VAR103[0], sizeof(VAR105));
            memcpy(&VAR100.VAR102.VAR106[0],
 &VAR4->VAR104.VAR106[0], sizeof(VAR105));
            memcpy(&VAR100.VAR102.VAR107[0],
 &VAR4->VAR104.VAR107[0], sizeof(VAR105));
            FUN37( (char *)&VAR100.VAR102.VAR103[0],
                                            VAR108,
                                            VAR109);
            FUN37( (char *)&VAR100.VAR102.VAR106[0],
                                            VAR110,
                                            VAR109);
            FUN37( (char *)&VAR100.VAR102.VAR107[0],
                                            VAR111,
                                            VAR109);
 break;
 case VAR112:
            FUN26("");
            VAR100.VAR113 = VAR19;
            memcpy(&VAR100.VAR114[0], &VAR4->VAR115[0], sizeof(VAR105));
            FUN37( (char *)&VAR100.VAR114[0],
                                            VAR116,
                                            VAR109);
 break;

 case VAR117:
            FUN26("");
            FUN38(&VAR4->VAR33);
 break;

 case VAR118:
 {
            tBTM_BLE_VSC_CB VAR119;
 bt_local_le_features_t VAR120;
 char VAR121[512];
 bt_property_t VAR11;
            VAR11.VAR12 = VAR122;
            VAR11.VAR16 = (void*)VAR121;
            VAR11.VAR14 = sizeof(VAR121);

 
            FUN39(&VAR119);
            VAR120.VAR123 = FUN40();

            VAR11.VAR14 = sizeof (VAR124);
 if (VAR119.VAR125 == 1)
                VAR120.VAR126 = VAR119.VAR127;
 else
                VAR120.VAR126 = 0;
            VAR120.VAR128 = VAR119.VAR129;
            VAR120.VAR130 = VAR119.VAR131;
            VAR120.VAR132 = VAR119.VAR133;
            VAR120.VAR134 = VAR119.VAR135;
            VAR120.VAR136 = VAR119.VAR137;
            VAR120.VAR138 = VAR119.VAR138;
            VAR120.VAR139 =
                        VAR119.VAR139;

            VAR120.VAR140 = VAR119.VAR140 > 0;
            VAR120.VAR141 = VAR119.VAR141 > 0;

            memcpy(VAR11.VAR16, &VAR120, VAR11.VAR14);
            FUN25(VAR54, VAR142, VAR17, 1, &VAR11);
 break;
 }

 case VAR143:
 {
 VAR144 *VAR145 = (VAR144*) VAR2;
            bt_activity_energy_info VAR146;
            VAR146.VAR10 = VAR145->VAR10;
            VAR146.VAR147 = VAR145->VAR147;
            VAR146.VAR148 = VAR145->VAR148;
            VAR146.VAR149 = VAR145->VAR149;
            VAR146.VAR150 = VAR145->VAR150;
            VAR146.VAR151 = VAR145->VAR151;
            FUN25(VAR54, VAR152, &VAR146);
 break;
 }
#endif

 case VAR153:
 case VAR154:
 case VAR155:
 case VAR156:
 case VAR157:

 default:
            FUN41( "", VAR1 );
 break;
 }

    FUN42(VAR1, VAR4);
}
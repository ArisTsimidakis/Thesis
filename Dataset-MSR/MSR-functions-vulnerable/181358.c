int FUN1(
    VAR1* VAR2,
    VAR3* VAR4,
    int VAR5,
    time_t VAR6)
{
  int64_t VAR7[VAR8];
  int32_t VAR9 = 0;
  VAR10* VAR11 = VAR2->VAR12;

  YR_VALUE VAR13[VAR14];
  VAR15 *VAR16;
  YR_VALUE VAR17;
  YR_VALUE VAR18;
  YR_VALUE VAR19;

  #ifdef VAR20
  VAR21* VAR22 = NULL;
  #endif

   VAR21* VAR23;
   VAR24* VAR25;
   VAR26* VAR27;




 
   char* VAR28;
   char* VAR29;

  int VAR30;
  int VAR31;
  int VAR32;
  int VAR33 = VAR34;
  int VAR35 = VAR36;
  int VAR37 = 0;
  int VAR38 = VAR4->VAR38;
  int VAR39;

  #ifdef VAR20
  clock_t VAR40 = FUN2();
  #endif

  FUN3(VAR41, (void*) &VAR39);

  VAR16 = (VAR15*) FUN4(VAR39 * sizeof(VAR15));

   if (VAR16 == NULL)
     return VAR42;
 








   while(!VAR35)
   {
     switch(*VAR11)
    {
      case VAR43:
        break;
        
      case VAR44:
        assert(VAR9 == 0); 
        VAR35 = VAR45;
        break;

      case VAR46:
        VAR17.VAR30 = *(VAR47*)(VAR11 + 1);
        VAR11 += sizeof(VAR47);
        FUN5(VAR17);
        break;

      case VAR48:
        FUN6(VAR17);
        break;

      case VAR49:
        VAR17.VAR30 = *(VAR47*)(VAR11 + 1);
        VAR11 += sizeof(VAR47);
        VAR7[VAR17.VAR30] = 0;
        break;

      case VAR50:
        VAR17.VAR30 = *(VAR47*)(VAR11 + 1);
        VAR11 += sizeof(VAR47);
        FUN6(VAR18);
        if (!FUN7(VAR18))
          VAR7[VAR17.VAR30] += VAR18.VAR30;
        break;

      case VAR51:
        VAR17.VAR30 = *(VAR47*)(VAR11 + 1);
        VAR11 += sizeof(VAR47);
        VAR7[VAR17.VAR30]++;
        break;

      case VAR52:
        VAR17.VAR30 = *(VAR47*)(VAR11 + 1);
        VAR11 += sizeof(VAR47);
        VAR17.VAR30 = VAR7[VAR17.VAR30];
        FUN5(VAR17);
        break;

      case VAR53:
        VAR17.VAR30 = *(VAR47*)(VAR11 + 1);
        VAR11 += sizeof(VAR47);
        FUN6(VAR18);
        VAR7[VAR17.VAR30] = VAR18.VAR30;
        break;

      case VAR54:
        VAR17.VAR30 = *(VAR47*)(VAR11 + 1);
        VAR11 += sizeof(VAR47);
        FUN6(VAR18);

        if (FUN7(VAR18))
        {
          VAR17.VAR30 = VAR7[VAR17.VAR30];
          FUN5(VAR17);
        }
        else
        {
          FUN5(VAR18);
        }
        break;

      case VAR55:
        FUN6(VAR17);
        FUN5(VAR17);

        VAR11 = FUN8(!FUN7(VAR17), VAR11);
        break;

      case VAR56:
        FUN6(VAR18);
        FUN6(VAR17);
        FUN5(VAR17);
        FUN5(VAR18);

        VAR11 = FUN8(VAR17.VAR30 <= VAR18.VAR30, VAR11);
        break;

      case VAR57:
        FUN6(VAR17);
        FUN5(VAR17);

        VAR11 = FUN8(!FUN7(VAR17) && VAR17.VAR30, VAR11);
        break;

      case VAR58:
        FUN6(VAR17);
        FUN5(VAR17);

        VAR11 = FUN8(FUN7(VAR17) || !VAR17.VAR30, VAR11);
        break;

      case VAR59:
        FUN6(VAR18);
        FUN6(VAR17);

        if (FUN7(VAR17) || FUN7(VAR18))
          VAR17.VAR30 = 0;
        else
          VAR17.VAR30 = VAR17.VAR30 && VAR18.VAR30;

        FUN5(VAR17);
        break;

      case VAR60:
        FUN6(VAR18);
        FUN6(VAR17);

        if (FUN7(VAR17))
        {
          FUN5(VAR18);
        }
        else if (FUN7(VAR18))
        {
          FUN5(VAR17);
        }
        else
        {
          VAR17.VAR30 = VAR17.VAR30 || VAR18.VAR30;
          FUN5(VAR17);
        }
        break;

      case VAR61:
        FUN6(VAR17);

        if (FUN7(VAR17))
          VAR17.VAR30 = VAR62;
        else
          VAR17.VAR30= !VAR17.VAR30;

        FUN5(VAR17);
        break;

      case VAR63:
        FUN6(VAR18);
        FUN6(VAR17);
        FUN9(VAR18);
        FUN9(VAR17);
        if (VAR18.VAR30 != 0)
          VAR17.VAR30 = VAR17.VAR30 % VAR18.VAR30;
        else
          VAR17.VAR30 = VAR62;
        FUN5(VAR17);
        break;

      case VAR64:
        FUN6(VAR18);
        FUN6(VAR17);
        FUN9(VAR18);
        FUN9(VAR17);
        VAR17.VAR30 = VAR17.VAR30 >> VAR18.VAR30;
        FUN5(VAR17);
        break;

      case VAR65:
        FUN6(VAR18);
        FUN6(VAR17);
        FUN9(VAR18);
        FUN9(VAR17);
        VAR17.VAR30 = VAR17.VAR30 << VAR18.VAR30;
        FUN5(VAR17);
        break;

      case VAR66:
        FUN6(VAR17);
        FUN9(VAR17);
        VAR17.VAR30 = ~VAR17.VAR30;
        FUN5(VAR17);
        break;

      case VAR67:
        FUN6(VAR18);
        FUN6(VAR17);
        FUN9(VAR18);
        FUN9(VAR17);
        VAR17.VAR30 = VAR17.VAR30 & VAR18.VAR30;
        FUN5(VAR17);
        break;

      case VAR68:
        FUN6(VAR18);
        FUN6(VAR17);
        FUN9(VAR18);
        FUN9(VAR17);
        VAR17.VAR30 = VAR17.VAR30 | VAR18.VAR30;
        FUN5(VAR17);
        break;

      case VAR69:
        FUN6(VAR18);
        FUN6(VAR17);
        FUN9(VAR18);
        FUN9(VAR17);
        VAR17.VAR30 = VAR17.VAR30 ^ VAR18.VAR30;
        FUN5(VAR17);
        break;

      case VAR70:
        VAR23 = *(VAR21**)(VAR11 + 1);
        VAR11 += sizeof(VAR47);
        VAR17.VAR30 = VAR23->VAR71[VAR38] & VAR72 ? 1 : 0;
        FUN5(VAR17);
        break;

      case VAR73:
        #ifdef VAR20
        VAR22 = *(VAR21**)(VAR11 + 1);
        #endif
        VAR11 += sizeof(VAR47);
        break;

      case VAR74:
        FUN6(VAR17);
        VAR23 = *(VAR21**)(VAR11 + 1);
        VAR11 += sizeof(VAR47);

        if (!FUN7(VAR17) && VAR17.VAR30)
          VAR23->VAR71[VAR38] |= VAR72;
        else if (FUN10(VAR23))
          VAR23->VAR75->VAR71[VAR38] |= VAR76;

        #ifdef VAR20
         VAR23->VAR77 += FUN2() - VAR40;
         VAR40 = FUN2();
         #endif




         break;
 
       case VAR78:
        VAR28 = *(char**)(VAR11 + 1);
        VAR11 += sizeof(VAR47);

        VAR17.VAR79 = (VAR80*) FUN11(
            VAR4->VAR81,
            VAR28,
            NULL);

        assert(VAR17.VAR79 != NULL);
        FUN5(VAR17);
        break;

      case VAR82:
        VAR28 = *(char**)(VAR11 + 1);
        VAR11 += sizeof(VAR47);

        FUN6(VAR17);
        FUN9(VAR17);

        VAR17.VAR79 = FUN12(VAR17.VAR79, VAR28);

        assert(VAR17.VAR79 != NULL);
        FUN5(VAR17);
        break;

      case VAR83:
        FUN6(VAR17);
        FUN9(VAR17);

        switch(VAR17.VAR79->VAR84)
        {
          case VAR85:
            VAR17.VAR30 = ((VAR86*) VAR17.VAR79)->VAR87;
            break;

          case VAR88:
            if (FUN13(((VAR89*) VAR17.VAR79)->VAR87))
              VAR17.VAR30 = VAR62;
            else
              VAR17.VAR90 = ((VAR89*) VAR17.VAR79)->VAR87;
            break;

          case VAR91:
            if (((VAR92*) VAR17.VAR79)->VAR87 == NULL)
              VAR17.VAR30 = VAR62;
            else
              VAR17.VAR93 = ((VAR92*) VAR17.VAR79)->VAR87;
            break;

          default:
            assert(VAR36);
        }

        FUN5(VAR17);
        break;

      case VAR94:
        FUN6(VAR17);  
        FUN6(VAR18);  

        FUN9(VAR17);
        FUN9(VAR18);
        assert(VAR18.VAR79->VAR84 == VAR95);

        VAR17.VAR79 = FUN14(VAR18.VAR79, 0, (int) VAR17.VAR30);

        if (VAR17.VAR79 == NULL)
          VAR17.VAR30 = VAR62;

        FUN5(VAR17);
        break;

      case VAR96:
        FUN6(VAR17);  
        FUN6(VAR18);  

        FUN9(VAR17);
        FUN9(VAR18);
        assert(VAR18.VAR79->VAR84 == VAR97);

        VAR17.VAR79 = FUN15(
            VAR18.VAR79, 0, VAR17.VAR98->VAR99);

        if (VAR17.VAR79 == NULL)
          VAR17.VAR30 = VAR62;

        FUN5(VAR17);
        break;

      case VAR100:
        VAR29 = *(char**)(VAR11 + 1);
        VAR11 += sizeof(VAR47);

        VAR30 = (int) strlen(VAR29);
        VAR32 = 0;

        

        while (VAR30 > 0)
        {
          FUN6(VAR17);

          if (FUN7(VAR17))  
            VAR32++;

          VAR13[VAR30 - 1] = VAR17;
          VAR30--;
        }

        FUN6(VAR18);
        FUN9(VAR18);

        if (VAR32 > 0)
        {
          
          

          VAR17.VAR30 = VAR62;
          FUN5(VAR17);
          break;
        }

        VAR27 = (VAR26*) VAR18.VAR79;
        VAR33 = VAR101;

        for (VAR30 = 0; VAR30 < VAR102; VAR30++)
        {
          if (VAR27->VAR103[VAR30].VAR104 == NULL)
            break;

          if (strcmp(VAR27->VAR103[VAR30].VAR104, VAR29) == 0)
          {
            VAR33 = VAR27->VAR103[VAR30].FUN16(VAR13, VAR4, VAR27);
            break;
           }
         }
 






         assert(VAR30 < VAR102);
 








         if (VAR33 == VAR34)

        {

          VAR17.VAR79 = VAR27->VAR105;

          FUN5(VAR17);

        }

        else

        {

          VAR35 = VAR45;

        }








 










         break;
 
       case VAR106:
        FUN6(VAR17);
        VAR17.VAR30 = VAR17.VAR107->VAR108[VAR38].VAR109 != NULL ? 1 : 0;
        FUN5(VAR17);
        break;

      case VAR110:
        FUN6(VAR18);
        FUN6(VAR17);

        if (FUN7(VAR17))
        {
          VAR17.VAR30 = 0;
          FUN5(VAR17);
          break;
        }

        VAR25 = VAR18.VAR107->VAR108[VAR38].VAR111;
        VAR19.VAR30 = VAR36;

        while (VAR25 != NULL)
        {
          if (VAR17.VAR30 == VAR25->VAR112 + VAR25->VAR113)
          {
            VAR19.VAR30 = VAR45;
            break;
          }

          if (VAR17.VAR30 < VAR25->VAR112 + VAR25->VAR113)
            break;

          VAR25 = VAR25->VAR114;
        }

        FUN5(VAR19);
        break;

      case VAR115:
        FUN6(VAR19);
        FUN6(VAR18);
        FUN6(VAR17);

        FUN9(VAR17);
        FUN9(VAR18);

        VAR25 = VAR19.VAR107->VAR108[VAR38].VAR111;
        VAR19.VAR30 = VAR36;

        while (VAR25 != NULL && !VAR19.VAR30)
        {
          if (VAR25->VAR112 + VAR25->VAR113 >= VAR17.VAR30 &&
              VAR25->VAR112 + VAR25->VAR113 <= VAR18.VAR30)
          {
            VAR19.VAR30 = VAR45;
          }

          if (VAR25->VAR112 + VAR25->VAR113 > VAR18.VAR30)
            break;

          VAR25 = VAR25->VAR114;
        }

        FUN5(VAR19);
        break;

      case VAR116:
        FUN6(VAR17);
        VAR17.VAR30 = VAR17.VAR107->VAR108[VAR38].VAR32;
        FUN5(VAR17);
        break;

      case VAR117:
        FUN6(VAR18);
        FUN6(VAR17);

        FUN9(VAR17);

        VAR25 = VAR18.VAR107->VAR108[VAR38].VAR111;
        VAR30 = 1;
        VAR19.VAR30 = VAR62;

        while (VAR25 != NULL && VAR19.VAR30 == VAR62)
        {
          if (VAR17.VAR30 == VAR30)
            VAR19.VAR30 = VAR25->VAR112 + VAR25->VAR113;

          VAR30++;
          VAR25 = VAR25->VAR114;
        }

        FUN5(VAR19);
        break;

      case VAR118:
        FUN6(VAR18);
        FUN6(VAR17);

        FUN9(VAR17);

        VAR25 = VAR18.VAR107->VAR108[VAR38].VAR111;
        VAR30 = 1;
        VAR19.VAR30 = VAR62;

        while (VAR25 != NULL && VAR19.VAR30 == VAR62)
        {
          if (VAR17.VAR30 == VAR30)
            VAR19.VAR30 = VAR25->VAR119;

          VAR30++;
          VAR25 = VAR25->VAR114;
        }

        FUN5(VAR19);
        break;

      case VAR120:
        VAR31 = 0;
        VAR32 = 0;
        FUN6(VAR17);

        while (!FUN7(VAR17))
        {
          if (VAR17.VAR107->VAR108[VAR38].VAR109 != NULL)
            VAR31++;
          VAR32++;
          FUN6(VAR17);
        }

        FUN6(VAR18);

        if (FUN7(VAR18))
          VAR17.VAR30 = VAR31 >= VAR32 ? 1 : 0;
        else
          VAR17.VAR30 = VAR31 >= VAR18.VAR30 ? 1 : 0;

        FUN5(VAR17);
        break;

      case VAR121:
        VAR17.VAR30 = VAR4->VAR122;
        FUN5(VAR17);
        break;

      case VAR123:
        VAR17.VAR30 = VAR4->VAR124;
        FUN5(VAR17);
        break;

      case VAR125:
        FUN6(VAR17);
        VAR17.VAR30 = FUN17(VAR4->VAR126, (VAR127) VAR17.VAR30);
        FUN5(VAR17);
        break;

      case VAR128:
        FUN6(VAR17);
        VAR17.VAR30 = FUN18(VAR4->VAR126, (VAR127) VAR17.VAR30);
        FUN5(VAR17);
        break;

      case VAR129:
        FUN6(VAR17);
        VAR17.VAR30 = FUN19(VAR4->VAR126, (VAR127) VAR17.VAR30);
        FUN5(VAR17);
        break;

      case VAR130:
        FUN6(VAR17);
        VAR17.VAR30 = FUN20(VAR4->VAR126, (VAR127) VAR17.VAR30);
        FUN5(VAR17);
        break;

      case VAR131:
        FUN6(VAR17);
        VAR17.VAR30 = FUN21(VAR4->VAR126, (VAR127) VAR17.VAR30);
        FUN5(VAR17);
        break;

      case VAR132:
        FUN6(VAR17);
        VAR17.VAR30 = FUN22(VAR4->VAR126, (VAR127) VAR17.VAR30);
        FUN5(VAR17);
        break;

      case VAR133:
        FUN6(VAR17);
        VAR17.VAR30 = FUN23(VAR4->VAR126, (VAR127) VAR17.VAR30);
        FUN5(VAR17);
        break;

      case VAR134:
        FUN6(VAR17);
        VAR17.VAR30 = FUN24(VAR4->VAR126, (VAR127) VAR17.VAR30);
        FUN5(VAR17);
        break;

      case VAR135:
        FUN6(VAR17);
        VAR17.VAR30 = FUN25(VAR4->VAR126, (VAR127) VAR17.VAR30);
        FUN5(VAR17);
        break;

      case VAR136:
        FUN6(VAR17);
        VAR17.VAR30 = FUN26(VAR4->VAR126, (VAR127) VAR17.VAR30);
        FUN5(VAR17);
        break;

      case VAR137:
        FUN6(VAR17);
        VAR17.VAR30 = FUN27(VAR4->VAR126, (VAR127) VAR17.VAR30);
        FUN5(VAR17);
        break;

      case VAR138:
        FUN6(VAR17);
        VAR17.VAR30 = FUN28(VAR4->VAR126, (VAR127) VAR17.VAR30);
        FUN5(VAR17);
        break;

      case VAR139:
        FUN6(VAR18);
        FUN6(VAR17);

        FUN9(VAR17);
        FUN9(VAR18);

        VAR17.VAR30 = FUN29(VAR17.VAR98->VAR99, VAR17.VAR98->VAR140,
                      VAR18.VAR98->VAR99, VAR18.VAR98->VAR140) != NULL;
        FUN5(VAR17);
        break;

      case VAR141:
        VAR17.VAR30 = *(VAR47*)(VAR11 + 1);
        VAR11 += sizeof(VAR47);

        VAR33 = FUN30((char*) VAR17.VAR93, VAR4);

        if (VAR33 != VAR34)
          VAR35 = VAR45;

        break;

      case VAR142:

        FUN6(VAR18);
        FUN6(VAR17);

        FUN9(VAR18);
        FUN9(VAR17);

        if (VAR17.VAR98->VAR140 == 0)
        {
          VAR17.VAR30 = VAR36;
          FUN5(VAR17);
          break;
        }

        VAR33 = FUN31(
          (VAR10*) VAR18.VAR143->VAR144,
          (VAR10*) VAR17.VAR98->VAR99,
          VAR17.VAR98->VAR140,
          0,
          VAR18.VAR143->VAR145 | VAR146,
          NULL,
          NULL,
          &VAR31);

        if (VAR33 != VAR34)
          VAR35 = VAR45;

        VAR17.VAR30 = VAR31 >= 0;
        FUN5(VAR17);
        break;

      case VAR147:
        VAR17.VAR30 = *(VAR47*)(VAR11 + 1);
        VAR11 += sizeof(VAR47);
        VAR18 = VAR16[VAR9 - VAR17.VAR30];
        if (FUN7(VAR18))
          VAR16[VAR9 - VAR17.VAR30].VAR30 = VAR62;
        else
          VAR16[VAR9 - VAR17.VAR30].VAR90 = (double) VAR18.VAR30;
        break;

      case VAR148:
        FUN6(VAR17);
        FUN9(VAR17);
        VAR17.VAR30 = VAR17.VAR98->VAR140 > 0;
        FUN5(VAR17);
        break;

      case VAR149:
        FUN6(VAR18);
        FUN6(VAR17);
        FUN9(VAR18);
        FUN9(VAR17);
        VAR17.VAR30 = VAR17.VAR30 == VAR18.VAR30;
        FUN5(VAR17);
        break;

      case VAR150:
        FUN6(VAR18);
        FUN6(VAR17);
        FUN9(VAR18);
        FUN9(VAR17);
        VAR17.VAR30 = VAR17.VAR30 != VAR18.VAR30;
        FUN5(VAR17);
        break;

      case VAR151:
        FUN6(VAR18);
        FUN6(VAR17);
        FUN9(VAR18);
        FUN9(VAR17);
        VAR17.VAR30 = VAR17.VAR30 < VAR18.VAR30;
        FUN5(VAR17);
        break;

      case VAR152:
        FUN6(VAR18);
        FUN6(VAR17);
        FUN9(VAR18);
        FUN9(VAR17);
        VAR17.VAR30 = VAR17.VAR30 > VAR18.VAR30;
        FUN5(VAR17);
        break;

      case VAR153:
        FUN6(VAR18);
        FUN6(VAR17);
        FUN9(VAR18);
        FUN9(VAR17);
        VAR17.VAR30 = VAR17.VAR30 <= VAR18.VAR30;
        FUN5(VAR17);
        break;

      case VAR154:
        FUN6(VAR18);
        FUN6(VAR17);
        FUN9(VAR18);
        FUN9(VAR17);
        VAR17.VAR30 = VAR17.VAR30 >= VAR18.VAR30;
        FUN5(VAR17);
        break;

      case VAR155:
        FUN6(VAR18);
        FUN6(VAR17);
        FUN9(VAR18);
        FUN9(VAR17);
        VAR17.VAR30 = VAR17.VAR30 + VAR18.VAR30;
        FUN5(VAR17);
        break;

      case VAR156:
        FUN6(VAR18);
        FUN6(VAR17);
        FUN9(VAR18);
        FUN9(VAR17);
        VAR17.VAR30 = VAR17.VAR30 - VAR18.VAR30;
        FUN5(VAR17);
        break;

      case VAR157:
        FUN6(VAR18);
        FUN6(VAR17);
        FUN9(VAR18);
        FUN9(VAR17);
        VAR17.VAR30 = VAR17.VAR30 * VAR18.VAR30;
        FUN5(VAR17);
        break;

      case VAR158:
        FUN6(VAR18);
        FUN6(VAR17);
        FUN9(VAR18);
        FUN9(VAR17);
        if (VAR18.VAR30 != 0)
          VAR17.VAR30 = VAR17.VAR30 / VAR18.VAR30;
        else
          VAR17.VAR30 = VAR62;
        FUN5(VAR17);
        break;

      case VAR159:
        FUN6(VAR17);
        FUN9(VAR17);
        VAR17.VAR30 = -VAR17.VAR30;
        FUN5(VAR17);
        break;

      case VAR160:
        FUN6(VAR18);
        FUN6(VAR17);
        FUN9(VAR18);
        FUN9(VAR17);
        VAR17.VAR30 = VAR17.VAR90 < VAR18.VAR90;
        FUN5(VAR17);
        break;

      case VAR161:
        FUN6(VAR18);
        FUN6(VAR17);
        FUN9(VAR18);
        FUN9(VAR17);
        VAR17.VAR30 = VAR17.VAR90 > VAR18.VAR90;
        FUN5(VAR17);
        break;

      case VAR162:
        FUN6(VAR18);
        FUN6(VAR17);
        FUN9(VAR18);
        FUN9(VAR17);
        VAR17.VAR30 = VAR17.VAR90 <= VAR18.VAR90;
        FUN5(VAR17);
        break;

      case VAR163:
        FUN6(VAR18);
        FUN6(VAR17);
        FUN9(VAR18);
        FUN9(VAR17);
        VAR17.VAR30 = VAR17.VAR90 >= VAR18.VAR90;
        FUN5(VAR17);
        break;

      case VAR164:
        FUN6(VAR18);
        FUN6(VAR17);
        FUN9(VAR18);
        FUN9(VAR17);
        VAR17.VAR30 = VAR17.VAR90 == VAR18.VAR90;
        FUN5(VAR17);
        break;

      case VAR165:
        FUN6(VAR18);
        FUN6(VAR17);
        FUN9(VAR18);
        FUN9(VAR17);
        VAR17.VAR30 = VAR17.VAR90 != VAR18.VAR90;
        FUN5(VAR17);
        break;

      case VAR166:
        FUN6(VAR18);
        FUN6(VAR17);
        FUN9(VAR18);
        FUN9(VAR17);
        VAR17.VAR90 = VAR17.VAR90 + VAR18.VAR90;
        FUN5(VAR17);
        break;

      case VAR167:
        FUN6(VAR18);
        FUN6(VAR17);
        FUN9(VAR18);
        FUN9(VAR17);
        VAR17.VAR90 = VAR17.VAR90 - VAR18.VAR90;
        FUN5(VAR17);
        break;

      case VAR168:
        FUN6(VAR18);
        FUN6(VAR17);
        FUN9(VAR18);
        FUN9(VAR17);
        VAR17.VAR90 = VAR17.VAR90 * VAR18.VAR90;
        FUN5(VAR17);
        break;

      case VAR169:
        FUN6(VAR18);
        FUN6(VAR17);
        FUN9(VAR18);
        FUN9(VAR17);
        VAR17.VAR90 = VAR17.VAR90 / VAR18.VAR90;
        FUN5(VAR17);
        break;

      case VAR170:
        FUN6(VAR17);
        FUN9(VAR17);
        VAR17.VAR90 = -VAR17.VAR90;
        FUN5(VAR17);
        break;

      case VAR171:
      case VAR172:
      case VAR173:
      case VAR174:
      case VAR175:
      case VAR176:

        FUN6(VAR18);
        FUN6(VAR17);

        FUN9(VAR17);
        FUN9(VAR18);

        switch(*VAR11)
        {
          case VAR171:
            VAR17.VAR30 = (FUN32(VAR17.VAR98, VAR18.VAR98) == 0);
            break;
          case VAR172:
            VAR17.VAR30 = (FUN32(VAR17.VAR98, VAR18.VAR98) != 0);
            break;
          case VAR173:
            VAR17.VAR30 = (FUN32(VAR17.VAR98, VAR18.VAR98) < 0);
            break;
          case VAR174:
            VAR17.VAR30 = (FUN32(VAR17.VAR98, VAR18.VAR98) <= 0);
            break;
          case VAR175:
            VAR17.VAR30 = (FUN32(VAR17.VAR98, VAR18.VAR98) > 0);
            break;
          case VAR176:
            VAR17.VAR30 = (FUN32(VAR17.VAR98, VAR18.VAR98) >= 0);
            break;
        }

        FUN5(VAR17);
        break;

      default:
        
        assert(VAR36);
    }

    if (VAR5 > 0)  
    {
      

      if (++VAR37 == 10)
      {
        if (FUN33(FUN34(NULL), VAR6) > VAR5)
        {
          #ifdef VAR20
          assert(VAR22 != NULL);
          VAR22->VAR77 += FUN2() - VAR40;
          #endif
          VAR33 = VAR177;
          VAR35 = VAR45;
        }

        VAR37 = 0;
      }
    }

     VAR11++;
   }
 






















   FUN35(VAR4);
   FUN36(VAR16);
 
  return VAR33;
}
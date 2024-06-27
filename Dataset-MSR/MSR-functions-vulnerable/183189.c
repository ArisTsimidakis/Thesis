static VAR1 FUN1(VAR2 *VAR3,
  const VAR4 *VAR5,const VAR6 *VAR7,
  const MagickBooleanType VAR8,VAR9 *VAR10)
{
  char
    VAR11[4];

  VAR12
    *VAR13;

  VAR14
    VAR15;

  VAR1
    VAR16;

  register VAR17
    VAR18;

  VAR17
    VAR19,
    VAR20,
    VAR21;

  VAR15=FUN2(VAR7,VAR3);
  if (VAR15 == 0)
    {
      
      (void) FUN3(VAR3);
      VAR19=FUN4(VAR3,4,(unsigned char *) VAR11);
      FUN5(VAR3,VAR11,4);
      VAR16=VAR22;
      if ((VAR19 == 0) || (FUN6(VAR11,"",4) != 0))
        return(VAR23);
      else
        {
          VAR19=FUN4(VAR3,4,(unsigned char *) VAR11);
          FUN5(VAR3,VAR11,4);
          if ((VAR19 != 0) && (FUN6(VAR11,"",4) == 0))
            VAR15=FUN2(VAR7,VAR3);
          else
            return(VAR23);
        }
    }
  VAR16=VAR23;
  if (VAR15 != 0)
    {
      VAR13=(VAR12 *) NULL;
      VAR21=(short) FUN7(VAR3);

      if (VAR21 < 0)
        {
          
          VAR21=FUN8(VAR21);
          if (VAR3->VAR24 != VAR22)
            (void) FUN9(VAR25,FUN10(),
              "");
          VAR3->VAR26=VAR27;
        }

      
      if (VAR8 != VAR22)
        return(VAR23);

      if (VAR3->VAR24 != VAR22)
        (void) FUN9(VAR25,FUN10(),
          "",(double) VAR21);

      if (VAR21 == 0)
        FUN11(VAR28,"",
          VAR3->VAR29);

      VAR13=(VAR12 *) FUN12((VAR30) VAR21,
        sizeof(*VAR13));
      if (VAR13 == (VAR12 *) NULL)
        {
          if (VAR3->VAR24 != VAR22)
            (void) FUN9(VAR25,FUN10(),
              "");
          FUN11(VAR31,"",
            VAR3->VAR29);
        }
      (void) FUN13(VAR13,0,(VAR30) VAR21*
        sizeof(*VAR13));

      for (VAR18=0; VAR18 < VAR21; VAR18++)
      {
        VAR17
          VAR32,
          VAR33;

        if (VAR3->VAR24 != VAR22)
          (void) FUN9(VAR25,FUN10(),
            "",(double) VAR18+1);
        VAR13[VAR18].VAR34.VAR33=FUN14(VAR3);
        VAR13[VAR18].VAR34.VAR32=FUN14(VAR3);
        VAR33=FUN14(VAR3);
        VAR32=FUN14(VAR3);
        VAR13[VAR18].VAR34.VAR35=(VAR30) (VAR32-VAR13[VAR18].VAR34.VAR32);
        VAR13[VAR18].VAR34.VAR36=(VAR30) (VAR33-VAR13[VAR18].VAR34.VAR33);
        VAR13[VAR18].VAR37=FUN7(VAR3);
        if (VAR13[VAR18].VAR37 > VAR38)
          {
            VAR13=FUN15(VAR13,VAR21);
            FUN11(VAR28,"",
              VAR3->VAR29);
          }
        if (VAR3->VAR24 != VAR22)
          (void) FUN9(VAR25,FUN10(),
            "",
            (double) VAR13[VAR18].VAR34.VAR32,(double) VAR13[VAR18].VAR34.VAR33,
            (double) VAR13[VAR18].VAR34.VAR36,(double)
            VAR13[VAR18].VAR34.VAR35,(double) VAR13[VAR18].VAR37);
        for (VAR20=0; VAR20 < (VAR17) VAR13[VAR18].VAR37; VAR20++)
        {
          VAR13[VAR18].VAR39[VAR20].VAR11=(short) FUN7(VAR3);
          VAR13[VAR18].VAR39[VAR20].VAR15=(VAR30) FUN2(VAR7,
            VAR3);
          if (VAR3->VAR24 != VAR22)
            (void) FUN9(VAR25,FUN10(),
              "",(double) VAR20,
              (double) VAR13[VAR18].VAR39[VAR20].VAR11,
              (double) VAR13[VAR18].VAR39[VAR20].VAR15);
        }
        VAR19=FUN4(VAR3,4,(unsigned char *) VAR11);
        FUN5(VAR3,VAR11,4);
        if ((VAR19 == 0) || (FUN6(VAR11,"",4) != 0))
          {
            if (VAR3->VAR24 != VAR22)
              (void) FUN9(VAR25,FUN10(),
                "", VAR11);
            VAR13=FUN15(VAR13,VAR21);
            FUN11(VAR28,"",
              VAR3->VAR29);
          }
        VAR19=FUN4(VAR3,4,(unsigned char *) VAR13[VAR18].VAR40);
        FUN5(VAR3,VAR13[VAR18].VAR40,4);
        VAR13[VAR18].VAR41=(VAR42) FUN16((unsigned char)
          FUN17(VAR3));
        VAR13[VAR18].VAR43=(unsigned char) FUN17(VAR3);
        VAR13[VAR18].VAR44=(unsigned char) FUN17(VAR3);
        VAR13[VAR18].VAR45=!(VAR13[VAR18].VAR44 & 0x02);
        if (VAR3->VAR24 != VAR22)
          (void) FUN9(VAR25,FUN10(),
            "",
            VAR13[VAR18].VAR40,(double) VAR13[VAR18].VAR41,
            VAR13[VAR18].VAR43 ? "" : "",VAR13[VAR18].VAR44,
            VAR13[VAR18].VAR45 ? "" : "");
        (void) FUN17(VAR3);  

        VAR15=FUN3(VAR3);
        if (VAR15 != 0)
          {
            VAR14
              VAR46,
              VAR47;

            if (VAR3->VAR24 != VAR22)
              (void) FUN9(VAR25,FUN10(),
                "");
            VAR47=FUN3(VAR3);
            VAR46=VAR47+4;
            if (VAR47 != 0)
              {
                
                VAR13[VAR18].VAR48.VAR34.VAR33=FUN14(VAR3);
                VAR13[VAR18].VAR48.VAR34.VAR32=FUN14(VAR3);
                VAR13[VAR18].VAR48.VAR34.VAR36=(VAR30) (FUN14(VAR3)-
                  VAR13[VAR18].VAR48.VAR34.VAR33);
                VAR13[VAR18].VAR48.VAR34.VAR35=(VAR30) (FUN14(VAR3)-
                  VAR13[VAR18].VAR48.VAR34.VAR32);
                VAR13[VAR18].VAR48.VAR49=(unsigned char) FUN17(
                  VAR3);
                VAR13[VAR18].VAR48.VAR44=(unsigned char) FUN17(VAR3);
                if (!(VAR13[VAR18].VAR48.VAR44 & 0x01))
                  {
                    VAR13[VAR18].VAR48.VAR34.VAR33=VAR13[VAR18].VAR48.VAR34.VAR33-
                      VAR13[VAR18].VAR34.VAR33;
                    VAR13[VAR18].VAR48.VAR34.VAR32=VAR13[VAR18].VAR48.VAR34.VAR32-
                      VAR13[VAR18].VAR34.VAR32;
                  }
                if (VAR3->VAR24 != VAR22)
                  (void) FUN9(VAR25,FUN10(),
                    "",
                    (double) VAR13[VAR18].VAR48.VAR34.VAR32,(double)
                    VAR13[VAR18].VAR48.VAR34.VAR33,(double)
                    VAR13[VAR18].VAR48.VAR34.VAR35,(double)
                    VAR13[VAR18].VAR48.VAR34.VAR36,(double) ((VAR50)
                    VAR47)-18);
                
                if (FUN18(VAR3,(VAR14) (VAR47-18)) == VAR22)
                  {
                    VAR13=FUN15(VAR13,VAR21);
                    FUN11(VAR28,
                      "",VAR3->VAR29);
                  }
              }
            VAR47=FUN3(VAR3);
            VAR46+=VAR47+4;
            if (VAR47 != 0)
              {
                
                if (VAR3->VAR24 != VAR22)
                   (void) FUN9(VAR25,FUN10(),
                     "",(double)
                     ((VAR50) VAR47));

                

                for (VAR20=0; VAR20 < (VAR17) VAR47; VAR20+=8)

                {

                  size_t VAR51=FUN3(VAR3);

                  size_t VAR52=FUN3(VAR3);

                  if (FUN19(VAR3) != VAR22)

                    {

                      VAR13=FUN15(VAR13,VAR21);

                      FUN11(VAR28,

                        "",VAR3->VAR29);

                    }

                  if (VAR3->VAR24 != VAR22)

                    (void) FUN9(VAR25,FUN10(),

                      "",(unsigned int)

                      VAR51,(unsigned int) VAR52);

                }












               }
             
            VAR47=(VAR14) (unsigned char) FUN17(VAR3);
            VAR46+=VAR47+1;
            if (VAR47 > 0)
              (void) FUN4(VAR3,(VAR30) VAR47++,VAR13[VAR18].VAR53);
            VAR13[VAR18].VAR53[VAR47]='';
            if (VAR3->VAR24 != VAR22)
              (void) FUN9(VAR25,FUN10(),
                "",VAR13[VAR18].VAR53);
            if ((VAR47 % 4) != 0)
              {
                VAR47=4-(VAR47 % 4);
                VAR46+=VAR47;
                
                if (FUN18(VAR3,VAR47) == VAR22)
                  {
                    VAR13=FUN15(VAR13,VAR21);
                    FUN11(VAR28,
                      "",VAR3->VAR29);
                  }
              }
            VAR47=(VAR14) VAR15-VAR46;
            if (VAR47 > 0)
              {
                unsigned char
                  *VAR54;

                if (VAR47 > FUN20(VAR3))
                  {
                    VAR13=FUN15(VAR13,VAR21);
                    FUN11(VAR28,
                      "",VAR3->VAR29);
                  }
                VAR13[VAR18].VAR54=FUN21((const VAR30) VAR47);
                VAR54=FUN22(VAR13[VAR18].VAR54);
                (void) FUN4(VAR3,(const VAR30) VAR47,VAR54);
              }
          }
      }

      for (VAR18=0; VAR18 < VAR21; VAR18++)
      {
        if ((VAR13[VAR18].VAR34.VAR35 == 0) || (VAR13[VAR18].VAR34.VAR36 == 0))
          {
            if (VAR3->VAR24 != VAR22)
              (void) FUN9(VAR25,FUN10(),
                "");
            if (VAR13[VAR18].VAR54 != (VAR55 *) NULL)
              VAR13[VAR18].VAR54=FUN23(VAR13[VAR18].VAR54);
            continue;
          }

        
        VAR13[VAR18].VAR3=FUN24(VAR3,VAR13[VAR18].VAR34.VAR35,
          VAR13[VAR18].VAR34.VAR36,VAR22,VAR10);
        if (VAR13[VAR18].VAR3 == (VAR2 *) NULL)
          {
            VAR13=FUN15(VAR13,VAR21);
            if (VAR3->VAR24 != VAR22)
              (void) FUN9(VAR25,FUN10(),
                "",(double) VAR18);
            FUN11(VAR31,"",
              VAR3->VAR29);
          }

        if (VAR13[VAR18].VAR54 != (VAR55 *) NULL)
          {
            (void) FUN25(VAR13[VAR18].VAR3,"",
              VAR13[VAR18].VAR54,VAR10);
            VAR13[VAR18].VAR54=FUN23(VAR13[VAR18].VAR54);
          }
      }

      if (VAR5->VAR56 == VAR22)
        {
          for (VAR18=0; VAR18 < VAR21; VAR18++)
          {
            if (VAR13[VAR18].VAR3 == (VAR2 *) NULL)
              {
                for (VAR20=0; VAR20 < VAR13[VAR18].VAR37; VAR20++)
                {
                  if (FUN18(VAR3,(VAR14)
                      VAR13[VAR18].VAR39[VAR20].VAR15) == VAR22)
                    {
                      VAR13=FUN15(VAR13,VAR21);
                      FUN11(VAR28,
                        "",VAR3->VAR29);
                    }
                }
                continue;
              }

            if (VAR3->VAR24 != VAR22)
              (void) FUN9(VAR25,FUN10(),
                "",(double) VAR18);

            VAR16=FUN26(VAR3,VAR5,VAR7,&VAR13[VAR18],
              VAR10);
            if (VAR16 == VAR22)
              break;

            VAR16=FUN27(VAR3,VAR57,VAR18,(VAR14)
              VAR21);
            if (VAR16 == VAR22)
              break;
          }
        }

      if (VAR16 != VAR22)
        {
          for (VAR18=0; VAR18 < VAR21; VAR18++)
          {
            if (VAR13[VAR18].VAR3 == (VAR2 *) NULL)
              {
                for (VAR20=VAR18; VAR20 < VAR21 - 1; VAR20++)
                  VAR13[VAR20] = VAR13[VAR20+1];
                VAR21--;
                VAR18--;
              }
          }

          if (VAR21 > 0)
            {
              for (VAR18=0; VAR18 < VAR21; VAR18++)
              {
                if (VAR18 > 0)
                  VAR13[VAR18].VAR3->VAR58=VAR13[VAR18-1].VAR3;
                if (VAR18 < (VAR21-1))
                  VAR13[VAR18].VAR3->VAR59=VAR13[VAR18+1].VAR3;
                VAR13[VAR18].VAR3->VAR34=VAR13[VAR18].VAR34;
              }
              VAR3->VAR59=VAR13[0].VAR3;
              VAR13[0].VAR3->VAR58=VAR3;
            }
          VAR13=(VAR12 *) FUN28(VAR13);
        }
      else
        VAR13=FUN15(VAR13,VAR21);
    }

  return(VAR16);
}
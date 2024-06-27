void VAR1::FUN1(
    const VAR2& VAR3,
    VAR4::SecurityLevel VAR5,
    const VAR4::VAR6& VAR7) {
#if !FUN2(VAR8)
  
  
  FUN3(!VAR3.FUN4(VAR9::VAR10) &&
         !VAR3.FUN4(VAR9::VAR11) &&
         !VAR3.FUN4(VAR9::VAR12) &&
         !VAR3.FUN4(VAR13::VAR14));
#endif

  bool VAR15 = false;
#if FUN2(VAR8)
  VAR15 = VAR3.FUN4(VAR16::VAR17);
#endif

  VAR18 = VAR5;

  if (VAR3.FUN4(VAR3::VAR19)) {
     
     FUN5(VAR3::VAR20, VAR3.FUN6());
     VAR21 = VAR22;

    VAR23 =


         VAR24::FUN7(VAR25);
     VAR26 = VAR27;
     VAR28 = VAR24::FUN8(
        VAR29,
        FUN9(VAR3.FUN6()));
    return;
  }
 
   if (VAR3.FUN4(VAR9::VAR10) || VAR15) {
     VAR21 = VAR30;

    VAR23 =


         VAR24::FUN7(VAR31);
     VAR26 = VAR32;
     return;
  }

   
   VAR33 = VAR7.VAR34;
 

  if (VAR33 &&

      (!VAR35::FUN10(VAR7.VAR36) ||

       VAR35::FUN11(VAR7.VAR36))) {


















































     
     if (VAR5 == VAR4::VAR37) {
 #if FUN2(VAR38)
       VAR21 = VAR39;

      VAR23 = VAR24::FUN8(


           VAR40, FUN9(VAR3.FUN12()));
 #else
       FUN3(false) << "";
#endif
    } else if (VAR35::FUN11(
                   VAR7.VAR36)) {
      VAR21 = VAR41;
      VAR42::VAR43 FUN13(
          FUN9(VAR33->FUN14().FUN15()));
      if (VAR44.FUN16()) {
        VAR44.FUN17(VAR24::FUN7(
             VAR45));
       }
 

      VAR23.FUN17(VAR24::FUN8(


           VAR46, VAR44));
 

      VAR23 += FUN18("");


       if (VAR7.VAR36 &
           VAR35::VAR47) {

        VAR23 += VAR24::FUN7(


             VAR48);
       } else if (VAR7.VAR36 &
                  VAR35::VAR49) {

        VAR23 += VAR24::FUN7(


             VAR50);
       } else {
         FUN19() << "";
      }
    } else {
      
      if (VAR7.VAR36 & VAR35::VAR51) {
        
        VAR21 = VAR52;
        FUN3(!VAR33->FUN20().VAR53.FUN16());
        VAR54 =
            FUN9(VAR33->FUN20().VAR53[0]);
        
         
         FUN3(!VAR33->FUN20().VAR55.FUN16());
         FUN3(!VAR33->FUN20().VAR56.FUN16());

        VAR23.FUN17(VAR24::FUN8(


             VAR57,
             VAR54,
             FUN9(VAR33->FUN20().VAR56)));
      } else {
        
        VAR21 = VAR58;
        VAR42::VAR43 FUN13(
            FUN9(VAR33->FUN14().FUN15()));
        if (VAR44.FUN16()) {
          VAR44.FUN17(VAR24::FUN7(
               VAR45));
         }
 

        VAR23.FUN17(VAR24::FUN8(


             VAR46, VAR44));
       }
       if (VAR4::FUN21(VAR7)) {
         VAR21 =
             VAR59;

        VAR23 +=


             FUN9("") +
             VAR24::FUN7(
                 VAR60);
       }
     }
   } else {
     

    VAR23.FUN17(VAR24::FUN7(


         VAR25));
     if (!VAR4::FUN22(VAR7.VAR3) ||
         !VAR7.VAR34) {
      VAR21 = VAR22;
    } else {
      VAR21 = VAR61;
    }

    const VAR42::string16 VAR62 = FUN9("");
    VAR63::VAR64<VAR65::VAR66> VAR67;
     VAR65::VAR66::FUN23(
         VAR33, VAR7.VAR36, VAR3, &VAR67);
     for (size_t VAR68 = 0; VAR68 < VAR67.FUN24(); ++VAR68) {

      VAR23 += VAR62;

      VAR23 += VAR67[VAR68].FUN25();




     }
 
     if (VAR7.VAR36 & VAR35::VAR69) {

      VAR23 += FUN18("");

      VAR23 +=




           VAR24::FUN7(VAR70);
     }
   }
 

  if (VAR7.VAR71 !=

      VAR4::VAR72) {

    

    FUN26(

        VAR7.VAR71, &VAR73,

        &VAR23);

#if FUN2(VAR74)

    bool VAR75 = VAR76;

#endif

    VAR76 =

        (VAR7.VAR71 ==

             VAR4::VAR77 ||

         VAR7.VAR71 ==

             VAR4::

                 VAR78);

#if FUN2(VAR74)

    

    if (VAR76 && !VAR75) {

      FUN27();

    }

#endif

  }


   
   
   
  
  VAR26 = VAR79;

  VAR42::VAR43 FUN28(FUN29(VAR3));
  if (VAR80.FUN16()) {
    VAR80.FUN17(
        VAR24::FUN7(VAR45));
  }

  if (!VAR7.VAR34 ||
      !VAR4::FUN22(VAR7.VAR3)) {
    
    
    VAR26 = VAR27;

    VAR28.FUN17(VAR24::FUN8(
        VAR29,
        VAR80));
  } else if (!VAR7.VAR81) {
    FUN30(VAR5, VAR4::VAR82);
    VAR26 = VAR83;
  } else {
    VAR26 = VAR84;

    if (VAR35::FUN31(
            VAR7.VAR85,
            VAR7.VAR86) ==
        VAR35::VAR87) {
      VAR28.FUN17(VAR24::FUN8(
          VAR88, VAR80));
    } else {
      VAR28.FUN17(VAR24::FUN8(
          VAR89,
          VAR80));
    }

    FUN32(VAR7, &VAR26,
                             &VAR28);
  }

  uint16_t VAR90 = VAR35::FUN33(
      VAR7.VAR85);
  if (VAR7.VAR81 && VAR90) {
    int VAR91 = VAR35::FUN34(
        VAR7.VAR85);
    const char* VAR92;
    VAR35::FUN35(&VAR92, VAR91);
    VAR28 += FUN18("");
    VAR28 += VAR24::FUN8(
        VAR93, FUN18(VAR92));

    const char *VAR94, *VAR95, *VAR96;
    bool VAR97, VAR98;
    VAR35::FUN36(&VAR94, &VAR95, &VAR96, &VAR97,
                                 &VAR98, VAR90);

    VAR28 += FUN18("");
    if (VAR97) {
      if (VAR98) {
        
        
        VAR94 =
            FUN37(VAR7.VAR99);
        if (!VAR94) {
          FUN19();
          VAR94 = "";
        }
      }
      VAR28 += VAR24::FUN8(
          VAR100,
          FUN18(VAR95), FUN18(VAR94));
    } else {
      VAR28 += VAR24::FUN8(
          VAR101, FUN18(VAR95),
          FUN18(VAR96), FUN18(VAR94));
    }
  }

  
  
  VAR102* VAR103 =
       VAR104::FUN38(VAR105);
   FUN3(VAR103);
   

  

  

  

  VAR106 =

      VAR103->FUN39(VAR3.FUN12()) &&

      VAR7.VAR71 ==

          VAR4::VAR72;




 }
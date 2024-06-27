bool FUN1(VAR1* VAR2, int VAR3) {

  int VAR4 = socket(VAR5, VAR6, 0);

  if (VAR4 <= 0) {

    FUN2(VAR7) << "";

    return false;






   }



  uint32_t VAR8 = 0;

  if (FUN3(VAR4, &VAR8) < 0) {

    FUN2(VAR7) << "";

    FUN4(close(VAR4) == 0);

    return false;




   }




 

  for (uint32_t VAR9 = 0; VAR9 < VAR8; ++VAR9) {

    netc_if_info_t VAR10;








 

    if (FUN5(VAR4, &VAR9, &VAR10) < 0) {

      FUN2(VAR11) << "";

      continue;

    }






 

    

    if (VAR12::FUN6(

            reinterpret_cast<VAR13*>(&(VAR10.VAR14)))) {






       continue;

    }
 

    IPEndPoint VAR15;

    if (!VAR15.FUN7(reinterpret_cast<VAR13*>(&(VAR10.VAR14)),

                              sizeof(VAR10.VAR14))) {

      FUN8(VAR11) << "";




       continue;

    }
 

    int VAR16 = 0;

    IPEndPoint VAR17;

    if (VAR17.FUN7(reinterpret_cast<VAR13*>(&(VAR10.VAR17)),

                             sizeof(VAR10.VAR17))) {

      VAR16 = FUN9(VAR17.FUN10());

    }








 
     

    

    


     int VAR18 = 0;
 

    VAR2->FUN11(

        FUN12(VAR10.VAR19, VAR10.VAR19, VAR10.VAR20,

                         VAR21::VAR22,

                         VAR15.FUN10(), VAR16, VAR18));










   }
 

  FUN4(close(VAR4) == 0);


   return true;
 }
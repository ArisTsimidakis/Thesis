WebNavigationPolicy VAR1::FUN1(
    VAR2* VAR3, const VAR4& VAR5, WebNavigationType VAR6,
    const VAR7&, WebNavigationPolicy VAR8, bool VAR9) {
  
  if (VAR10) {
    
    
    if (VAR5.FUN2() != FUN3(""))
      return VAR11::VAR12;

    
    return VAR8;
  }

  
  
  
  const VAR13& VAR14 = VAR5.FUN2();

  
  
  bool VAR15 =
      VAR16::FUN4(VAR3->FUN5())->
          FUN6()->FUN7();

  
  
  
  
  
  const VAR17& VAR18 = *VAR17::FUN8();
  if (VAR18.FUN9(VAR19::VAR20) &&
      !VAR3->FUN10() && (VAR15 || VAR9)) {
    WebString VAR21 = VAR3->FUN11().FUN12().FUN13();
    VAR13 FUN14(VAR21.FUN15().FUN16());
    
    
    if (VAR22.FUN17() != VAR14.FUN17()) {
      VAR23 FUN18(
          FUN3(VAR5.FUN19(VAR24::FUN20(""))),
          FUN21(VAR5));
      FUN22(VAR3, VAR14, VAR25, VAR8);
      return VAR11::VAR12;
    }
  }

  
  
  if (VAR15) {
    bool VAR26 =
        VAR27.VAR26 &&
        FUN23(VAR14, VAR3, VAR6);
    if (VAR26 ||
        VAR27.VAR28) {
      VAR23 FUN18(
          FUN3(VAR5.FUN19(VAR24::FUN20(""))),
          FUN21(VAR5));
      
      
      VAR29 = -1;
      VAR30 = -1;
      FUN22(VAR3, VAR14, VAR25, VAR8);
      return VAR11::VAR12;  
    }
  }
 
   
   

  

  

  




   

  

  

  

  

  

  












   
   
   if (!VAR3->FUN10() && VAR15 &&

      VAR8 == VAR11::VAR31 &&

      VAR5.FUN24() == "" && !VAR14.FUN25(VAR32::VAR33)) {


     bool VAR34 = false;
















     bool VAR35 =

        (VAR36 & VAR37::VAR38) ||

        VAR3->FUN26() ||

        VAR14.FUN25(VAR32::VAR39);








 
     if (!VAR35) {
       

      bool VAR40 = VAR29 == -1;

      VAR35 = VAR37::FUN27()->FUN28()->FUN29(

          VAR3, VAR14, VAR40, &VAR34);


















     }
 
     if (VAR35) {
      VAR23 FUN18(
          FUN3(VAR5.FUN19(VAR24::FUN20(""))),
          FUN21(VAR5));
      FUN22(
          VAR3, VAR14, VAR34 ? VAR25 : FUN30(), VAR8);
      return VAR11::VAR12;  
    }
  }

  
  
  
  VAR13 FUN31(VAR3->FUN32()->FUN33().FUN2());

  
  
  
  
  
  
  
  
  
  
  
  
  
  
  bool VAR41 =
      
      VAR42 == FUN3(VAR32::VAR43) &&
      
      FUN34() < 1 &&
      FUN35() < 1 &&
      
      
      VAR3->FUN36() == NULL &&
      
      VAR3->FUN10() == NULL &&
      
      VAR15 &&
      
      VAR8 == VAR11::VAR31 &&
      
      VAR6 == VAR11::VAR44;

  if (VAR41) {
    
    FUN22(VAR3, VAR14, FUN30(), VAR8);
    return VAR11::VAR12;
  }

  return VAR8;
}
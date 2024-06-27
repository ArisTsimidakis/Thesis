bool FUN1(const VAR1<VAR2>& VAR3,
                           const VAR4& VAR5,
                           VAR6* VAR7,
                           VAR4* VAR8) {
  
  bool VAR9 = FUN2(VAR3.VAR10, VAR5.VAR10,
                                    VAR7, &VAR8->VAR10);

  
  
  VAR8->VAR11.FUN3();
  VAR8->VAR12.FUN3();
  VAR8->VAR13.FUN3();
   VAR8->VAR14.FUN3();
   
   

  VAR9 &= VAR15<VAR2, VAR16>(

      VAR3.VAR17, VAR5.VAR17, '', VAR7, &VAR8->VAR17);

  VAR9 &= VAR15<VAR2, VAR16>(

      VAR3.VAR18, VAR5.VAR18, '', VAR7, &VAR8->VAR18);

  VAR9 &= VAR15<VAR2, VAR16>(

      VAR3.VAR19, VAR5.VAR19, '', VAR7, &VAR8->VAR19);


















 
   return VAR9;
 }
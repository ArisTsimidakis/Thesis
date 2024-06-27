VAR1* VAR2::FUN1(VAR3* VAR4,
                                     const VAR5& VAR6,
                                     const VAR7& VAR8,
                                     NavigationPolicy VAR9,
                                     SandboxFlags VAR10) {
  if (!VAR11->FUN2())
    return nullptr;
 
   if (!VAR4->FUN3() || VAR4->FUN3()->FUN4())
     return nullptr;

  FUN5(VAR4->FUN6());

  VAR12::FUN7(*VAR4->FUN6());
 
   const VAR13& VAR14 =
       !FUN8(VAR6.FUN9(), "") ? VAR6.FUN9()
                                                       : VAR15;
  VAR16* VAR17 =
      static_cast<VAR16*>(VAR11->FUN2()->FUN10(
          VAR18::FUN11(VAR4),
          FUN12(VAR6.FUN13()), VAR8, VAR14,
          static_cast<VAR19>(VAR9),
          VAR6.FUN14() == VAR20,
          static_cast<VAR21>(VAR10)));
  if (!VAR17)
    return nullptr;
  return VAR17->FUN3();
}
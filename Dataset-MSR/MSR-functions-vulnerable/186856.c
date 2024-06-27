void VAR1::FUN1(
    int VAR2,
    const VAR3::VAR4* VAR5,
    VAR6::VAR7<VAR3::VAR8> VAR9) {
  FUN2(VAR10);
  FUN3(VAR11);
  FUN3(VAR5);
  FUN3(VAR9);

  VAR3::SharedMemoryHandle VAR12 =
      VAR3::VAR4::FUN4(VAR5->FUN5());
  if (!VAR3::VAR4::FUN6(VAR12)) {
    FUN7( 0);
    return;
   }
 
   VAR13::ScopedSharedBufferHandle VAR14 = VAR13::FUN8(

      VAR12, VAR5->FUN9(), false);




   VAR13::ScopedHandle VAR15 =
       VAR13::FUN10(VAR9->FUN11());
 
  FUN3(VAR14.FUN12());
  FUN3(VAR15.FUN12());

  VAR3::FUN13(&VAR11)
      .FUN14(VAR6::move(VAR14), VAR6::move(VAR15));
}
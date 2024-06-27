void FUN1(

    int VAR1, int VAR2,

    bool VAR3, bool VAR4,








     VAR5* VAR6) {
   int64 VAR7 = VAR6->FUN2(VAR6::VAR8);
   int64 VAR9 = VAR6->FUN2(VAR6::VAR10);
  VAR7 += VAR1;
  VAR9 += VAR2;
  VAR6->FUN3(VAR6::VAR8, VAR7);
  VAR6->FUN3(VAR6::VAR10, VAR9);

#if FUN4(VAR11) || FUN4(VAR12)
  FUN5(
       VAR1,
       VAR2,
       VAR3,

      VAR4,


       VAR13::VAR14::FUN6(),
       VAR6);
 #endif  

}
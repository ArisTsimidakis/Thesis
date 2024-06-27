VAR1::FUN1(
     VAR2::VAR3* VAR4,
     VAR5::VAR6<VAR7> VAR8,


     VAR9::VAR10<VAR11> VAR12)
     : FUN2(VAR4),
       FUN3(VAR9::move(VAR8)),




       FUN4(VAR9::move(VAR12)),
       FUN5(this) {}
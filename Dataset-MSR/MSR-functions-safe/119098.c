void FUN1(void *const *VAR1,
                      size_t VAR2,
                      VAR3* VAR4) {
  
  

#if FUN2(VAR5)
  for (size_t VAR6 = 0; VAR6 < VAR2; ++VAR6) {
    FUN3(VAR6, VAR4);
    VAR4->FUN4("");
    FUN5(VAR1[VAR6], VAR4);
    VAR4->FUN4("");

    char VAR7[1024] = { '' };

    
    
    void* VAR8 = static_cast<char*>(VAR1[VAR6]) - 1;
    if (VAR9::FUN6(VAR8, VAR7, sizeof(VAR7)))
      VAR4->FUN4(VAR7);
    else
      VAR4->FUN4("");

    VAR4->FUN4("");
  }
#VAR10 !FUN2(VAR11)
  bool VAR12 = false;

  
  
  if (VAR13 == 0) {
    VAR14<char*, VAR15>
        FUN7(FUN8(VAR1, VAR2));
    if (VAR16.FUN9()) {
      for (size_t VAR6 = 0; VAR6 < VAR2; ++VAR6) {
        VAR17::string VAR18 = VAR16.FUN9()[VAR6];
        FUN10(&VAR18);
        VAR4->FUN4(VAR18.FUN11());
        VAR4->FUN4("");
      }

      VAR12 = true;
    }
  }

  if (!VAR12) {
    for (size_t VAR6 = 0; VAR6 < VAR2; ++VAR6) {
      VAR4->FUN4("");
      FUN5(VAR1[VAR6], VAR4);
      VAR4->FUN4("");
    }
  }
#endif  
}
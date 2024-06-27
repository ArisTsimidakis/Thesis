VAR1::FUN1(

    VAR2* VAR3) {

  FUN2(VAR4::VAR5::FUN3());

  if (!VAR3->FUN4()) {

    

    return nullptr;

  }

  int32_t VAR6 = VAR3->FUN4()->FUN5()->FUN6();

  auto& VAR7 = *FUN7();

  if (!VAR8::FUN8(VAR7, VAR6) || !VAR7[VAR6]) {

    

    return nullptr;

  }

  for (auto& VAR9 : VAR7[VAR6]->VAR10) {

    if (!VAR9.VAR11->FUN9(VAR3))

      continue;

    

    

    

    return VAR12::VAR13<VAR14>(

        VAR3);

  }

  return nullptr;

}
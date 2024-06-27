int VAR1::FUN1(const char* VAR2, size_t VAR3) {

  VAR4 = VAR5;

  if (VAR3 < VAR6) {

    return -1;

  }

  if (!memcmp(VAR2, VAR7, VAR6)) {

    VAR4 = VAR8;

  } else {

    int VAR9 = VAR10::FUN2(VAR2, VAR3);

    if (VAR9 < 0)

      return -1;

    return VAR9;

  }

  const char* VAR11 = VAR2 + VAR6;

  const char* VAR12 = VAR2 + VAR3 + 1;



  if (VAR4 == VAR8) {

    size_t VAR13 = VAR12 - VAR11;

    if (VAR13 < VAR14)

      return -1;

    if (memcmp(VAR11, VAR15, VAR14)) {

      VAR4 = VAR16;

      FUN3(VAR17) << ""

                 << VAR18::FUN4(VAR11, VAR14);

      return VAR11 - VAR2;

    }

    VAR11 += VAR14;

    VAR13 = VAR12 - VAR11;

    if (VAR13 < VAR19)

      return -1;

    if (memcmp(VAR11, VAR20, VAR19)) {

      VAR4 = VAR16;

      FUN3(VAR17) << ""

                 << VAR18::FUN4(VAR11, VAR19);

      return VAR11 - VAR2;

    }

    VAR11 += VAR19;

  }



  int VAR9 = VAR10::FUN2(VAR2, VAR3);

  if (VAR9 == -1)

    return VAR9;



  VAR21<VAR22> FUN5(

      new FUN6(VAR10::FUN7(VAR2, VAR9)));

  if (!FUN8(*VAR23)) {

    FUN3(VAR17) << ""

               << VAR18::FUN4(VAR2, VAR9);

    VAR4 = VAR16;

  }

  switch (VAR4) {

    case VAR8:

      if (FUN9()) {

        VAR4 = VAR24;

      } else {

        VAR4 = VAR16;

      }

      break;

    default:

      VAR4 = VAR16;

      break;

  }

  return VAR9;

}
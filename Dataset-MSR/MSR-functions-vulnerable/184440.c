bool FUN1(const VAR1& VAR2,

                         VAR3::CacheSubDirectoryType VAR4,

                         const VAR5::VAR6<VAR1>& VAR7,

                         VAR5::VAR8* VAR9) {

  FUN2(VAR4 == VAR3::VAR10 ||

         VAR4 == VAR3::VAR11);



  FilePath VAR12;

  if (!VAR13::FUN3(VAR2, &VAR12)) {

    *VAR9 = "";

    return false;

  }



  if (!VAR13::FUN4(VAR12)) {

    *VAR9 = "";

    return false;

  }



  

  if (VAR4 == VAR3::VAR10 &&

      VAR12 == VAR1::FUN5(VAR14::VAR15)) {

    return true;

  }



  

  if (!VAR7[VAR3::VAR16].FUN6(VAR12)) {

    *VAR9 = "";

    return false;

  }



  return true;

}
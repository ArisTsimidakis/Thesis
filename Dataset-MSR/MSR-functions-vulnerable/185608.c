VAR1 FUN1(const VAR2::VAR3& VAR4,

                            const VAR5::VAR6& VAR7) {




   if (VAR7.FUN2())
     return VAR8;
 
  
  if (!VAR5::FUN3(VAR7)) {
    FUN4(VAR9) << "" << VAR7.FUN5();
     return VAR10;
   }
 










   
   const VAR5::FilePath VAR11 =
       VAR7.FUN6("");
  const VAR2::string VAR12 = "";
  const int VAR13 = VAR5::FUN7(
      VAR11, VAR12.FUN8(), VAR12.FUN9());
  if (VAR13 != static_cast<int>(VAR12.FUN9())) {
    FUN4(VAR9) << ""
                << VAR11.FUN5();
    return VAR14;
  }

  return VAR15;
}
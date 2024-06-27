VAR1::VAR2 FUN1(const VAR3<double>& VAR4) {
  
  
  return VAR4.FUN2()
             ? VAR1::VAR5::FUN3(VAR4.FUN4()) +
                   VAR1::VAR2::FUN5()
             : VAR1::VAR2::FUN6();
}
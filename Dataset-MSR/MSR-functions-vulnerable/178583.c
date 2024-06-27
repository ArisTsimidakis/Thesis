VAR1* VAR1::FUN1(VAR2::VAR3* VAR4) {


   VAR5* VAR6 =
       static_cast<VAR5*>(VAR4->FUN2());
   if (!VAR6) {
    return nullptr;
  }

   return VAR6->FUN3();
 }
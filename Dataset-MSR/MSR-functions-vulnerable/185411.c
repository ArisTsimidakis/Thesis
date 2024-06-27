bool VAR1::FUN1(VAR2* VAR3) {
 #ifdef VAR4
   FUN2(!VAR5 || VAR6);

  FUN2(!VAR7);
 
   ULONG64 VAR8;
   
  PRUNTIME_FUNCTION VAR9 =
      VAR10->FUN3(VAR3->VAR11, &VAR8);

  if (VAR9) {
    VAR10->FUN4(VAR8, VAR3->VAR11, VAR9,
                                     VAR3);
    VAR5 = false;
  } else {
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

    if (VAR5) {
      VAR5 = false;

      
      
      
      
      
      if (VAR12::FUN5()->FUN6(
              reinterpret_cast<const void*>(VAR8))) {
        return false;
      }

      VAR3->VAR11 = VAR3->VAR13;
      VAR3->VAR13 += 8;
      VAR6 = false;
    } else {
      
      
       if (VAR6) {
         
         

        VAR7 =

            reinterpret_cast<const void *>(VAR8);




       } else {
         
         
        
        
        
        
        
      }
      return false;
    }
  }

  return true;
#else
  FUN7();
  return false;
#endif
 }
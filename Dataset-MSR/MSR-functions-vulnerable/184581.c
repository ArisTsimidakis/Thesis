VAR1* VAR2::FUN1(
    VAR3::CauseForGpuLaunch VAR4) {
  if (VAR5.FUN2()) {
    
    
    if (VAR5->FUN3() == VAR1::VAR6 ||
        VAR5->FUN3() == VAR1::VAR7)
      return FUN4();

    
    VAR5 = NULL;
  }

   
   int VAR8 = 0;
   VAR9::ChannelHandle VAR10;

  VAR11::ProcessHandle VAR12;
   VAR3::GPUInfo VAR13;
   if (!FUN5(new FUN6(VAR4,
                                                &VAR8,
                                                &VAR10,

                                               &VAR12,
                                                &VAR13)) ||

      VAR10.VAR14.FUN7() ||
 #if FUN8(VAR15)
       VAR10.socket.VAR16 == -1 ||
 #endif

      VAR12 == VAR11::VAR17) {


     
     VAR5 = NULL;
     return NULL;
  }

  VAR5 = new FUN9(this, 0, VAR8);
  VAR5->FUN10(VAR13);
   VAR3::FUN11()->FUN12(VAR13);
 
   

  VAR5->FUN13(VAR10, VAR12);


 
   return FUN4();
 }
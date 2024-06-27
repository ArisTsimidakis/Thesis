long VAR1::VAR2::FUN1(VAR3* VAR4, long long VAR5, long long VAR6) {
 const long long VAR7 = VAR5 + VAR6;

 while (VAR5 < VAR7) {
 long long VAR8, VAR6;

 long VAR9 = FUN2(VAR4, VAR5, VAR7, VAR8, VAR6);

 if (VAR9 < 0) 
 return VAR9;

 if (VAR6 == 0) 
 continue;

 if (VAR8 == 0x00) { 
      VAR9 = FUN3(VAR4, VAR5, VAR6);

 if (VAR9 < 0) 
 return VAR9;
 } else if (VAR8 == 0x1654) { 
      VAR9 = FUN4(VAR4, VAR5, VAR6, VAR10);

 if (VAR9 < 0) 
 return VAR9;
 } else if (VAR8 == 0x33C4) { 
 long long VAR11;
      VAR9 = FUN5(VAR4, VAR5, VAR6, VAR11);

 if (VAR9 < 0) 
 return VAR9;

      VAR12 = static_cast<unsigned long long>(VAR11);
 } else if (VAR8 == 0x11) { 
 const long long VAR11 = FUN6(VAR4, VAR5, VAR6);

 if (VAR11 < 0) 
 return static_cast<long>(VAR11);

      VAR13 = VAR11;
 } else if (VAR8 == 0x12) { 
 const long long VAR11 = FUN6(VAR4, VAR5, VAR6);

 if (VAR11 < 0) 
 return static_cast<long>(VAR11);

      VAR14 = VAR11;

     }
 
     VAR5 += VAR6;

    assert(VAR5 <= VAR7);




   }
 

  assert(VAR5 == VAR7);




   return 0;
 }
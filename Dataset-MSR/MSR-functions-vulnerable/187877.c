bool VAR1::FUN1(VAR2* VAR3, long long VAR4, long long VAR5,
                           VAR6* VAR7) {
   if (VAR5 <= 0)
 return false;

 long long VAR8 = VAR4;
 const long long VAR9 = VAR4 + VAR5;

 long VAR10;

 
   
 

  const long long VAR11 = FUN2(VAR3, VAR8, VAR10);

  






 
   if (VAR11 != 0x13AB)  
     return false;

 if ((VAR8 + VAR10) > VAR9)
 return false;

  VAR8 += VAR10; 

 const long long VAR12 = FUN2(VAR3, VAR8, VAR10);

 if (VAR12 <= 0)
 return false;

 if ((VAR8 + VAR10) > VAR9)
 return false;

  VAR8 += VAR10; 

 if ((VAR8 + VAR12) > VAR9)
 return false;

 
 
 
 
 
 
 
 
 
 

  VAR7->VAR13 = FUN2(VAR3, VAR8, VAR10); 

 if (VAR7->VAR13 <= 0)
 return false;

 if (VAR10 != VAR12)
 return false;

  VAR8 += VAR12; 

 const long long VAR14 = FUN2(VAR3, VAR8, VAR10);

 if (VAR14 != 0x13AC) 
 return false;

 if ((VAR8 + VAR10) > VAR9)
 return false;

  VAR8 += VAR10; 

 const long long VAR15 = FUN2(VAR3, VAR8, VAR10);

 if (VAR15 <= 0)
 return false;

 if ((VAR8 + VAR10) > VAR9)
 return false;

  VAR8 += VAR10; 

 if ((VAR8 + VAR15) > VAR9)
 return false;

  VAR7->VAR8 = FUN3(VAR3, VAR8, VAR15);

 if (VAR7->VAR8 < 0)
 return false;

  VAR8 += VAR15; 

 if (VAR8 != VAR9)
 return false;

 
   return true;
 }
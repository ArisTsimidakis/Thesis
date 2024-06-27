long VAR1::FUN1() {
  assert(VAR2 == NULL);
  assert(VAR3 == NULL);

 const long long VAR4 = VAR5 + VAR6;
 VAR7* const VAR8 = VAR9->VAR10;

 int VAR11 = 0;
 long long VAR12 = VAR5;

 while (VAR12 < VAR4) {
 long long VAR13, VAR14;

 const long VAR15 = FUN2(VAR8, VAR12, VAR4, VAR13, VAR14);

 if (VAR15 < 0) 
 return VAR15;

 if (VAR14 == 0) 
 continue;

 if (VAR13 == 0x2E) 

       ++VAR11;
 
     VAR12 += VAR14;  

    assert(VAR12 <= VAR4);




   }
 

  assert(VAR12 == VAR4);




 
   if (VAR11 <= 0)
     return 0;  
 

  VAR2 = new (VAR16::VAR17) VAR18* [VAR11];


 
   if (VAR2 == NULL)
     return -1;

  VAR3 = VAR2;

  VAR12 = VAR5;

 while (VAR12 < VAR4) {
 const long long VAR19 = VAR12;

 long long VAR13, VAR20;

 const long VAR15 =
 FUN2(VAR8, VAR12, VAR4, VAR13, VAR20);

 if (VAR15 < 0) 
 return VAR15;

 if (VAR20 == 0) 
 continue;

 const long long VAR21 = VAR12 + VAR20;
    assert(VAR21 <= VAR4); 

 const long long VAR22 = VAR21 - VAR19;

 if (VAR13 == 0x2E) { 
 VAR18*& VAR23 = *VAR3;
      VAR23 = NULL;

 const long VAR15 = FUN3(VAR12, VAR20, VAR19,
                                          VAR22, VAR23);

 if (VAR15)
 return VAR15;

 if (VAR23)
 ++VAR3;

     }
 
     VAR12 = VAR21;

    assert(VAR12 <= VAR4);




   }
 

  assert(VAR12 == VAR4);




 
   return 0;  
 }
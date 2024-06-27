long VAR1::FUN1() {
 VAR2* const VAR3 = VAR4->VAR5;

 long long VAR6 = VAR7;
 const long long VAR8 = VAR7 + VAR9;

 

 int VAR10 = 0;
 int VAR11 = 0;

 while (VAR6 < VAR8) {
 long long VAR12, VAR13;

 const long VAR14 = FUN2(VAR3, VAR6, VAR8, VAR12, VAR13);

 if (VAR14 < 0) 
 return VAR14;

 if (VAR12 == 0x0DBB) 
 ++VAR10;
 else if (VAR12 == 0x6C) 

       ++VAR11;
 
     VAR6 += VAR13;  

    assert(VAR6 <= VAR8);






   }
 

  assert(VAR6 == VAR8);




 
   VAR15 = new (VAR16::VAR17) VAR18[VAR10];
 
 if (VAR15 == NULL)
 return -1;

  VAR19 = new (VAR16::VAR17) VAR20[VAR11];

 if (VAR19 == NULL)
 return -1;

 

 VAR18* VAR21 = VAR15;
 VAR20* VAR22 = VAR19;

  VAR6 = VAR7;

 while (VAR6 < VAR8) {
 const long long VAR23 = VAR6;

 long long VAR12, VAR13;

 const long VAR14 = FUN2(VAR3, VAR6, VAR8, VAR12, VAR13);

 if (VAR14 < 0) 
 return VAR14;

 if (VAR12 == 0x0DBB) { 
 if (FUN3(VAR3, VAR6, VAR13, VAR21)) {
 VAR18& VAR24 = *VAR21++;

        VAR24.VAR25 = VAR23;
        VAR24.VAR26 = (VAR6 + VAR13) - VAR23;
 }
 } else if (VAR12 == 0x6C) { 
 VAR20& VAR24 = *VAR22++;

      VAR24.VAR25 = VAR23;
      VAR24.VAR26 = (VAR6 + VAR13) - VAR23;

     }
 
     VAR6 += VAR13;  

    assert(VAR6 <= VAR8);




   }
 

  assert(VAR6 == VAR8);




 
   ptrdiff_t VAR27 = FUN4(VAR21 - VAR15);
   assert(VAR27 >= 0);
  assert(VAR27 <= VAR10);

  VAR28 = static_cast<int>(VAR27);

  VAR27 = FUN4(VAR22 - VAR19);
  assert(VAR27 >= 0);
  assert(VAR27 <= VAR11);

  VAR29 = static_cast<int>(VAR27);

 return 0;
}
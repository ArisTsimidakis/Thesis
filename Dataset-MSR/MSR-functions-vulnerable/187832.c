long VAR1::FUN1(const VAR2*& VAR3, long long& VAR4, long& VAR5) {
 long long VAR6, VAR7;

 long VAR8 = VAR9->FUN2(&VAR6, &VAR7);

 if (VAR8 < 0) 
 return VAR8;

  assert((VAR6 < 0) || (VAR7 <= VAR6));

 const long long VAR10 = (VAR11 < 0) ? -1 : VAR12 + VAR11;

 
 
 

 long long VAR13 = 0;
 long long VAR14 = -1;

 for (;;) {
 if ((VAR6 >= 0) && (VAR4 >= VAR6))
 return 1; 

 if ((VAR10 >= 0) && (VAR4 >= VAR10))
 return 1; 

 if ((VAR4 + 1) > VAR7) {
      VAR5 = 1;
 return VAR15;
 }

 long long VAR16 = FUN3(VAR9, VAR4, VAR5);

 if (VAR16 < 0) 
 return static_cast<long>(VAR16);

 if (VAR16 > 0) 
 return VAR15;

 if ((VAR10 >= 0) && ((VAR4 + VAR5) > VAR10))
 return VAR17;

 if ((VAR4 + VAR5) > VAR7)
 return VAR15;

 const long long VAR18 = VAR4; 
 const long long VAR19 = VAR4 - VAR12; 

 const long long VAR20 = FUN4(VAR9, VAR18, VAR5); 

 if (VAR20 < 0) 
 return static_cast<long>(VAR20);

 if (VAR20 == 0) 
 return -1; 

    VAR4 += VAR5; 

 

 if ((VAR4 + 1) > VAR7) {
      VAR5 = 1;
 return VAR15;
 }

    VAR16 = FUN3(VAR9, VAR4, VAR5);

 if (VAR16 < 0) 
 return static_cast<long>(VAR16);

 if (VAR16 > 0) 
 return VAR15;

 if ((VAR10 >= 0) && ((VAR4 + VAR5) > VAR10))
 return VAR17;

 if ((VAR4 + VAR5) > VAR7)
 return VAR15;

 const long long VAR21 = FUN4(VAR9, VAR4, VAR5);

 if (VAR21 < 0) 
 return static_cast<long>(VAR21);

    VAR4 += VAR5; 

 

 if (VAR21 == 0) 
 continue;

 const long long VAR22 = (1LL << (7 * VAR5)) - 1;

 if ((VAR10 >= 0) && (VAR21 != VAR22) &&
 ((VAR4 + VAR21) > VAR10)) {
 return VAR17;
 }

 if (VAR20 == 0x0C53BB6B) { 
 if (VAR21 == VAR22)
 return VAR17;

 const long long VAR23 = VAR4 + VAR21;

 if ((VAR10 >= 0) && (VAR23 > VAR10))
 return VAR17;

 const long long VAR24 = VAR18;

       const long long VAR25 = VAR23 - VAR24;
 
       if (VAR26 == NULL) {

        VAR26 = new FUN5(this, VAR4, VAR21, VAR24, VAR25);

        assert(VAR26);  








       }
 
       VAR4 += VAR21;  

      assert((VAR10 < 0) || (VAR4 <= VAR10));




 
       continue;
     }

 if (VAR20 != 0x0F43B675) { 
 if (VAR21 == VAR22)

         return VAR17;
 
       VAR4 += VAR21;  

      assert((VAR10 < 0) || (VAR4 <= VAR10));




 
       continue;
     }
 

#if 0  

        VAR5 = static_cast<long>(VAR21);



        if (VAR23 > VAR7)

            return VAR15;

#endif


     


     VAR13 = VAR19;
 
     if (VAR21 != VAR22)
      VAR14 = VAR21;

 break;
 }

  assert(VAR13 > 0); 

 
 
 
 
 

 VAR2** const VAR27 = VAR28 + VAR29;
 VAR2** VAR30 = VAR27;

 VAR2** const VAR31 = VAR27 + VAR32;
 VAR2** VAR33 = VAR31;

 while (VAR30 < VAR33) {
 
 
 
 

 VAR2** const VAR34 = VAR30 + (VAR33 - VAR30) / 2;
    assert(VAR34 < VAR31);

 const VAR2* const VAR35 = *VAR34;
    assert(VAR35);
    assert(VAR35->VAR36 < 0);

    VAR4 = VAR35->FUN6();
    assert(VAR4 >= 0);

 if (VAR4 < VAR13)
      VAR30 = VAR34 + 1;
 else if (VAR4 > VAR13)
      VAR33 = VAR34;
 else {
      VAR3 = VAR35;
 return 0; 
 }
 }

  assert(VAR30 == VAR33);

 long long VAR37;
 long VAR38;

  VAR8 = VAR2::FUN7(this, VAR13, VAR37, VAR38);

 if (VAR8 < 0) { 
    VAR4 = VAR37;
    VAR5 = VAR38;

 return VAR8;
 }

 if (VAR8 > 0) { 

     VAR2* const VAR35 = VAR2::FUN8(this,
                                            -1,  
                                            VAR13);

    

    assert(VAR35);




 
     const ptrdiff_t VAR39 = VAR30 - VAR28;  
 

    FUN9(VAR35, VAR39);








     assert(VAR28);
     assert(VAR39 < VAR40);
     assert(VAR28[VAR39] == VAR35);

    VAR3 = VAR35;
 return 0; 
 }

 

 if (VAR14 < 0) { 
 const long long VAR41 = VAR4; 

 for (;;) { 
 if ((VAR6 >= 0) && (VAR4 >= VAR6))
 break;

 if ((VAR10 >= 0) && (VAR4 >= VAR10))
 break; 

 

 if ((VAR4 + 1) > VAR7) {
        VAR5 = 1;
 return VAR15;
 }

 long long VAR16 = FUN3(VAR9, VAR4, VAR5);

 if (VAR16 < 0) 
 return static_cast<long>(VAR16);

 if (VAR16 > 0) 
 return VAR15;

 if ((VAR10 >= 0) && ((VAR4 + VAR5) > VAR10))
 return VAR17;

 if ((VAR4 + VAR5) > VAR7)
 return VAR15;

 const long long VAR18 = VAR4;
 const long long VAR20 = FUN4(VAR9, VAR18, VAR5);

 if (VAR20 < 0) 
 return static_cast<long>(VAR20);

 
 
 

 if (VAR20 == 0x0F43B675) 
 break;

 if (VAR20 == 0x0C53BB6B) 
 break;

      VAR4 += VAR5; 

 

 if ((VAR4 + 1) > VAR7) {
        VAR5 = 1;
 return VAR15;
 }

      VAR16 = FUN3(VAR9, VAR4, VAR5);

 if (VAR16 < 0) 
 return static_cast<long>(VAR16);

 if (VAR16 > 0) 
 return VAR15;

 if ((VAR10 >= 0) && ((VAR4 + VAR5) > VAR10))
 return VAR17;

 if ((VAR4 + VAR5) > VAR7)
 return VAR15;

 const long long VAR21 = FUN4(VAR9, VAR4, VAR5);

 if (VAR21 < 0) 
 return static_cast<long>(VAR21);

      VAR4 += VAR5; 

 

 if (VAR21 == 0) 
 continue;

 const long long VAR22 = (1LL << (7 * VAR5)) - 1;

 if (VAR21 == VAR22)
 return VAR17; 

 if ((VAR10 >= 0) && ((VAR4 + VAR21) > VAR10)) 

         return VAR17;
 
       VAR4 += VAR21;  

      assert((VAR10 < 0) || (VAR4 <= VAR10));




     }  
 
     VAR14 = VAR4 - VAR41;
    assert(VAR14 >= 0); 

    VAR4 = VAR41; 

   }
 
   VAR4 += VAR14;  

  assert((VAR10 < 0) || (VAR4 <= VAR10));




 
   return 2;  
 }
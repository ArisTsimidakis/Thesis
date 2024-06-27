long long VAR1::FUN1(VAR2* VAR3, long long VAR4,
                                   VAR1*& VAR5) {

  assert(VAR3);

  assert(VAR4 >= 0);




 
   VAR5 = NULL;
 
 long long VAR6, VAR7;

 const long VAR8 = VAR3->FUN2(&VAR6, &VAR7);

 if (VAR8 < 0) 
 return VAR8;

 if (VAR7 < 0)
 return -1;

 if ((VAR6 >= 0) && (VAR7 > VAR6))
 return -1;

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

 for (;;) {
 if ((VAR6 >= 0) && (VAR4 >= VAR6))
 return VAR9;

 
 long VAR10;
 long long VAR11 = FUN3(VAR3, VAR4, VAR10);

 if (VAR11) 
 return VAR11;

 if ((VAR6 >= 0) && ((VAR4 + VAR10) > VAR6))
 return VAR9;

 if ((VAR4 + VAR10) > VAR7)

       return VAR4 + VAR10;
 
     const long long VAR12 = VAR4;

    const long long VAR13 = FUN4(VAR3, VAR4, VAR10);


 

    if (VAR13 < 0)  

      return VAR13;




 
     VAR4 += VAR10;  
 
 

    VAR11 = FUN3(VAR3, VAR4, VAR10);

 if (VAR11) 
 return VAR11;

 if ((VAR6 >= 0) && ((VAR4 + VAR10) > VAR6))
 return VAR9;

 if ((VAR4 + VAR10) > VAR7)
 return VAR4 + VAR10;

 long long VAR14 = FUN4(VAR3, VAR4, VAR10);

 if (VAR14 < 0) 
 return VAR14;

    VAR4 += VAR10; 

 

 
 const long long VAR15 = (1LL << (7 * VAR10)) - 1;

 if (VAR13 == 0x08538067) { 
 if (VAR14 == VAR15)
        VAR14 = -1;

 else if (VAR6 < 0)
        VAR14 = -1;

 else if ((VAR4 + VAR14) > VAR6)
        VAR14 = -1;

      VAR5 = new (VAR16::VAR17) FUN5(VAR3, VAR12,
 
                                            VAR4, VAR14);

 if (VAR5 == 0)
 return -1; 

 return 0; 
 }

 if (VAR14 == VAR15)
 return VAR9;

 if ((VAR6 >= 0) && ((VAR4 + VAR14) > VAR6))
 return VAR9;

 if ((VAR4 + VAR14) > VAR7)
 return VAR4 + VAR14;

    VAR4 += VAR14; 
 }
}
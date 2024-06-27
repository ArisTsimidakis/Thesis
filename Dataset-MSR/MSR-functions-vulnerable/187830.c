long VAR1::FUN1(long long& VAR2, long& VAR3) {
 if (VAR4 < 0)
 return FUN2(VAR2, VAR3);

 long long VAR5, VAR6;

 long VAR7 = VAR8->FUN3(&VAR5, &VAR6);


   if (VAR7 < 0)  
     return VAR7;
 

  assert((VAR5 < 0) || (VAR6 <= VAR5));




 
   const long long VAR9 = (VAR10 < 0) ? -1 : VAR11 + VAR10;
 
 long long VAR12 = -1; 
 long long VAR13 = -1; 

 for (;;) {
 if ((VAR5 >= 0) && (VAR4 >= VAR5))
 return 1; 

 if ((VAR9 >= 0) && (VAR4 >= VAR9))
 return 1; 

    VAR2 = VAR4;

 

 if ((VAR2 + 1) > VAR6) {
      VAR3 = 1;
 return VAR14;
 }

 long long VAR15 = FUN4(VAR8, VAR2, VAR3);

 if (VAR15 < 0) 
 return static_cast<long>(VAR15);

 if (VAR15 > 0) 
 return VAR14;

 if ((VAR9 >= 0) && ((VAR2 + VAR3) > VAR9))
 return VAR16;

 if ((VAR2 + VAR3) > VAR6)

       return VAR14;
 
     const long long VAR17 = VAR2;

    const long long VAR18 = FUN5(VAR8, VAR17, VAR3);


 

    if (VAR18 < 0)  

      return static_cast<long>(VAR18);




 
     VAR2 += VAR3;  
 
 

 if ((VAR2 + 1) > VAR6) {
      VAR3 = 1;
 return VAR14;
 }

    VAR15 = FUN4(VAR8, VAR2, VAR3);

 if (VAR15 < 0) 
 return static_cast<long>(VAR15);

 if (VAR15 > 0) 
 return VAR14;

 if ((VAR9 >= 0) && ((VAR2 + VAR3) > VAR9))
 return VAR16;

 if ((VAR2 + VAR3) > VAR6)
 return VAR14;

 const long long VAR19 = FUN5(VAR8, VAR2, VAR3);

 if (VAR19 < 0) 
 return static_cast<long>(VAR19);

    VAR2 += VAR3; 

 

 if (VAR19 == 0) { 
      VAR4 = VAR2;
 continue;
 }

 
     const long long VAR20 = (1LL << (7 * VAR3)) - 1;
 

#if 0  

        if (VAR19 == VAR20)

            return VAR16;  

#endif


     if ((VAR9 >= 0) && (VAR19 != VAR20) &&
         ((VAR2 + VAR19) > VAR9)) {
       return VAR16;
     }
 

#if 0  

        VAR3 = static_cast<long>(VAR19);



        if ((VAR2 + VAR19) > VAR6)

            return VAR14;

#endif


     if (VAR18 == 0x0C53BB6B) {  
       if (VAR19 == VAR20)
         return VAR16;  


       if (VAR21 == NULL) {
         const long long VAR22 = (VAR2 - VAR17) + VAR19;
 

        VAR21 = new FUN6(this, VAR2, VAR19, VAR17, VAR22);

        assert(VAR21);  






       }
 
       VAR4 = VAR2 + VAR19;  
 continue;
 }

 if (VAR18 != 0x0F43B675) { 
 if (VAR19 == VAR20)
 return VAR16; 

      VAR4 = VAR2 + VAR19; 
 continue;
 }

 

    VAR12 = VAR17 - VAR11; 

 if (VAR19 != VAR20)
      VAR13 = VAR19;


     break;
   }
 

  assert(VAR12 >= 0);  








 
   long long VAR23;
   long VAR24;

  VAR7 = VAR25::FUN7(this, VAR12, VAR23, VAR24);

 if (VAR7 < 0) { 
    VAR2 = VAR23;
    VAR3 = VAR24;

 return VAR7;
 }

 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 


   const long VAR26 = VAR27;
 
   if (VAR28 > 0) {

    assert(VAR26 < VAR29);




 
     VAR25* const VAR30 = VAR31[VAR26];

    assert(VAR30);

    assert(VAR30->VAR32 < 0);




 
     const long long VAR33 = VAR30->FUN8();

    assert(VAR33 >= 0);




 
     if (VAR33 == VAR12) {  
       if (VAR7 == 0)  
 return VAR16;

 if (VAR13 >= 0)
        VAR2 += VAR13;
 else {
 const long long VAR22 = VAR30->FUN9();

 if (VAR22 <= 0)
 return VAR16; 

        VAR2 = VAR30->VAR34 + VAR22;
 }

      VAR30->VAR32 = VAR26; 
 ++VAR27;

       --VAR28;
 
       VAR4 = VAR2;  

      assert((VAR9 < 0) || (VAR4 <= VAR9));




 
       return 0;  
     }
   }
 
   if (VAR7 == 0) {  

    if (VAR13 < 0)

      return VAR16;  



    VAR2 += VAR13;




 
     if ((VAR5 >= 0) && (VAR2 >= VAR5)) {
       VAR4 = VAR5;
 return 1; 
 }

 if ((VAR9 >= 0) && (VAR2 >= VAR9)) {
      VAR4 = VAR9;
 return 1; 
 }

    VAR4 = VAR2;
 return 2; 
 }


   
 
   VAR25* const VAR30 = VAR25::FUN10(this, VAR26, VAR12);

  

  assert(VAR30);




 

  FUN11(VAR30);

  assert(VAR31);

  assert(VAR26 < VAR29);

  assert(VAR31[VAR26] == VAR30);








 
   if (VAR13 >= 0) {
     VAR2 += VAR13;
 
     VAR4 = VAR2;

    assert((VAR9 < 0) || (VAR4 <= VAR9));






 
     return 0;
   }

  VAR35 = VAR30;
  VAR4 = -VAR2;

 
   return 0;  
 











#if 0



    if (VAR13 < 0) {  

        const long long VAR36 = VAR2;  



        for (;;) {  

            if ((VAR5 >= 0) && (VAR2 >= VAR5))

                break;



            if ((VAR9 >= 0) && (VAR2 >= VAR9))

                break;  



            



            if ((VAR2 + 1) > VAR6)

            {

                VAR3 = 1;

                return VAR14;

            }



            long long VAR15 = FUN4(VAR8, VAR2, VAR3);



            if (VAR15 < 0)  

                return static_cast<long>(VAR15);



            if (VAR15 > 0)  

                return VAR14;



            if ((VAR9 >= 0) && ((VAR2 + VAR3) > VAR9))

                return VAR16;



            if ((VAR2 + VAR3) > VAR6)

                return VAR14;



            const long long VAR17 = VAR2;

            const long long VAR18 = FUN5(VAR8, VAR17, VAR3);



            if (VAR18 < 0)  

                return static_cast<long>(VAR18);



            

            

            



            if (VAR18 == 0x0F43B675)  

                break;



            if (VAR18 == 0x0C53BB6B)  

                break;



            switch (VAR18)

            {

                case 0x20:  

                case 0x23:  

                case 0x67:  

                case 0x2B:  

                    break;



                default:

                    assert(false);

                    break;

            }



            VAR2 += VAR3;  



            



            if ((VAR2 + 1) > VAR6)

            {

                VAR3 = 1;

                return VAR14;

            }



            VAR15 = FUN4(VAR8, VAR2, VAR3);



            if (VAR15 < 0)  

                return static_cast<long>(VAR15);



            if (VAR15 > 0)  

                return VAR14;



            if ((VAR9 >= 0) && ((VAR2 + VAR3) > VAR9))

                return VAR16;



            if ((VAR2 + VAR3) > VAR6)

                return VAR14;



            const long long VAR19 = FUN5(VAR8, VAR2, VAR3);



            if (VAR19 < 0)  

                return static_cast<long>(VAR19);



            VAR2 += VAR3;  



            



            if (VAR19 == 0)  

                continue;



            const long long VAR20 = (1LL << (7 * VAR3)) - 1;



            if (VAR19 == VAR20)

                return VAR16;  



            if ((VAR9 >= 0) && ((VAR2 + VAR19) > VAR9))  

                return VAR16;



            VAR2 += VAR19;  

            assert((VAR9 < 0) || (VAR2 <= VAR9));

        }  



        VAR13 = VAR2 - VAR36;

        assert(VAR13 >= 0);



        VAR2 = VAR36;  

    }



    if (VAR28 > 0)

    {

        assert(VAR26 < VAR29);



        VAR25* const VAR30 = VAR31[VAR26];

        assert(VAR30);

        assert(VAR30->VAR32 < 0);



        const long long VAR33 = VAR30->FUN8();

        assert(VAR33 >= 0);



        if (VAR33 == VAR12)  

            return VAR16;  

    }



    VAR4 = VAR2 + VAR13;  

    assert((VAR9 < 0) || (VAR4 <= VAR9));



    return 2;     



#endif






 }
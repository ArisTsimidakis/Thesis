long VAR1::FUN1(const VAR2* VAR3)

{

    if (VAR3 == NULL)

        return -1;


 

    if (VAR3->VAR4 == NULL)

        return -1;




 

    assert(VAR5 >= 0);

    assert(VAR6 >= 0);

    assert(VAR7 <= 0);

    assert(VAR8 == NULL);

    assert(VAR9 <= 0);




 

    long long VAR10 = VAR5;

    const long long VAR11 = VAR5 + VAR6;


 

    long VAR12;




 

    VAR13* const VAR14 = VAR3->VAR4->VAR15;




 

    VAR7 = FUN2(VAR14, VAR10, VAR12);


 

    if (VAR7 <= 0)

        return VAR16;




 

    if ((VAR10 + VAR12) > VAR11)

        return VAR16;




 

    VAR10 += VAR12;  




 

    if ((VAR11 - VAR10) < 2)

        return VAR16;


 

    long VAR17;

    long long VAR18;


 

    VAR17 = FUN3(VAR14, VAR10, 2, VAR18);




 

    if (VAR17)

        return VAR16;


 

    if (VAR18 < VAR19)

        return VAR16;




 

    if (VAR18 > VAR20)

        return VAR16;


 

    VAR21 = static_cast<short>(VAR18);


 

    VAR10 += 2;






 

    if ((VAR11 - VAR10) <= 0)

        return VAR16;



    VAR17 = VAR14->FUN4(VAR10, 1, &VAR22);



    if (VAR17)

        return VAR16;



    const int VAR23 = int(VAR22 & 0x06) >> 1;



    ++VAR10;  



    if (VAR23 == 0)  

    {

        if (VAR10 > VAR11)

            return VAR16;



        VAR9 = 1;

        VAR8 = new VAR24[VAR9];



        VAR24& VAR25 = VAR8[0];

        VAR25.VAR10 = VAR10;



        const long long VAR26 = VAR11 - VAR10;



        if (VAR26 > VAR27)

            return VAR16;



        VAR25.VAR12 = static_cast<long>(VAR26);



        return 0;  

    }



    if (VAR10 >= VAR11)

        return VAR16;



    unsigned char VAR28;



    VAR17 = VAR14->FUN4(VAR10, 1, &VAR28);



    if (VAR17)

        return VAR16;



    ++VAR10;  

    assert(VAR10 <= VAR11);



    VAR9 = int(VAR28) + 1;




     VAR8 = new VAR24[VAR9];

    assert(VAR8);
 

    if (VAR23 == 1)  

    {

        VAR24* VAR29 = VAR8;

        VAR24* const VAR30 = VAR29 + VAR9;




 

        long VAR31 = 0;

        int VAR32 = VAR9;


 

        while (VAR32 > 1)

        {

            long VAR26 = 0;




 

            for (;;)

            {

                unsigned char VAR33;


 

                if (VAR10 >= VAR11)

                    return VAR16;




 

                VAR17 = VAR14->FUN4(VAR10, 1, &VAR33);




 

                if (VAR17)

                    return VAR16;


 

                ++VAR10;  


 

                VAR26 += VAR33;




 

                if (VAR33 < 255)

                    break;

            }




 

            VAR24& VAR25 = *VAR29++;

            assert(VAR29 < VAR30);


 

            VAR25.VAR10 = 0;  




 

            VAR25.VAR12 = VAR26;

            VAR31 += VAR26;  






 

            --VAR32;

        }




 

        assert(VAR29 < VAR30);

        assert(VAR10 <= VAR11);




 

        {

            VAR24& VAR25 = *VAR29++;



            if (VAR29 != VAR30)

                return VAR16;



            VAR25.VAR10 = 0;  



            const long long VAR34 = VAR11 - VAR10;



            if (VAR34 < VAR31)

                return VAR16;



            const long long VAR26 = VAR34 - VAR31;



            if (VAR26 > VAR27)

                return VAR16;



            VAR25.VAR12 = static_cast<long>(VAR26);

        }



        VAR29 = VAR8;

        while (VAR29 != VAR30)

        {

            VAR24& VAR25 = *VAR29++;

            assert((VAR10 + VAR25.VAR12) <= VAR11);



            VAR25.VAR10 = VAR10;

            VAR10 += VAR25.VAR12;

        }



        assert(VAR10 == VAR11);

    }

    else if (VAR23 == 2)  

    {

        const long long VAR34 = VAR11 - VAR10;



        if ((VAR34 % VAR9) != 0)

            return VAR16;



        const long long VAR26 = VAR34 / VAR9;



        if (VAR26 > VAR27)

            return VAR16;



        VAR24* VAR29 = VAR8;

        VAR24* const VAR30 = VAR29 + VAR9;



        while (VAR29 != VAR30)

        {

            assert((VAR10 + VAR26) <= VAR11);



            VAR24& VAR25 = *VAR29++;



            VAR25.VAR10 = VAR10;

            VAR25.VAR12 = static_cast<long>(VAR26);



            VAR10 += VAR26;

        }



        assert(VAR10 == VAR11);

    }

    else

    {

        assert(VAR23 == 3);  




 
         if (VAR10 >= VAR11)

            return VAR16;


 

        long VAR31 = 0;

        int VAR32 = VAR9;


 

        long long VAR26 = FUN2(VAR14, VAR10, VAR12);




 

        if (VAR26 < 0)

            return VAR16;


 

        if (VAR26 > VAR27)

            return VAR16;


 

        if ((VAR10 + VAR12) > VAR11)

            return VAR16;






 

        VAR10 += VAR12; 




 

        if ((VAR10 + VAR26) > VAR11)

            return VAR16;


 

        VAR24* VAR29 = VAR8;

        VAR24* const VAR30 = VAR29 + VAR9;




 

        {

            VAR24& VAR35 = *VAR29;



            VAR35.VAR10 = 0;  



            VAR35.VAR12 = static_cast<long>(VAR26);

            VAR31 += VAR35.VAR12;  

        }



        --VAR32;



        while (VAR32 > 1)

        {

            if (VAR10 >= VAR11)

                return VAR16;



            assert(VAR29 < VAR30);



            const VAR24& VAR36 = *VAR29++;

            assert(VAR36.VAR12 == VAR26);

            if (VAR36.VAR12 != VAR26)

                return VAR16;



            assert(VAR29 < VAR30);



            VAR24& VAR35 = *VAR29;



            VAR35.VAR10 = 0;  



            const long long VAR37 = FUN2(VAR14, VAR10, VAR12);



            if (VAR37 < 0)

                return VAR16;



            if ((VAR10 + VAR12) > VAR11)

                return VAR16;



            VAR10 += VAR12;  

            assert(VAR10 <= VAR11);



            const int VAR38 = 7*VAR12 - 1;

            const long long VAR39 = (1LL << VAR38) - 1LL;

            const long long VAR40 = VAR37 - VAR39;



            VAR26 += VAR40;



            if (VAR26 < 0)

                return VAR16;



            if (VAR26 > VAR27)

                return VAR16;



            VAR35.VAR12 = static_cast<long>(VAR26);

            VAR31 += VAR35.VAR12;  



            --VAR32;

        }



        {

            assert(VAR10 <= VAR11);

            assert(VAR29 < VAR30);



            const VAR24& VAR36 = *VAR29++;

            assert(VAR36.VAR12 == VAR26);

            if (VAR36.VAR12 != VAR26)

                return VAR16;



            assert(VAR29 < VAR30);



            VAR24& VAR35 = *VAR29++;

            assert(VAR29 == VAR30);



            VAR35.VAR10 = 0;  



            const long long VAR34 = VAR11 - VAR10;



            if (VAR34 < VAR31)

                return VAR16;



            VAR26 = VAR34 - VAR31;



            if (VAR26 > VAR27)

                return VAR16;



            VAR35.VAR12 = static_cast<long>(VAR26);

        }



        VAR29 = VAR8;

        while (VAR29 != VAR30)

        {

            VAR24& VAR25 = *VAR29++;

            assert((VAR10 + VAR25.VAR12) <= VAR11);



            VAR25.VAR10 = VAR10;

            VAR10 += VAR25.VAR12;

        }



        assert(VAR10 == VAR11);


     }
 

    return 0;  






















































































































































































































































































































































































 }
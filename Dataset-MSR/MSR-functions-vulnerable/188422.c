long VAR1::FUN1()

{

    VAR2* const VAR3 = VAR4->VAR5;



    long long VAR6 = VAR7;  

    const long long VAR8 = VAR6 + VAR9;  



    while (VAR6 < VAR8)

    {

        long long VAR10, VAR11;



        long VAR12 = FUN2(

                        VAR3,

                        VAR6,

                        VAR8,

                        VAR10,

                        VAR11);



        if (VAR12 < 0)  

            return VAR12;



        if (VAR11 == 0)  

            continue;



        if (VAR10 == 0x05B9)  

        {

            VAR12 = FUN3(VAR6, VAR11);



            if (VAR12 < 0)  

                return VAR12;

        }



        VAR6 += VAR11;

        assert(VAR6 <= VAR8);




     }
 

    assert(VAR6 == VAR8);

    return 0;












 }
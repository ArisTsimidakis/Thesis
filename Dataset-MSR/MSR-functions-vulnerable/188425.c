long VAR1::VAR2::FUN1(

    VAR3* VAR4,

    long long VAR5,

    long long VAR6)

{

    const long long VAR7 = VAR5 + VAR6;



    while (VAR5 < VAR7)

    {

        long long VAR8, VAR6;



        long VAR9 = FUN2(

                        VAR4,

                        VAR5,

                        VAR7,

                        VAR8,

                        VAR6);



        if (VAR9 < 0)  

            return VAR9;



        if (VAR6 == 0)  

            continue;



        if (VAR8 == 0x05)  

        {

            VAR9 = FUN3(VAR4, VAR5, VAR6, VAR10);



            if (VAR9)

              return VAR9;

        }

        else if (VAR8 == 0x037C)  

        {

            VAR9 = FUN3(VAR4, VAR5, VAR6, VAR11);



            if (VAR9)

              return VAR9;

        }

        else if (VAR8 == 0x037E)  

        {

            VAR9 = FUN3(VAR4, VAR5, VAR6, VAR12);



            if (VAR9)

              return VAR9;

        }



        VAR5 += VAR6;

        assert(VAR5 <= VAR7);

    }



    assert(VAR5 == VAR7);

    return 0;

}
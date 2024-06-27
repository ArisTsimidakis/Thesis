FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5;

    
    if (VAR2->VAR6 <= 0)
        return VAR3;

    VAR5 = VAR2->VAR7 + VAR2->VAR6;

    switch (FUN2(VAR5))
    {
    case 0: 
        return VAR5[VAR3 + 6];

    case 4: 
        {
            int VAR8 = FUN2(VAR5 + 6);
            VAR4 *VAR9 = VAR5 + 14;
            VAR4 *VAR10 = VAR9 + VAR8 + 2;
            VAR4 *VAR11 = VAR10 + VAR8;
            VAR4 *VAR12 = VAR11 + VAR8;
            int VAR13;

            for (VAR13 = 0; VAR13 < VAR8 - 3; VAR13 += 2)
            {
                int VAR14, VAR15;
                int VAR16 = FUN2(VAR10 + VAR13);
                int VAR17;

                if ( VAR3 < VAR16 )
                    return 0;
                if ( VAR3 > FUN2(VAR9 + VAR13) )
                    continue;
                VAR14 = FUN3(VAR11 + VAR13);
                VAR15 = FUN3(VAR12 + VAR13);
                if ( VAR15 == 0 )
                {
                    return ( VAR3 + VAR14 ) & 0xffff; 
                    return 0;
                }
                VAR17 = FUN2(VAR12 + VAR13 + VAR15 + ((VAR3 - VAR16) << 1));
                return (VAR17 == 0 ? 0 : VAR17 + VAR14);
            }

            
            return 0;
        }

    case 6: 
        {
            int VAR18 = FUN2(VAR5 + 6);
            int VAR19 = FUN2(VAR5 + 8);
            if ( VAR3 < VAR18 || VAR3 >= VAR18 + VAR19 )
                return 0;
            return FUN2(VAR5 + 10 + ((VAR3 - VAR18) << 1));
        }

    case 10: 
        {
            int VAR20 = FUN4(VAR5 + 12);
            int VAR21 = FUN4(VAR5 + 16);
            if ( VAR3 < VAR20 || VAR3 >= VAR20 + VAR21 )
                return 0;
            return FUN4(VAR5 + 20 + (VAR3 - VAR20) * 4);
        }

    case 12: 
        {
            int VAR22 = FUN4(VAR5 + 12);
            VAR4 *VAR23 = VAR5 + 16;
            int VAR24;

            for (VAR24 = 0; VAR24 < VAR22; VAR24++)
            {
                int VAR20 = FUN4(VAR23 + 0);
                int VAR25 = FUN4(VAR23 + 4);
                int VAR26 = FUN4(VAR23 + 8);
                if ( VAR3 < VAR20 )
                    return 0;
                if ( VAR3 <= VAR25 )
                    return VAR26 + (VAR3 - VAR20);
                VAR23 += 12;
            }

            return 0;
        }

    case 2: 
    case 8: 
    default:
        FUN5("", FUN2(VAR5));
        return 0;
    }

    return 0;
}
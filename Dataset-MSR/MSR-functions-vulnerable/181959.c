static inline void FUN1(VAR1 *VAR2)

{

  VAR2->VAR3=VAR4;

  VAR2->VAR5=(VAR6 *) FUN2(

    FUN3(1,(VAR7) VAR2->VAR8));

  if (VAR2->VAR5 == (VAR6 *) NULL)

    {

      VAR2->VAR3=VAR9;

      VAR2->VAR5=(VAR6 *) FUN4(-1,VAR10,0,(VAR7)

        VAR2->VAR8);

    }

}
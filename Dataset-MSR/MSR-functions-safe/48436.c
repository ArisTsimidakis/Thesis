FUN1(Str VAR1)
{
    int VAR2;

    FUN2(VAR1);
    for (VAR2 = VAR1->VAR3 - 1; VAR2 >= 0 && FUN3(VAR1->VAR4[VAR2]); VAR2--) ;
    VAR1->VAR3 = VAR2 + 1;
    VAR1->VAR4[VAR2 + 1] = '';
}
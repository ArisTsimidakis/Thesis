FUN1(VAR1 *VAR2, int VAR3)


 {
     uint32_t VAR4 = 0;
     VAR5 *VAR6 = VAR2->VAR6;

    if ((VAR6->FUN2(VAR6, VAR3, &VAR4)) && ((VAR2->VAR7 == 0) || (VAR3 < VAR2->VAR7)))
        VAR2->VAR7 = VAR3;
    return VAR4;
}
static void FUN1(const VAR1 *VAR2, VAR3 *av_restrict VAR4,
                                 int VAR5)
{
    int VAR6;

    
    for(VAR6=0;VAR6<8;VAR6++) {
        VAR4[0] = FUN2(VAR2[0]);
        VAR4[1] = FUN2(VAR2[1]);
        VAR4[2] = FUN2(VAR2[2]);
        VAR4[3] = FUN2(VAR2[3]);
        VAR4[4] = FUN2(VAR2[4]);
        VAR4[5] = FUN2(VAR2[5]);
        VAR4[6] = FUN2(VAR2[6]);
        VAR4[7] = FUN2(VAR2[7]);

        VAR4 += VAR5;
        VAR2 += 8;
    }
}
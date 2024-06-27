class VAR1{
    private void FUN1() throws Throwable
        {
            float VAR2;
            if (FUN2())
            {
                VAR2 = 0.0f; 
            }
            else
            {
                
                VAR2 = 0.0f;
            }
    
            if (FUN2())
            {
                
                if (Math.abs(VAR2) > 0.000001)
                {
                    int VAR3 = (int)(100.0 % VAR2);
                    VAR4.writeLine(VAR3);
                }
                else
                {
                    VAR4.writeLine("");
                }
            }
        }
};
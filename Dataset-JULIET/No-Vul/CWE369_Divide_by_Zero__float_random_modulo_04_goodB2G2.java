class VAR1{
    private void FUN1() throws Throwable
        {
            float VAR2;
            if (VAR3)
            {
                
                SecureRandom VAR4 = new FUN2();
                VAR2 = VAR4.FUN3();
            }
            else
            {
                
                VAR2 = 0.0f;
            }
    
            if (VAR3)
            {
                
                if (Math.abs(VAR2) > 0.000001)
                {
                    int VAR5 = (int)(100.0 % VAR2);
                    VAR6.writeLine(VAR5);
                }
                else
                {
                    VAR6.writeLine("");
                }
            }
        }
};
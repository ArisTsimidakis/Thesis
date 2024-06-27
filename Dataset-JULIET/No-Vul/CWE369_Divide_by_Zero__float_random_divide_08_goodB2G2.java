class VAR1{
    private void FUN1() throws Throwable
        {
            float VAR2;
            if (FUN2())
            {
                
                SecureRandom VAR3 = new FUN3();
                VAR2 = VAR3.FUN4();
            }
            else
            {
                
                VAR2 = 0.0f;
            }
    
            if (FUN2())
            {
                
                if (Math.abs(VAR2) > 0.000001)
                {
                    int VAR4 = (int)(100.0 / VAR2);
                    VAR5.writeLine(VAR4);
                }
                else
                {
                    VAR5.writeLine("");
                }
            }
        }
};
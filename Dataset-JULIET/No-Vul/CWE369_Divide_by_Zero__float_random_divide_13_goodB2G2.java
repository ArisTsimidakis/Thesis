class VAR1{
    private void FUN1() throws Throwable
        {
            float VAR2;
            if (VAR3.VAR4==5)
            {
                
                SecureRandom VAR5 = new FUN2();
                VAR2 = VAR5.FUN3();
            }
            else
            {
                
                VAR2 = 0.0f;
            }
    
            if (VAR3.VAR4==5)
            {
                
                if (Math.abs(VAR2) > 0.000001)
                {
                    int VAR6 = (int)(100.0 / VAR2);
                    VAR3.writeLine(VAR6);
                }
                else
                {
                    VAR3.writeLine("");
                }
            }
        }
};
class VAR1{
    private void FUN1() throws Throwable
        {
            float VAR2;
            {
                float VAR3;
    
                
                SecureRandom VAR4 = new FUN2();
                VAR3 = VAR4.FUN3();
    
                VAR2 = VAR3;
            }
            {
                float VAR3 = VAR2;
    
                
                if (Math.abs(VAR3) > 0.000001)
                {
                    int VAR5 = (int)(100.0 / VAR3);
                    VAR6.writeLine(VAR5);
                }
                else
                {
                    VAR6.writeLine("");
                }
    
            }
        }
};
class VAR1{
    private void FUN1() throws Throwable
        {
            float VAR2;
            if(VAR3.FUN2())
            {
                
                SecureRandom VAR4 = new FUN3();
                VAR2 = VAR4.FUN4();
            }
            else
            {
    
                
                SecureRandom VAR4 = new FUN3();
                VAR2 = VAR4.FUN4();
    
            }
    
            if(VAR3.FUN2())
            {
                
                if (Math.abs(VAR2) > 0.000001)
                {
                    int VAR5 = (int)(100.0 % VAR2);
                    VAR3.writeLine(VAR5);
                }
                else
                {
                    VAR3.writeLine("");
                }
            }
            else
            {
    
                
                if (Math.abs(VAR2) > 0.000001)
                {
                    int VAR5 = (int)(100.0 % VAR2);
                    VAR3.writeLine(VAR5);
                }
                else
                {
                    VAR3.writeLine("");
                }
    
            }
        }
};
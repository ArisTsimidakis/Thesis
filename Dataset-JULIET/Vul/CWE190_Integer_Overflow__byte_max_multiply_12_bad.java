class VAR1{
    public void FUN1() throws Throwable
        {
            byte VAR2;
            if(VAR3.FUN2())
            {
                
                VAR2 = VAR4.VAR5;
            }
            else
            {
    
                
                VAR2 = 2;
    
            }
    
            if(VAR3.FUN2())
            {
                if(VAR2 > 0) 
                {
                    
                    byte VAR6 = (byte)(VAR2 * 2);
                    VAR3.writeLine("" + VAR6);
                }
            }
            else
            {
    
                if(VAR2 > 0) 
                {
                    
                    if (VAR2 < (VAR4.VAR5/2))
                    {
                        byte VAR6 = (byte)(VAR2 * 2);
                        VAR3.writeLine("" + VAR6);
                    }
                    else
                    {
                        VAR3.writeLine("");
                    }
                }
    
            }
        }
};
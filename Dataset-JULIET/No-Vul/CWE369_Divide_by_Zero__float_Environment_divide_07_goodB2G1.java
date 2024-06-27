class VAR1{
    private void FUN1() throws Throwable
        {
            float VAR2;
            if (VAR3==5)
            {
                VAR2 = -1.0f; 
                
                
                {
                    String VAR4 = System.FUN2("");
                    if (VAR4 != null)
                    {
                        try
                        {
                            VAR2 = VAR5.FUN3(VAR4.trim());
                        }
                        catch (NumberFormatException VAR6)
                        {
                            VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                        }
                    }
                }
            }
            else
            {
                
                VAR2 = 0.0f;
            }
    
            if (VAR3!=5)
            {
                
                VAR7.writeLine("");
            }
            else
            {
    
                
                if (Math.abs(VAR2) > 0.000001)
                {
                    int VAR11 = (int)(100.0 / VAR2);
                    VAR7.writeLine(VAR11);
                }
                else
                {
                    VAR7.writeLine("");
                }
    
            }
        }
};
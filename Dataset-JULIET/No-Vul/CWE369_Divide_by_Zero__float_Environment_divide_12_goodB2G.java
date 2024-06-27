class VAR1{
    private void FUN1() throws Throwable
        {
            float VAR2;
            if(VAR3.FUN2())
            {
                VAR2 = -1.0f; 
                
                
                {
                    String VAR4 = System.FUN3("");
                    if (VAR4 != null)
                    {
                        try
                        {
                            VAR2 = VAR5.FUN4(VAR4.trim());
                        }
                        catch (NumberFormatException VAR6)
                        {
                            VAR3.VAR7.log(VAR8.VAR9, "", VAR6);
                        }
                    }
                }
            }
            else
            {
    
                VAR2 = -1.0f; 
    
                
                
                {
                    String VAR4 = System.FUN3("");
                    if (VAR4 != null)
                    {
                        try
                        {
                            VAR2 = VAR5.FUN4(VAR4.trim());
                        }
                        catch (NumberFormatException VAR6)
                        {
                            VAR3.VAR7.log(VAR8.VAR9, "", VAR6);
                        }
                    }
                }
    
            }
    
            if(VAR3.FUN2())
            {
                
                if (Math.abs(VAR2) > 0.000001)
                {
                    int VAR10 = (int)(100.0 / VAR2);
                    VAR3.writeLine(VAR10);
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
                    int VAR10 = (int)(100.0 / VAR2);
                    VAR3.writeLine(VAR10);
                }
                else
                {
                    VAR3.writeLine("");
                }
    
            }
        }
};
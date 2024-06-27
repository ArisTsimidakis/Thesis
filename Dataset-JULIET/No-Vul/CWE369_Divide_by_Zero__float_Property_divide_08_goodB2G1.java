class VAR1{
    private void FUN1() throws Throwable
        {
            float VAR2;
            if (FUN2())
            {
                VAR2 = -1.0f; 
                
                
                {
                    String VAR3 = System.FUN3("");
                    if (VAR3 != null)
                    {
                        try
                        {
                            VAR2 = VAR4.FUN4(VAR3.trim());
                        }
                        catch(NumberFormatException VAR5)
                        {
                            VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
                        }
                    }
                }
            }
            else
            {
                
                VAR2 = 0.0f;
            }
    
            if (FUN5())
            {
                
                VAR6.writeLine("");
            }
            else
            {
    
                
                if (Math.abs(VAR2) > 0.000001)
                {
                    int VAR10 = (int)(100.0 / VAR2);
                    VAR6.writeLine(VAR10);
                }
                else
                {
                    VAR6.writeLine("");
                }
    
            }
        }
};
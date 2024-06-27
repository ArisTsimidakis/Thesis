class VAR1{
    private void FUN1() throws Throwable
        {
            float VAR2;
            if (VAR3.VAR4==5)
            {
                VAR2 = -1.0f; 
                
                Properties VAR5 = new Properties();
                FileInputStream VAR6 = null;
                try
                {
                    VAR6 = new FileInputStream("");
                    VAR5.FUN2(VAR6);
                    
                    String VAR7 = VAR5.FUN3("");
                    if (VAR7 != null)
                    {
                        try
                        {
                            VAR2 = VAR8.FUN4(VAR7.trim());
                        }
                        catch (NumberFormatException VAR9)
                        {
                            VAR3.VAR10.log(VAR11.VAR12, "", VAR9);
                        }
                    }
                }
                catch (IOException VAR13)
                {
                    VAR3.VAR10.log(VAR11.VAR12, "", VAR13);
                }
                finally
                {
                    
                    try
                    {
                        if (VAR6 != null)
                        {
                            VAR6.close();
                        }
                    }
                    catch (IOException VAR13)
                    {
                        VAR3.VAR10.log(VAR11.VAR12, "", VAR13);
                    }
                }
            }
            else
            {
                
                VAR2 = 0.0f;
            }
    
            if (VAR3.VAR4==5)
            {
                
                if (Math.abs(VAR2) > 0.000001)
                {
                    int VAR14 = (int)(100.0 / VAR2);
                    VAR3.writeLine(VAR14);
                }
                else
                {
                    VAR3.writeLine("");
                }
            }
        }
};
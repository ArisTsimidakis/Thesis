class VAR1{
    private void FUN1() throws Throwable
        {
            float VAR2;
            if (VAR3==5)
            {
                VAR2 = -1.0f; 
                
                Properties VAR4 = new Properties();
                FileInputStream VAR5 = null;
                try
                {
                    VAR5 = new FileInputStream("");
                    VAR4.FUN2(VAR5);
                    
                    String VAR6 = VAR4.FUN3("");
                    if (VAR6 != null)
                    {
                        try
                        {
                            VAR2 = VAR7.FUN4(VAR6.trim());
                        }
                        catch (NumberFormatException VAR8)
                        {
                            VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
                        }
                    }
                }
                catch (IOException VAR13)
                {
                    VAR9.VAR10.log(VAR11.VAR12, "", VAR13);
                }
                finally
                {
                    
                    try
                    {
                        if (VAR5 != null)
                        {
                            VAR5.close();
                        }
                    }
                    catch (IOException VAR13)
                    {
                        VAR9.VAR10.log(VAR11.VAR12, "", VAR13);
                    }
                }
            }
            else
            {
                
                VAR2 = 0.0f;
            }
    
            if (VAR3==5)
            {
                
                if (Math.abs(VAR2) > 0.000001)
                {
                    int VAR14 = (int)(100.0 % VAR2);
                    VAR9.writeLine(VAR14);
                }
                else
                {
                    VAR9.writeLine("");
                }
            }
        }
};
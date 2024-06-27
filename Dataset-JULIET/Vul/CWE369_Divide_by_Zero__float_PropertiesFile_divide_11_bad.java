class VAR1{
    public void FUN1() throws Throwable
        {
            float VAR2;
            if (VAR3.FUN2())
            {
                VAR2 = -1.0f; 
                
                Properties VAR4 = new Properties();
                FileInputStream VAR5 = null;
                try
                {
                    VAR5 = new FileInputStream("");
                    VAR4.FUN3(VAR5);
                    
                    String VAR6 = VAR4.FUN4("");
                    if (VAR6 != null)
                    {
                        try
                        {
                            VAR2 = VAR7.FUN5(VAR6.trim());
                        }
                        catch (NumberFormatException VAR8)
                        {
                            VAR3.VAR9.log(VAR10.VAR11, "", VAR8);
                        }
                    }
                }
                catch (IOException VAR12)
                {
                    VAR3.VAR9.log(VAR10.VAR11, "", VAR12);
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
                    catch (IOException VAR12)
                    {
                        VAR3.VAR9.log(VAR10.VAR11, "", VAR12);
                    }
                }
            }
            else
            {
                
                VAR2 = 0.0f;
            }
    
            if(VAR3.FUN2())
            {
                
                int VAR13 = (int)(100.0 / VAR2);
                VAR3.writeLine(VAR13);
            }
        }
};
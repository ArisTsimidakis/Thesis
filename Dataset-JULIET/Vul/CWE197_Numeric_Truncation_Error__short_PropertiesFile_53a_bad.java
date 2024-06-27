class VAR1{
    public void FUN1() throws Throwable
        {
            short VAR2;
    
            VAR2 = VAR3.VAR4; 
    
            
            {
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
                            VAR2 = VAR3.FUN4(VAR7.trim());
                        }
                        catch(NumberFormatException VAR8)
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
                        if (VAR6 != null)
                        {
                            VAR6.close();
                        }
                    }
                    catch (IOException VAR13)
                    {
                        VAR9.VAR10.log(VAR11.VAR12, "", VAR13);
                    }
                }
            }
    
            (new FUN5()).FUN6(VAR2 );
        }
};
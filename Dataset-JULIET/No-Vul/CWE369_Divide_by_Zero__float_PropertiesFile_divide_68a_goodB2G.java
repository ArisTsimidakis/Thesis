class VAR1{
    private void FUN1() throws Throwable
        {
    
            VAR2 = -1.0f; 
    
            
            Properties VAR3 = new Properties();
            FileInputStream VAR4 = null;
            try
            {
                VAR4 = new FileInputStream("");
                VAR3.FUN2(VAR4);
    
                
                String VAR5 = VAR3.FUN3("");
                if (VAR5 != null)
                {
                    try
                    {
                        VAR2 = VAR6.FUN4(VAR5.trim());
                    }
                    catch (NumberFormatException VAR7)
                    {
                        VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                    }
                }
            }
            catch (IOException VAR12)
            {
                VAR8.VAR9.log(VAR10.VAR11, "", VAR12);
            }
            finally
            {
                
                try
                {
                    if (VAR4 != null)
                    {
                        VAR4.close();
                    }
                }
                catch (IOException VAR12)
                {
                    VAR8.VAR9.log(VAR10.VAR11, "", VAR12);
                }
            }
    
            (new FUN5()).FUN6();
        }
};
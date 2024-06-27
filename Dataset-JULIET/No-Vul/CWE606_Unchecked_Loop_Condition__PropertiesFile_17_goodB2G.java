class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
    
            VAR2 = ""; 
    
            
            {
                Properties VAR3 = new Properties();
                FileInputStream VAR4 = null;
    
                try
                {
                    VAR4 = new FileInputStream("");
                    VAR3.FUN2(VAR4);
    
                    
                    VAR2 = VAR3.FUN3("");
                }
                catch (IOException VAR5)
                {
                    VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
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
                    catch (IOException VAR5)
                    {
                        VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
                    }
                }
            }
    
            for (int VAR10 = 0; VAR10 < 1; VAR10++)
            {
                int VAR11;
                try
                {
                    VAR11 = VAR12.parseInt(VAR2);
                }
                catch (NumberFormatException VAR13)
                {
                    VAR6.writeLine("");
                    VAR11 = 1;
                }
                
                if (VAR11 >= 0 && VAR11 <= 5)
                {
                    for (int VAR14=0; VAR14 < VAR11; VAR14++)
                    {
                        VAR6.writeLine("");
                    }
                }
            }
        }
};
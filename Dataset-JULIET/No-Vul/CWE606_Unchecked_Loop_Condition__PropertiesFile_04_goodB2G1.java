class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3)
            {
                VAR2 = ""; 
                
                {
                    Properties VAR4 = new Properties();
                    FileInputStream VAR5 = null;
                    try
                    {
                        VAR5 = new FileInputStream("");
                        VAR4.FUN2(VAR5);
                        
                        VAR2 = VAR4.FUN3("");
                    }
                    catch (IOException VAR6)
                    {
                        VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
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
                        catch (IOException VAR6)
                        {
                            VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                        }
                    }
                }
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (VAR11)
            {
                
                VAR7.writeLine("");
            }
            else
            {
    
                int VAR12;
                try
                {
                    VAR12 = VAR13.parseInt(VAR2);
                }
                catch (NumberFormatException VAR14)
                {
                    VAR7.writeLine("");
                    VAR12 = 1;
                }
    
                
                if (VAR12 >= 0 && VAR12 <= 5)
                {
                    for (int VAR15=0; VAR15 < VAR12; VAR15++)
                    {
                        VAR7.writeLine("");
                    }
                }
    
            }
        }
};
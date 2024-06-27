class VAR1{
    private void FUN1() throws Throwable
        {
            int VAR2;
    
            if (VAR3)
            {
                VAR2 = VAR4.VAR5; 
                
                {
                    Properties VAR6 = new Properties();
                    FileInputStream VAR7 = null;
                    try
                    {
                        VAR7 = new FileInputStream("");
                        VAR6.FUN2(VAR7);
                        
                        String VAR8 = VAR6.FUN3("");
                        if (VAR8 != null) 
                        {
                            try
                            {
                                VAR2 = VAR4.parseInt(VAR8.trim());
                            }
                            catch(NumberFormatException VAR9)
                            {
                                VAR10.VAR11.log(VAR12.VAR13, "", VAR9);
                            }
                        }
                    }
                    catch (IOException VAR14)
                    {
                        VAR10.VAR11.log(VAR12.VAR13, "", VAR14);
                    }
                    finally
                    {
                        
                        try
                        {
                            if (VAR7 != null)
                            {
                                VAR7.close();
                            }
                        }
                        catch (IOException VAR14)
                        {
                            VAR10.VAR11.log(VAR12.VAR13, "", VAR14);
                        }
                    }
                }
            }
            else
            {
                
                VAR2 = 0;
            }
    
            if (VAR15)
            {
                
                VAR10.writeLine("");
            }
            else
            {
    
                
                int VAR16[] = { 0, 1, 2, 3, 4 };
    
                
                if (VAR2 >= 0 && VAR2 < VAR16.length)
                {
                    VAR10.writeLine(VAR16[VAR2]);
                }
                else
                {
                    VAR10.writeLine("");
                }
    
            }
        }
};
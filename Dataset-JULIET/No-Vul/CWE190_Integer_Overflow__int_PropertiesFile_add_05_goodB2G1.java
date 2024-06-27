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
    
                
                if (VAR2 < VAR4.VAR16)
                {
                    int VAR17 = (int)(VAR2 + 1);
                    VAR10.writeLine("" + VAR17);
                }
                else
                {
                    VAR10.writeLine("");
                }
    
            }
        }
};
class VAR1{
    private void FUN1() throws Throwable
        {
            int VAR2;
            if (FUN2())
            {
                VAR2 = VAR3.VAR4; 
                
                {
                    Properties VAR5 = new Properties();
                    FileInputStream VAR6 = null;
                    try
                    {
                        VAR6 = new FileInputStream("");
                        VAR5.FUN3(VAR6);
                        
                        String VAR7 = VAR5.FUN4("");
                        if (VAR7 != null) 
                        {
                            try
                            {
                                VAR2 = VAR3.parseInt(VAR7.trim());
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
            }
            else
            {
                
                VAR2 = 0;
            }
    
            if (FUN5())
            {
                
                VAR9.writeLine("");
            }
            else
            {
    
                if(VAR2 < 0) 
                {
                    
                    if (VAR2 > (VAR3.VAR4/2))
                    {
                        int VAR14 = (int)(VAR2 * 2);
                        VAR9.writeLine("" + VAR14);
                    }
                    else
                    {
                        VAR9.writeLine("");
                    }
                }
    
            }
        }
};
class VAR1{
    private void FUN1() throws Throwable
        {
            int VAR2;
            if (VAR3.FUN2())
            {
                VAR2 = VAR4.VAR5; 
                
                {
                    Properties VAR6 = new Properties();
                    FileInputStream VAR7 = null;
                    try
                    {
                        VAR7 = new FileInputStream("");
                        VAR6.FUN3(VAR7);
                        
                        String VAR8 = VAR6.FUN4("");
                        if (VAR8 != null) 
                        {
                            try
                            {
                                VAR2 = VAR4.parseInt(VAR8.trim());
                            }
                            catch(NumberFormatException VAR9)
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
                            if (VAR7 != null)
                            {
                                VAR7.close();
                            }
                        }
                        catch (IOException VAR13)
                        {
                            VAR3.VAR10.log(VAR11.VAR12, "", VAR13);
                        }
                    }
                }
            }
            else
            {
                
                VAR2 = 0;
            }
    
            if (VAR3.FUN2())
            {
                
                int VAR14[] = { 0, 1, 2, 3, 4 };
                
                if (VAR2 >= 0 && VAR2 < VAR14.length)
                {
                    VAR14[VAR2] = 42;
                }
                else
                {
                    VAR3.writeLine("");
                }
            }
        }
};
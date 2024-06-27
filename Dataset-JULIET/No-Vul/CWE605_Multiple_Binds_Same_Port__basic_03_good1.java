class VAR1{
    private void FUN1() throws Throwable
        {
            if (5 != 5)
            {
                
                VAR2.writeLine("");
            }
            else
            {
    
                ServerSocket VAR3 = null;
                ServerSocket VAR4 = null;
    
                try
                {
                    VAR3 = new FUN2();
                    VAR3.FUN3(new FUN4(15000));
    
                    VAR4 = new FUN2();
                    
                    VAR4.FUN3(new FUN4("", 15001));
                }
                catch (IOException VAR5)
                {
                    VAR2.VAR6.log(VAR7.VAR8, "", VAR5);
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
                        VAR2.VAR6.log(VAR7.VAR8, "", VAR5);
                    }
    
                    try
                    {
                        if (VAR3 != null)
                        {
                            VAR3.close();
                        }
                    }
                    catch (IOException VAR5)
                    {
                        VAR2.VAR6.log(VAR7.VAR8, "", VAR5);
                    }
                }
    
            }
        }
};
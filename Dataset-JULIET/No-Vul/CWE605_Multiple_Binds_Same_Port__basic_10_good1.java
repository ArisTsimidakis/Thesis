class VAR1{
    private void FUN1() throws Throwable
        {
            if (VAR2.VAR3)
            {
                
                VAR2.writeLine("");
            }
            else
            {
    
                ServerSocket VAR4 = null;
                ServerSocket VAR5 = null;
    
                try
                {
                    VAR4 = new FUN2();
                    VAR4.FUN3(new FUN4(15000));
    
                    VAR5 = new FUN2();
                    
                    VAR5.FUN3(new FUN4("", 15001));
                }
                catch (IOException VAR6)
                {
                    VAR2.VAR7.log(VAR8.VAR9, "", VAR6);
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
                        VAR2.VAR7.log(VAR8.VAR9, "", VAR6);
                    }
    
                    try
                    {
                        if (VAR4 != null)
                        {
                            VAR4.close();
                        }
                    }
                    catch (IOException VAR6)
                    {
                        VAR2.VAR7.log(VAR8.VAR9, "", VAR6);
                    }
                }
    
            }
        }
};
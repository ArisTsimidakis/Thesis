class VAR1{
    public void FUN1() throws Throwable
        {
            if (VAR2 == 5)
            {
                ServerSocket VAR3 = null;
                Socket VAR4 = null;
                int VAR5 = 30000;
                try
                {
                    VAR3 = new FUN2(VAR5); 
                    
                    
                    VAR4 = VAR3.accept();
                    
                }
                catch (IOException VAR6)
                {
                    VAR7.VAR8.log(VAR9.VAR10, "" + VAR11.FUN3(VAR5), VAR6);
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
                    catch (IOException VAR6)
                    {
                        VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                    }
    
                    try
                    {
                        if (VAR3 != null)
                        {
                            VAR3.close();
                        }
                    }
                    catch (IOException VAR6)
                    {
                        VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                    }
                }
            }
        }
};
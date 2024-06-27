class VAR1{
    public void FUN1() throws Throwable
        {
            if (VAR2.VAR3 == 5)
            {
                ServerSocket VAR4 = null;
                Socket VAR5 = null;
                int VAR6 = 30000;
                try
                {
                    VAR4 = new FUN2(VAR6); 
                    
                    
                    VAR5 = VAR4.accept();
                    
                }
                catch (IOException VAR7)
                {
                    VAR2.VAR8.log(VAR9.VAR10, "" + VAR11.FUN3(VAR6), VAR7);
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
                    catch (IOException VAR7)
                    {
                        VAR2.VAR8.log(VAR9.VAR10, "", VAR7);
                    }
    
                    try
                    {
                        if (VAR4 != null)
                        {
                            VAR4.close();
                        }
                    }
                    catch (IOException VAR7)
                    {
                        VAR2.VAR8.log(VAR9.VAR10, "", VAR7);
                    }
                }
            }
        }
};
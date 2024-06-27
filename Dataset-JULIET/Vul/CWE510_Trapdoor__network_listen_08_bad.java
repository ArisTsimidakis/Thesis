class VAR1{
    public void FUN1() throws Throwable
        {
            if (FUN2())
            {
                ServerSocket VAR2 = null;
                Socket VAR3 = null;
                int VAR4 = 30000;
                try
                {
                    VAR2 = new FUN3(VAR4); 
                    
                    
                    VAR3 = VAR2.accept();
                    
                }
                catch (IOException VAR5)
                {
                    VAR6.VAR7.log(VAR8.VAR9, "" + VAR10.FUN4(VAR4), VAR5);
                }
                finally
                {
                    try
                    {
                        if (VAR3 != null)
                        {
                            VAR3.close();
                        }
                    }
                    catch (IOException VAR5)
                    {
                        VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
                    }
    
                    try
                    {
                        if (VAR2 != null)
                        {
                            VAR2.close();
                        }
                    }
                    catch (IOException VAR5)
                    {
                        VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
                    }
                }
            }
        }
};
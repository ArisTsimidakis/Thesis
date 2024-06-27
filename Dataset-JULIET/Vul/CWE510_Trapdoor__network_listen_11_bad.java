class VAR1{
    public void FUN1() throws Throwable
        {
            if (VAR2.FUN2())
            {
                ServerSocket VAR3 = null;
                Socket VAR4 = null;
                int VAR5 = 30000;
                try
                {
                    VAR3 = new FUN3(VAR5); 
                    
                    
                    VAR4 = VAR3.accept();
                    
                }
                catch (IOException VAR6)
                {
                    VAR2.VAR7.log(VAR8.VAR9, "" + VAR10.FUN4(VAR5), VAR6);
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
                        VAR2.VAR7.log(VAR8.VAR9, "", VAR6);
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
                        VAR2.VAR7.log(VAR8.VAR9, "", VAR6);
                    }
                }
            }
        }
};
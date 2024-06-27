class VAR1{
    private void FUN1() throws Throwable
        {
            if (FUN2())
            {
                ServerSocket VAR2 = null;
                ServerSocket VAR3 = null;
                try
                {
                    VAR2 = new FUN3();
                    VAR2.FUN4(new FUN5(15000));
                    VAR3 = new FUN3();
                    
                    VAR3.FUN4(new FUN5("", 15001));
                }
                catch (IOException VAR4)
                {
                    VAR5.VAR6.log(VAR7.VAR8, "", VAR4);
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
                    catch (IOException VAR4)
                    {
                        VAR5.VAR6.log(VAR7.VAR8, "", VAR4);
                    }
    
                    try
                    {
                        if (VAR2 != null)
                        {
                            VAR2.close();
                        }
                    }
                    catch (IOException VAR4)
                    {
                        VAR5.VAR6.log(VAR7.VAR8, "", VAR4);
                    }
                }
            }
        }
};
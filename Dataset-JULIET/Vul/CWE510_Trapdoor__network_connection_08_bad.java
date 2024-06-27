class VAR1{
    public void FUN1() throws Throwable
        {
            if (FUN2())
            {
                InputStream VAR2 = null;
                try
                {
                    
                    URL VAR3 = new FUN3("VAR4:
                    VAR2 = VAR3.FUN4();
                }
                catch (IOException VAR5)
                {
                    VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
                }
                finally
                {
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
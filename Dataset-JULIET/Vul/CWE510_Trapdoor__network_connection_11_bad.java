class VAR1{
    public void FUN1() throws Throwable
        {
            if (VAR2.FUN2())
            {
                InputStream VAR3 = null;
                try
                {
                    
                    URL VAR4 = new FUN3("VAR5:
                    VAR3 = VAR4.FUN4();
                }
                catch (IOException VAR6)
                {
                    VAR2.VAR7.log(VAR8.VAR9, "", VAR6);
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
                    catch (IOException VAR6)
                    {
                        VAR2.VAR7.log(VAR8.VAR9, "", VAR6);
                    }
                }
            }
        }
};
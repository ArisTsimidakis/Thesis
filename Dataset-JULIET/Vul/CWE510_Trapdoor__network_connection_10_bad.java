class VAR1{
    public void FUN1() throws Throwable
        {
            if (VAR2.VAR3)
            {
                InputStream VAR4 = null;
                try
                {
                    
                    URL VAR5 = new FUN2("VAR6:
                    VAR4 = VAR5.FUN3();
                }
                catch (IOException VAR7)
                {
                    VAR2.VAR8.log(VAR9.VAR10, "", VAR7);
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
                    catch (IOException VAR7)
                    {
                        VAR2.VAR8.log(VAR9.VAR10, "", VAR7);
                    }
                }
            }
        }
};
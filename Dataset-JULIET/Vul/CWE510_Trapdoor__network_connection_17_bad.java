class VAR1{
    public void FUN1() throws Throwable
        {
            for (int VAR2 = 0; VAR2 < 1; VAR2++)
            {
                InputStream VAR3 = null;
                try
                {
                    
                    URL VAR4 = new FUN2("VAR5:
                    VAR3 = VAR4.FUN3();
                }
                catch (IOException VAR6)
                {
                    VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
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
                        VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                    }
                }
            }
        }
};
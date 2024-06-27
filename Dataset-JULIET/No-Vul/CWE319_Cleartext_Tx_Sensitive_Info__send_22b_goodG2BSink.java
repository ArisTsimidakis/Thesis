class VAR1{
    public void FUN1(String VAR2 ) throws Throwable
        {
            if (VAR3.VAR4)
            {
                Socket VAR5 = null;
                PrintWriter VAR6 = null;
                try
                {
                    VAR5 = new Socket("", 1337);
                    VAR6 = new FUN2(VAR5.getOutputStream(), true);
                    
                    VAR6.FUN3(VAR2);
                }
                catch (IOException VAR7)
                {
                    VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                }
                finally
                {
                    if (VAR6 != null)
                    {
                        VAR6.close();
                    }
    
                    try
                    {
                        if (VAR5 != null)
                        {
                            VAR5.close();
                        }
                    }
                    catch (IOException VAR7)
                    {
                        VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                    }
                }
            }
            else
            {
                
                VAR2 = null;
            }
        }
};
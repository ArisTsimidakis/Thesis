class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.VAR4)
            {
                
                VAR2 = null;
            }
            else
            {
    
                
                VAR2 = "";
    
            }
    
            if (VAR3.VAR5)
            {
                Socket VAR6 = null;
                PrintWriter VAR7 = null;
                try
                {
                    VAR6 = new Socket("", 1337);
                    VAR7 = new FUN2(VAR6.getOutputStream(), true);
                    
                    VAR7.FUN3(VAR2);
                }
                catch (IOException VAR8)
                {
                    VAR3.VAR9.log(VAR10.VAR11, "", VAR8);
                }
                finally
                {
                    if (VAR7 != null)
                    {
                        VAR7.close();
                    }
    
                    try
                    {
                        if (VAR6 != null)
                        {
                            VAR6.close();
                        }
                    }
                    catch (IOException VAR8)
                    {
                        VAR3.VAR9.log(VAR10.VAR11, "", VAR8);
                    }
                }
            }
        }
};
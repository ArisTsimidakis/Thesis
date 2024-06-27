class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            if (5==5)
            {
                
                PasswordAuthentication VAR3 = new FUN2("", "".FUN3());
                
                VAR2 = new String(VAR3.FUN4());
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (5==5)
            {
                Socket VAR4 = null;
                PrintWriter VAR5 = null;
                try
                {
                    VAR4 = new Socket("", 1337);
                    VAR5 = new FUN5(VAR4.getOutputStream(), true);
                    
                    VAR5.FUN6(VAR2);
                }
                catch (IOException VAR6)
                {
                    VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                }
                finally
                {
                    if (VAR5 != null)
                    {
                        VAR5.close();
                    }
    
                    try
                    {
                        if (VAR4 != null)
                        {
                            VAR4.close();
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
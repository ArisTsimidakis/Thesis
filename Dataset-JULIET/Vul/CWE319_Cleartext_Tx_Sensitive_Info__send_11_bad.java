class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.FUN2())
            {
                
                PasswordAuthentication VAR4 = new FUN3("", "".FUN4());
                
                VAR2 = new String(VAR4.FUN5());
            }
            else
            {
                
                VAR2 = null;
            }
    
            if(VAR3.FUN2())
            {
                Socket VAR5 = null;
                PrintWriter VAR6 = null;
                try
                {
                    VAR5 = new Socket("", 1337);
                    VAR6 = new FUN6(VAR5.getOutputStream(), true);
                    
                    VAR6.FUN7(VAR2);
                }
                catch (IOException VAR7)
                {
                    VAR3.VAR8.log(VAR9.VAR10, "", VAR7);
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
                        VAR3.VAR8.log(VAR9.VAR10, "", VAR7);
                    }
                }
            }
        }
};
class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            {
                String VAR3;
    
                
                PasswordAuthentication VAR4 = new FUN2("", "".FUN3());
    
                
                VAR3 = new String(VAR4.FUN4());
    
                VAR2 = VAR3;
            }
            {
                String VAR3 = VAR2;
    
                Socket VAR5 = null;
                PrintWriter VAR6 = null;
    
                try
                {
                    VAR5 = new Socket("", 1337);
                    VAR6 = new FUN5(VAR5.getOutputStream(), true);
                    
                    VAR6.FUN6(VAR3);
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
        }
};
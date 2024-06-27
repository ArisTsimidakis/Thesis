class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (FUN2())
            {
                
                PasswordAuthentication VAR3 = new FUN3("", "".FUN4());
                
                VAR2 = new String(VAR3.FUN5());
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (FUN2())
            {
                SSLSocketFactory VAR4 = null;
                SSLSocket VAR5 = null;
                PrintWriter VAR6 = null;
                try
                {
                    VAR4 = (VAR7) VAR7.FUN6();
                    VAR5 = (VAR8) VAR4.FUN7("", 1337);
                    VAR6 = new FUN8(VAR5.getOutputStream(), true);
                    
                    VAR6.FUN9(VAR2);
                }
                catch (IOException VAR9)
                {
                    VAR10.VAR11.log(VAR12.VAR13, "", VAR9);
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
                    catch (IOException VAR9)
                    {
                        VAR10.VAR11.log(VAR12.VAR13, "", VAR9);
                    }
                }
            }
        }
};
class VAR1{
    private void FUN1() throws Throwable
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
    
            if (VAR3.FUN2())
            {
                SSLSocketFactory VAR5 = null;
                SSLSocket VAR6 = null;
                PrintWriter VAR7 = null;
                try
                {
                    VAR5 = (VAR8) VAR8.FUN6();
                    VAR6 = (VAR9) VAR5.FUN7("", 1337);
                    VAR7 = new FUN8(VAR6.getOutputStream(), true);
                    
                    VAR7.FUN9(VAR2);
                }
                catch (IOException VAR10)
                {
                    VAR3.VAR11.log(VAR12.VAR13, "", VAR10);
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
                    catch (IOException VAR10)
                    {
                        VAR3.VAR11.log(VAR12.VAR13, "", VAR10);
                    }
                }
            }
        }
};
class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
    
            switch (6)
            {
            case 6:
                
                PasswordAuthentication VAR3 = new FUN2("", "".FUN3());
                
                VAR2 = new String(VAR3.FUN4());
                break;
            default:
                
                VAR2 = null;
                break;
            }
    
            switch (7)
            {
            case 7:
                SSLSocketFactory VAR4 = null;
                SSLSocket VAR5 = null;
                PrintWriter VAR6 = null;
                try
                {
                    VAR4 = (VAR7) VAR7.FUN5();
                    VAR5 = (VAR8) VAR4.FUN6("", 1337);
                    VAR6 = new FUN7(VAR5.getOutputStream(), true);
                    
                    VAR6.FUN8(VAR2);
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
                break;
            default:
                
                VAR10.writeLine("");
                break;
            }
        }
};
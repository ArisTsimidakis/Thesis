class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (FUN2())
            {
                VAR2 = ""; 
                
                Properties VAR3 = new Properties();
                FileInputStream VAR4 = null;
                try
                {
                    VAR4 = new FileInputStream("");
                    VAR3.FUN3(VAR4);
                    VAR2 = VAR3.FUN4("");
                }
                catch (IOException VAR5)
                {
                    VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
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
                    catch (IOException VAR5)
                    {
                        VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
                    }
                }
                
                {
                    Cipher VAR10 = VAR11.FUN5("");
    
                    
                    SecretKeySpec VAR12 = new FUN6("".getBytes(""), "");
                    VAR10.FUN7(VAR11.VAR13, VAR12);
    
                    String VAR14 = new String(VAR10.FUN8(VAR2.getBytes("")), "");
                    VAR2 = VAR14;
                }
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (FUN2())
            {
                
                Connection VAR15 = null;
                try
                {
                    VAR15 = VAR16.getConnection("", "", VAR2);
                }
                catch (SQLException VAR17)
                {
                    VAR6.VAR7.log(VAR8.VAR9, "", VAR17);
                }
                finally
                {
                    try
                    {
                        if (VAR15 != null)
                        {
                            VAR15.close();
                        }
                    }
                    catch (SQLException VAR17)
                    {
                        VAR6.VAR7.log(VAR8.VAR9, "", VAR17);
                    }
                }
            }
        }
};
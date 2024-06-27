class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
    
            if (VAR3.FUN2())
            {
                VAR2 = ""; 
                
                Properties VAR4 = new Properties();
                FileInputStream VAR5 = null;
                try
                {
                    VAR5 = new FileInputStream("");
                    VAR4.FUN3(VAR5);
                    VAR2 = VAR4.FUN4("");
                }
                catch (IOException VAR6)
                {
                    VAR3.VAR7.log(VAR8.VAR9, "", VAR6);
                }
                finally
                {
                    
                    try
                    {
                        if (VAR5 != null)
                        {
                            VAR5.close();
                        }
                    }
                    catch (IOException VAR6)
                    {
                        VAR3.VAR7.log(VAR8.VAR9, "", VAR6);
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
    
            if (VAR3.FUN2())
            {
                
                Connection VAR15 = null;
                try
                {
                    VAR15 = VAR16.getConnection("", "", VAR2);
                }
                catch (SQLException VAR17)
                {
                    VAR3.VAR7.log(VAR8.VAR9, "", VAR17);
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
                        VAR3.VAR7.log(VAR8.VAR9, "", VAR17);
                    }
                }
            }
        }
};
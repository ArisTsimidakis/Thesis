class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.VAR4==5)
            {
                VAR2 = ""; 
                
                Properties VAR5 = new Properties();
                FileInputStream VAR6 = null;
                try
                {
                    VAR6 = new FileInputStream("");
                    VAR5.FUN2(VAR6);
                    VAR2 = VAR5.FUN3("");
                }
                catch (IOException VAR7)
                {
                    VAR3.VAR8.log(VAR9.VAR10, "", VAR7);
                }
                finally
                {
                    
                    try
                    {
                        if (VAR6 != null)
                        {
                            VAR6.close();
                        }
                    }
                    catch (IOException VAR7)
                    {
                        VAR3.VAR8.log(VAR9.VAR10, "", VAR7);
                    }
                }
                
                {
                    Cipher VAR11 = VAR12.FUN4("");
    
                    
                    SecretKeySpec VAR13 = new FUN5("".getBytes(""), "");
                    VAR11.FUN6(VAR12.VAR14, VAR13);
    
                    String VAR15 = new String(VAR11.FUN7(VAR2.getBytes("")), "");
                    VAR2 = VAR15;
                }
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (VAR3.VAR4==5)
            {
                
                Connection VAR16 = null;
                try
                {
                    VAR16 = VAR17.getConnection("", "", VAR2);
                }
                catch (SQLException VAR18)
                {
                    VAR3.VAR8.log(VAR9.VAR10, "", VAR18);
                }
                finally
                {
                    try
                    {
                        if (VAR16 != null)
                        {
                            VAR16.close();
                        }
                    }
                    catch (SQLException VAR18)
                    {
                        VAR3.VAR8.log(VAR9.VAR10, "", VAR18);
                    }
                }
            }
        }
};
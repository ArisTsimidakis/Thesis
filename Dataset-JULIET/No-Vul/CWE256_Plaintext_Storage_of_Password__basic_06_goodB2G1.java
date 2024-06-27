class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3==5)
            {
                VAR2 = ""; 
                
                Properties VAR4 = new Properties();
                FileInputStream VAR5 = null;
                try
                {
                    VAR5 = new FileInputStream("");
                    VAR4.FUN2(VAR5);
                    VAR2 = VAR4.FUN3("");
                }
                catch (IOException VAR6)
                {
                    VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
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
                        VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                    }
                }
                
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (VAR3!=5)
            {
                
                VAR7.writeLine("");
            }
            else
            {
    
                
                {
                    Cipher VAR11 = VAR12.FUN4("");
    
                    
                    SecretKeySpec VAR13 = new FUN5("".getBytes(""), "");
                    VAR11.FUN6(VAR12.VAR14, VAR13);
    
                    String VAR15 = new String(VAR11.FUN7(VAR2.getBytes("")), "");
                    VAR2 = VAR15;
                }
    
                Connection VAR16 = null;
                try
                {
                    VAR16 = VAR17.getConnection("", "", VAR2);
                }
                catch (SQLException VAR18)
                {
                    VAR7.VAR8.log(VAR9.VAR10, "", VAR18);
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
                        VAR7.VAR8.log(VAR9.VAR10, "", VAR18);
                    }
                }
    
            }
        }
};
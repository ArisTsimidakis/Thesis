class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
    
            if (VAR3)
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
    
            if (VAR11)
            {
                
                VAR7.writeLine("");
            }
            else
            {
    
                
                {
                    Cipher VAR12 = VAR13.FUN4("");
    
                    
                    SecretKeySpec VAR14 = new FUN5("".getBytes(""), "");
                    VAR12.FUN6(VAR13.VAR15, VAR14);
    
                    String VAR16 = new String(VAR12.FUN7(VAR2.getBytes("")), "");
                    VAR2 = VAR16;
                }
    
                Connection VAR17 = null;
                try
                {
                    VAR17 = VAR18.getConnection("", "", VAR2);
                }
                catch (SQLException VAR19)
                {
                    VAR7.VAR8.log(VAR9.VAR10, "", VAR19);
                }
                finally
                {
                    try
                    {
                        if (VAR17 != null)
                        {
                            VAR17.close();
                        }
                    }
                    catch (SQLException VAR19)
                    {
                        VAR7.VAR8.log(VAR9.VAR10, "", VAR19);
                    }
                }
    
            }
        }
};
class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.VAR4)
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
                
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (VAR3.VAR11)
            {
                
                VAR3.writeLine("");
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
                    VAR3.VAR8.log(VAR9.VAR10, "", VAR19);
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
                        VAR3.VAR8.log(VAR9.VAR10, "", VAR19);
                    }
                }
    
            }
        }
};
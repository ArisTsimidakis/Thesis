class VAR1{
    private void FUN1(String VAR2 ) throws Throwable
        {
    
            if (VAR2 != null)
            {
                
                {
                    Cipher VAR3 = VAR4.FUN2("");
                    
                    SecretKeySpec VAR5 = new FUN3("".getBytes(""), "");
                    VAR3.FUN4(VAR4.VAR6, VAR5);
                    VAR2 = new String(VAR3.FUN5(VAR2.getBytes("")), "");
                }
                Connection VAR7 = null;
                PreparedStatement VAR8 = null;
                ResultSet VAR9 = null;
                try
                {
                    
                    VAR7 = VAR10.getConnection("", "", VAR2);
                    VAR8 = VAR7.FUN6("");
                    VAR9 = VAR8.executeQuery();
                }
                catch (SQLException VAR11)
                {
                    VAR12.VAR13.log(VAR14.VAR15, "", VAR11);
                }
                finally
                {
                    try
                    {
                        if (VAR9 != null)
                        {
                            VAR9.close();
                        }
                    }
                    catch (SQLException VAR11)
                    {
                        VAR12.VAR13.log(VAR14.VAR15, "", VAR11);
                    }
    
                    try
                    {
                        if (VAR8 != null)
                        {
                            VAR8.close();
                        }
                    }
                    catch (SQLException VAR11)
                    {
                        VAR12.VAR13.log(VAR14.VAR15, "", VAR11);
                    }
    
                    try
                    {
                        if (VAR7 != null)
                        {
                            VAR7.close();
                        }
                    }
                    catch (SQLException VAR11)
                    {
                        VAR12.VAR13.log(VAR14.VAR15, "", VAR11);
                    }
                }
            }
    
        }
};
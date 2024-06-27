class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2 = VAR3;
    
            if (VAR2 != null)
            {
                
                {
                    Cipher VAR4 = VAR5.FUN2("");
                    
                    SecretKeySpec VAR6 = new FUN3("".getBytes(""), "");
                    VAR4.FUN4(VAR5.VAR7, VAR6);
                    VAR2 = new String(VAR4.FUN5(VAR2.getBytes("")), "");
                }
                Connection VAR8 = null;
                PreparedStatement VAR9 = null;
                ResultSet VAR10 = null;
                try
                {
                    
                    VAR8 = VAR11.getConnection("", "", VAR2);
                    VAR9 = VAR8.FUN6("");
                    VAR10 = VAR9.executeQuery();
                }
                catch (SQLException VAR12)
                {
                    VAR13.VAR14.log(VAR15.VAR16, "", VAR12);
                }
                finally
                {
                    try
                    {
                        if (VAR10 != null)
                        {
                            VAR10.close();
                        }
                    }
                    catch (SQLException VAR12)
                    {
                        VAR13.VAR14.log(VAR15.VAR16, "", VAR12);
                    }
    
                    try
                    {
                        if (VAR9 != null)
                        {
                            VAR9.close();
                        }
                    }
                    catch (SQLException VAR12)
                    {
                        VAR13.VAR14.log(VAR15.VAR16, "", VAR12);
                    }
    
                    try
                    {
                        if (VAR8 != null)
                        {
                            VAR8.close();
                        }
                    }
                    catch (SQLException VAR12)
                    {
                        VAR13.VAR14.log(VAR15.VAR16, "", VAR12);
                    }
                }
            }
    
        }
};
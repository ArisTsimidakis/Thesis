class VAR1{
    public void FUN1(Object VAR2 ) throws Throwable
        {
            String VAR3 = (String)VAR2;
    
            if (VAR3 != null)
            {
                
                {
                    Cipher VAR4 = VAR5.FUN2("");
                    
                    SecretKeySpec VAR6 = new FUN3("".getBytes(""), "");
                    VAR4.FUN4(VAR5.VAR7, VAR6);
                    VAR3 = new String(VAR4.FUN5(VAR3.getBytes("")), "");
                }
                Connection VAR8 = null;
                PreparedStatement VAR9 = null;
                ResultSet VAR10 = null;
                try
                {
                    
                    VAR8 = VAR11.getConnection("", "", VAR3);
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
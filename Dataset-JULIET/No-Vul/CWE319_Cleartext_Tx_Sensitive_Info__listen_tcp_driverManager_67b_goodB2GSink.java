class VAR1{
    public void FUN1(VAR2.Container VAR3 ) throws Throwable
        {
            String VAR4 = VAR3.VAR5;
    
            if (VAR4 != null)
            {
                
                {
                    Cipher VAR6 = VAR7.FUN2("");
                    
                    SecretKeySpec VAR8 = new FUN3("".getBytes(""), "");
                    VAR6.FUN4(VAR7.VAR9, VAR8);
                    VAR4 = new String(VAR6.FUN5(VAR4.getBytes("")), "");
                }
                Connection VAR10 = null;
                PreparedStatement VAR11 = null;
                ResultSet VAR12 = null;
                try
                {
                    
                    VAR10 = VAR13.getConnection("", "", VAR4);
                    VAR11 = VAR10.FUN6("");
                    VAR12 = VAR11.executeQuery();
                }
                catch (SQLException VAR14)
                {
                    VAR15.VAR16.log(VAR17.VAR18, "", VAR14);
                }
                finally
                {
                    try
                    {
                        if (VAR12 != null)
                        {
                            VAR12.close();
                        }
                    }
                    catch (SQLException VAR14)
                    {
                        VAR15.VAR16.log(VAR17.VAR18, "", VAR14);
                    }
    
                    try
                    {
                        if (VAR11 != null)
                        {
                            VAR11.close();
                        }
                    }
                    catch (SQLException VAR14)
                    {
                        VAR15.VAR16.log(VAR17.VAR18, "", VAR14);
                    }
    
                    try
                    {
                        if (VAR10 != null)
                        {
                            VAR10.close();
                        }
                    }
                    catch (SQLException VAR14)
                    {
                        VAR15.VAR16.log(VAR17.VAR18, "", VAR14);
                    }
                }
            }
    
        }
};
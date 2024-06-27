class VAR1{
    public void FUN1(VAR2<String> VAR3 ) throws Throwable
        {
            String VAR4 = VAR3.remove(2);
    
            if (VAR4 != null)
            {
                
                {
                    Cipher VAR5 = VAR6.FUN2("");
                    
                    SecretKeySpec VAR7 = new FUN3("".getBytes(""), "");
                    VAR5.FUN4(VAR6.VAR8, VAR7);
                    VAR4 = new String(VAR5.FUN5(VAR4.getBytes("")), "");
                }
                Connection VAR9 = null;
                PreparedStatement VAR10 = null;
                ResultSet VAR11 = null;
                try
                {
                    
                    VAR9 = VAR12.getConnection("", "", VAR4);
                    VAR10 = VAR9.FUN6("");
                    VAR11 = VAR10.executeQuery();
                }
                catch (SQLException VAR13)
                {
                    VAR14.VAR15.log(VAR16.VAR17, "", VAR13);
                }
                finally
                {
                    try
                    {
                        if (VAR11 != null)
                        {
                            VAR11.close();
                        }
                    }
                    catch (SQLException VAR13)
                    {
                        VAR14.VAR15.log(VAR16.VAR17, "", VAR13);
                    }
    
                    try
                    {
                        if (VAR10 != null)
                        {
                            VAR10.close();
                        }
                    }
                    catch (SQLException VAR13)
                    {
                        VAR14.VAR15.log(VAR16.VAR17, "", VAR13);
                    }
    
                    try
                    {
                        if (VAR9 != null)
                        {
                            VAR9.close();
                        }
                    }
                    catch (SQLException VAR13)
                    {
                        VAR14.VAR15.log(VAR16.VAR17, "", VAR13);
                    }
                }
            }
    
        }
};
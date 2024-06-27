class VAR1{
    public void FUN1(String VAR2 ) throws Throwable
        {
            if (VAR3.VAR4)
            {
                
                {
                    Cipher VAR5 = VAR6.FUN2("");
                    
                    SecretKeySpec VAR7 = new FUN3("".getBytes(""), "");
                    VAR5.FUN4(VAR6.VAR8, VAR7);
                    String VAR9 = new String(VAR5.FUN5(VAR2.getBytes("")), "");
                    VAR2 = VAR9;
                }
                Connection VAR10 = null;
                try
                {
                    VAR10 = VAR11.getConnection("", "", VAR2);
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
                }
            }
            else
            {
                
                VAR2 = null;
            }
        }
};
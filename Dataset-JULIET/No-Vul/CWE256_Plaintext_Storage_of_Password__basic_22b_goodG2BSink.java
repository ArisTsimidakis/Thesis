class VAR1{
    public void FUN1(String VAR2 ) throws Throwable
        {
            if (VAR3.VAR4)
            {
                
                Connection VAR5 = null;
                try
                {
                    VAR5 = VAR6.getConnection("", "", VAR2);
                }
                catch (SQLException VAR7)
                {
                    VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
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
                    catch (SQLException VAR7)
                    {
                        VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                    }
                }
            }
            else
            {
                
                VAR2 = null;
            }
        }
};
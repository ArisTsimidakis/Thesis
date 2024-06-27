class VAR1{
    private void FUN1(String VAR2 ) throws Throwable
        {
            if (VAR3)
            {
                
                Connection VAR4 = null;
                try
                {
                    VAR4 = VAR5.getConnection("", "", VAR2);
                }
                catch (SQLException VAR6)
                {
                    VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                }
                finally
                {
                    try
                    {
                        if (VAR4 != null)
                        {
                            VAR4.close();
                        }
                    }
                    catch (SQLException VAR6)
                    {
                        VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                    }
                }
            }
        }
};
class VAR1{
    private void FUN1() throws Throwable
        {
            if (VAR2.FUN2())
            {
                InputStreamReader VAR3 = null;
                BufferedReader VAR4 = null;
                StringBuffer VAR5 = new FUN3();
                Connection VAR6 = null;
                
                try
                {
                    VAR3 = new InputStreamReader(System.in, "");
                    VAR4 = new BufferedReader(VAR3);
                    VAR5.FUN4(VAR4.readLine());
                    VAR6 = VAR7.getConnection("", "", VAR5.FUN5());
                }
                catch (IOException VAR8)
                {
                    VAR2.VAR9.log(VAR10.VAR11, "", VAR8);
                }
                catch (SQLException VAR12)
                {
                    VAR2.VAR9.log(VAR10.VAR11, "", VAR12);
                }
                finally
                {
                    
                    VAR5.delete(0, VAR5.length());
    
                    try
                    {
                        if (VAR6 != null)
                        {
                            VAR6.close();
                        }
                    }
                    catch (SQLException VAR12)
                    {
                        VAR2.VAR9.log(VAR10.VAR11, "", VAR12);
                    }
    
                    try
                    {
                        if (VAR4 != null)
                        {
                            VAR4.close();
                        }
                    }
                    catch (IOException VAR8)
                    {
                        VAR2.VAR9.log(VAR10.VAR11, "", VAR8);
                    }
    
                    try
                    {
                        if (VAR3 != null)
                        {
                            VAR3.close();
                        }
                    }
                    catch (IOException VAR8)
                    {
                        VAR2.VAR9.log(VAR10.VAR11, "", VAR8);
                    }
                }
            }
        }
};
class VAR1{
    private void FUN1() throws Throwable
        {
            if (FUN2())
            {
                InputStreamReader VAR2 = null;
                BufferedReader VAR3 = null;
                StringBuffer VAR4 = new FUN3();
                Connection VAR5 = null;
                
                try
                {
                    VAR2 = new InputStreamReader(System.in, "");
                    VAR3 = new BufferedReader(VAR2);
                    VAR4.FUN4(VAR3.readLine());
                    VAR5 = VAR6.getConnection("", "", VAR4.FUN5());
                }
                catch (IOException VAR7)
                {
                    VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                }
                catch (SQLException VAR12)
                {
                    VAR8.VAR9.log(VAR10.VAR11, "", VAR12);
                }
                finally
                {
                    
                    VAR4.delete(0, VAR4.length());
    
                    try
                    {
                        if (VAR5 != null)
                        {
                            VAR5.close();
                        }
                    }
                    catch (SQLException VAR12)
                    {
                        VAR8.VAR9.log(VAR10.VAR11, "", VAR12);
                    }
    
                    try
                    {
                        if (VAR3 != null)
                        {
                            VAR3.close();
                        }
                    }
                    catch (IOException VAR7)
                    {
                        VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                    }
    
                    try
                    {
                        if (VAR2 != null)
                        {
                            VAR2.close();
                        }
                    }
                    catch (IOException VAR7)
                    {
                        VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                    }
                }
            }
        }
};
class VAR1{
    public void FUN1() throws Throwable
        {
            if (VAR2)
            {
                InputStreamReader VAR3 = null;
                BufferedReader VAR4 = null;
                StringBuffer VAR5 = new FUN2();
                Connection VAR6 = null;
                
                try
                {
                    VAR3 = new InputStreamReader(System.in, "");
                    VAR4 = new BufferedReader(VAR3);
                    VAR5.FUN3(VAR4.readLine());
                    VAR6 = VAR7.getConnection("", "", VAR5.FUN4());
                }
                catch (IOException VAR8)
                {
                    VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
                }
                catch (SQLException VAR13)
                {
                    VAR9.VAR10.log(VAR11.VAR12, "", VAR13);
                }
                finally
                {
                    
    
                    try
                    {
                        if (VAR6 != null)
                        {
                            VAR6.close();
                        }
                    }
                    catch (SQLException VAR13)
                    {
                        VAR9.VAR10.log(VAR11.VAR12, "", VAR13);
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
                        VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
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
                        VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
                    }
                }
            }
        }
};
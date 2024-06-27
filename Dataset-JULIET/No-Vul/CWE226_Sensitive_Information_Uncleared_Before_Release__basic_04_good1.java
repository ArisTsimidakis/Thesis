class VAR1{
    private void FUN1() throws Throwable
        {
            if (VAR2)
            {
                
                VAR3.writeLine("");
            }
            else
            {
    
                InputStreamReader VAR4 = null;
                BufferedReader VAR5 = null;
                StringBuffer VAR6 = new FUN2();
                Connection VAR7 = null;
    
                
                try
                {
                    VAR4 = new InputStreamReader(System.in, "");
                    VAR5 = new BufferedReader(VAR4);
    
                    VAR6.FUN3(VAR5.readLine());
    
                    VAR7 = VAR8.getConnection("", "", VAR6.FUN4());
                }
                catch (IOException VAR9)
                {
                    VAR3.VAR10.log(VAR11.VAR12, "", VAR9);
                }
                catch (SQLException VAR13)
                {
                    VAR3.VAR10.log(VAR11.VAR12, "", VAR13);
                }
                finally
                {
                    
                    VAR6.delete(0, VAR6.length());
    
                    try
                    {
                        if (VAR7 != null)
                        {
                            VAR7.close();
                        }
                    }
                    catch (SQLException VAR13)
                    {
                        VAR3.VAR10.log(VAR11.VAR12, "", VAR13);
                    }
    
                    try
                    {
                        if (VAR5 != null)
                        {
                            VAR5.close();
                        }
                    }
                    catch (IOException VAR9)
                    {
                        VAR3.VAR10.log(VAR11.VAR12, "", VAR9);
                    }
    
                    try
                    {
                        if (VAR4 != null)
                        {
                            VAR4.close();
                        }
                    }
                    catch (IOException VAR9)
                    {
                        VAR3.VAR10.log(VAR11.VAR12, "", VAR9);
                    }
                }
    
            }
        }
};
class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
    
            VAR2 = ""; 
            {
                File VAR3 = new File("");
                FileInputStream VAR4 = null;
                InputStreamReader VAR5 = null;
                BufferedReader VAR6 = null;
    
                try
                {
                    
                    VAR4 = new FileInputStream(VAR3);
                    VAR5 = new InputStreamReader(VAR4, "");
                    VAR6 = new BufferedReader(VAR5);
    
                    
                    
                    VAR2 = VAR6.readLine();
                }
                catch (IOException VAR7)
                {
                    VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
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
                    catch (IOException VAR7)
                    {
                        VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                    }
    
                    try
                    {
                        if (VAR5 != null)
                        {
                            VAR5.close();
                        }
                    }
                    catch (IOException VAR7)
                    {
                        VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                    }
    
                    try
                    {
                        if (VAR4 != null)
                        {
                            VAR4.close();
                        }
                    }
                    catch (IOException VAR7)
                    {
                        VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                    }
                }
            }
    
            CWE643_Xpath_Injection__File_81_base VAR12 = new FUN2();
            VAR12.FUN3(VAR2 );
        }
};
class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2 = VAR3;
    
            String VAR4;
            if(System.FUN2("").toLowerCase().indexOf("") >= 0)
            {
                
                VAR4 = "";
            }
            else
            {
                
                VAR4 = "";
            }
    
            if (VAR2 != null)
            {
                
                File VAR5 = new File(VAR4 + VAR2);
                FileInputStream VAR6 = null;
                InputStreamReader VAR7 = null;
                BufferedReader VAR8 = null;
                if (VAR5.exists() && VAR5.isFile())
                {
                    try
                    {
                        VAR6 = new FileInputStream(VAR5);
                        VAR7 = new InputStreamReader(VAR6, "");
                        VAR8 = new BufferedReader(VAR7);
                        VAR9.writeLine(VAR8.readLine());
                    }
                    catch (IOException VAR10)
                    {
                        VAR9.VAR11.log(VAR12.VAR13, "", VAR10);
                    }
                    finally
                    {
                        
                        try
                        {
                            if (VAR8 != null)
                            {
                                VAR8.close();
                            }
                        }
                        catch (IOException VAR10)
                        {
                            VAR9.VAR11.log(VAR12.VAR13, "", VAR10);
                        }
    
                        try
                        {
                            if (VAR7 != null)
                            {
                                VAR7.close();
                            }
                        }
                        catch (IOException VAR10)
                        {
                            VAR9.VAR11.log(VAR12.VAR13, "", VAR10);
                        }
    
                        try
                        {
                            if (VAR6 != null)
                            {
                                VAR6.close();
                            }
                        }
                        catch (IOException VAR10)
                        {
                            VAR9.VAR11.log(VAR12.VAR13, "", VAR10);
                        }
                    }
                }
            }
    
        }
};
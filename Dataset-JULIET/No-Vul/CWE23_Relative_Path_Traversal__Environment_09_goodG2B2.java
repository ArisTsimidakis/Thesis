class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.VAR4)
            {
                
                VAR2 = "";
            }
            else
            {
                
                VAR2 = null;
            }
    
            String VAR5;
            if(System.FUN2("").toLowerCase().indexOf("") >= 0)
            {
                
                VAR5 = "";
            }
            else
            {
                
                VAR5 = "";
            }
    
            if (VAR2 != null)
            {
                
                File VAR6 = new File(VAR5 + VAR2);
                FileInputStream VAR7 = null;
                InputStreamReader VAR8 = null;
                BufferedReader VAR9 = null;
                if (VAR6.exists() && VAR6.isFile())
                {
                    try
                    {
                        VAR7 = new FileInputStream(VAR6);
                        VAR8 = new InputStreamReader(VAR7, "");
                        VAR9 = new BufferedReader(VAR8);
                        VAR3.writeLine(VAR9.readLine());
                    }
                    catch (IOException VAR10)
                    {
                        VAR3.VAR11.log(VAR12.VAR13, "", VAR10);
                    }
                    finally
                    {
                        
                        try
                        {
                            if (VAR9 != null)
                            {
                                VAR9.close();
                            }
                        }
                        catch (IOException VAR10)
                        {
                            VAR3.VAR11.log(VAR12.VAR13, "", VAR10);
                        }
    
                        try
                        {
                            if (VAR8 != null)
                            {
                                VAR8.close();
                            }
                        }
                        catch (IOException VAR10)
                        {
                            VAR3.VAR11.log(VAR12.VAR13, "", VAR10);
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
                            VAR3.VAR11.log(VAR12.VAR13, "", VAR10);
                        }
                    }
                }
            }
    
        }
};
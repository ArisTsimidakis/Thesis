class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            {
                String VAR3;
    
                VAR3 = ""; 
                {
                    File VAR4 = new File("");
                    FileInputStream VAR5 = null;
                    InputStreamReader VAR6 = null;
                    BufferedReader VAR7 = null;
    
                    try
                    {
                        
                        VAR5 = new FileInputStream(VAR4);
                        VAR6 = new InputStreamReader(VAR5, "");
                        VAR7 = new BufferedReader(VAR6);
    
                        
                        
                        VAR3 = VAR7.readLine();
                    }
                    catch (IOException VAR8)
                    {
                        VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
                    }
                    finally
                    {
                        
                        try
                        {
                            if (VAR7 != null)
                            {
                                VAR7.close();
                            }
                        }
                        catch (IOException VAR8)
                        {
                            VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
                        }
    
                        try
                        {
                            if (VAR6 != null)
                            {
                                VAR6.close();
                            }
                        }
                        catch (IOException VAR8)
                        {
                            VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
                        }
    
                        try
                        {
                            if (VAR5 != null)
                            {
                                VAR5.close();
                            }
                        }
                        catch (IOException VAR8)
                        {
                            VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
                        }
                    }
                }
    
                VAR2 = VAR3;
            }
            {
                String VAR3 = VAR2;
    
                if (VAR3 != null)
                {
                    
                    System.VAR13.printf("", VAR3);
                }
    
            }
        }
};
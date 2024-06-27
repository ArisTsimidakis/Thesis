class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.VAR4 != 5)
            {
                
                VAR2 = null;
            }
            else
            {
    
                
                VAR2 = "";
    
            }
    
            
            if (VAR2 != null)
            {
                File VAR5 = new File(VAR2);
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
                        VAR3.writeLine(VAR8.readLine());
                    }
                    catch (IOException VAR9)
                    {
                        VAR3.VAR10.log(VAR11.VAR12, "", VAR9);
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
                        catch (IOException VAR9)
                        {
                            VAR3.VAR10.log(VAR11.VAR12, "", VAR9);
                        }
    
                        try
                        {
                            if (VAR7 != null)
                            {
                                VAR7.close();
                            }
                        }
                        catch (IOException VAR9)
                        {
                            VAR3.VAR10.log(VAR11.VAR12, "", VAR9);
                        }
    
                        try
                        {
                            if (VAR6 != null)
                            {
                                VAR6.close();
                            }
                        }
                        catch (IOException VAR9)
                        {
                            VAR3.VAR10.log(VAR11.VAR12, "", VAR9);
                        }
                    }
                }
            }
    
        }
};
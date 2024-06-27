class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
    
            
            
            VAR2 = System.FUN2("");
    
            String VAR3;
            if(System.FUN2("").toLowerCase().indexOf("") >= 0)
            {
                
                VAR3 = "";
            }
            else
            {
                
                VAR3 = "";
            }
    
            if (VAR2 != null)
            {
                
                File VAR4 = new File(VAR3 + VAR2);
                FileInputStream VAR5 = null;
                InputStreamReader VAR6 = null;
                BufferedReader VAR7 = null;
                if (VAR4.exists() && VAR4.isFile())
                {
                    try
                    {
                        VAR5 = new FileInputStream(VAR4);
                        VAR6 = new InputStreamReader(VAR5, "");
                        VAR7 = new BufferedReader(VAR6);
                        VAR8.writeLine(VAR7.readLine());
                    }
                    catch (IOException VAR9)
                    {
                        VAR8.VAR10.log(VAR11.VAR12, "", VAR9);
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
                        catch (IOException VAR9)
                        {
                            VAR8.VAR10.log(VAR11.VAR12, "", VAR9);
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
                            VAR8.VAR10.log(VAR11.VAR12, "", VAR9);
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
                            VAR8.VAR10.log(VAR11.VAR12, "", VAR9);
                        }
                    }
                }
            }
    
        }
};
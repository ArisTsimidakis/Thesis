class VAR1{
    public void FUN1(VAR2.Container VAR3 ) throws Throwable
        {
            String VAR4 = VAR3.VAR5;
    
            String VAR6;
            if(System.FUN2("").toLowerCase().indexOf("") >= 0)
            {
                
                VAR6 = "";
            }
            else
            {
                
                VAR6 = "";
            }
    
            if (VAR4 != null)
            {
                
                File VAR7 = new File(VAR6 + VAR4);
                FileInputStream VAR8 = null;
                InputStreamReader VAR9 = null;
                BufferedReader VAR10 = null;
                if (VAR7.exists() && VAR7.isFile())
                {
                    try
                    {
                        VAR8 = new FileInputStream(VAR7);
                        VAR9 = new InputStreamReader(VAR8, "");
                        VAR10 = new BufferedReader(VAR9);
                        VAR11.writeLine(VAR10.readLine());
                    }
                    catch (IOException VAR12)
                    {
                        VAR11.VAR13.log(VAR14.VAR15, "", VAR12);
                    }
                    finally
                    {
                        
                        try
                        {
                            if (VAR10 != null)
                            {
                                VAR10.close();
                            }
                        }
                        catch (IOException VAR12)
                        {
                            VAR11.VAR13.log(VAR14.VAR15, "", VAR12);
                        }
    
                        try
                        {
                            if (VAR9 != null)
                            {
                                VAR9.close();
                            }
                        }
                        catch (IOException VAR12)
                        {
                            VAR11.VAR13.log(VAR14.VAR15, "", VAR12);
                        }
    
                        try
                        {
                            if (VAR8 != null)
                            {
                                VAR8.close();
                            }
                        }
                        catch (IOException VAR12)
                        {
                            VAR11.VAR13.log(VAR14.VAR15, "", VAR12);
                        }
                    }
                }
            }
    
        }
};
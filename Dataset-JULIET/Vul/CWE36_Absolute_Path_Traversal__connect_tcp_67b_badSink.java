class VAR1{
    public void FUN1(VAR2.Container VAR3 ) throws Throwable
        {
            String VAR4 = VAR3.VAR5;
    
            
            if (VAR4 != null)
            {
                File VAR6 = new File(VAR4);
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
                        VAR10.writeLine(VAR9.readLine());
                    }
                    catch (IOException VAR11)
                    {
                        VAR10.VAR12.log(VAR13.VAR14, "", VAR11);
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
                        catch (IOException VAR11)
                        {
                            VAR10.VAR12.log(VAR13.VAR14, "", VAR11);
                        }
    
                        try
                        {
                            if (VAR8 != null)
                            {
                                VAR8.close();
                            }
                        }
                        catch (IOException VAR11)
                        {
                            VAR10.VAR12.log(VAR13.VAR14, "", VAR11);
                        }
    
                        try
                        {
                            if (VAR7 != null)
                            {
                                VAR7.close();
                            }
                        }
                        catch (IOException VAR11)
                        {
                            VAR10.VAR12.log(VAR13.VAR14, "", VAR11);
                        }
                    }
                }
            }
    
        }
};